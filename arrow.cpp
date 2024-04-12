#include "arrow.h"
#include <QPixmap>
#include <QTimer>
#include <qmath.h>

Arrow::Arrow(QGraphicsItem *parent) {

    //connecting the timer to the move method
    setPixmap(QPixmap(":images/Arrow.png"));
    QTimer * move_timer = new QTimer(this);
    connect(move_timer, SIGNAL(timeout()), this, SLOT(move()));
    move_timer->start(50);

}

void Arrow::move(){
    int STEP_SIZE = 30;
    double theta = rotation(); // getting degrees of rotation

    double dy = STEP_SIZE * qSin(qDegreesToRadians(theta));
    double dx = STEP_SIZE * qCos(qDegreesToRadians(theta));

    setPos(x()+dx, y()+dy);
}
