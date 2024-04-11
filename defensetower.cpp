#include "defensetower.h"
#include <QPixmap>
#include <QVector>
#include <QPointF>
#include <QPolygonF>



// points: (1,0), (2,0), (3,1), (3,2), (2,3), (1,3), (0,2), (0,1)
DefenseTower::DefenseTower(QGraphicsItem *parent) {

    setPixmap(QPixmap(":/images/ArcherTower.png"));

    // set of pointers for the attack area/radius to make a polygon out of them
    QVector<QPointF> points;
    points << QPoint(1,0) << QPoint(2,0) << QPoint(3,1) << QPoint(3,2) <<  QPoint(2,3)
           << QPoint(1,3) << QPoint(0,2) << QPoint(0,1);

    int SCALE_FACTOR = 100;
    for (size_t i = 0, n = points.size(); i < n; i++){
        points[i] *= SCALE_FACTOR;
    }

    AttackArea = new QGraphicsPolygonItem(QPolygonF(points), this);

    QPointF poly_center(1.5,1.5);
    poly_center *= SCALE_FACTOR;
    poly_center = mapToScene(poly_center);
    QPointF tower_center(x()+128, y()+128);
    QLineF line(poly_center,tower_center);
    AttackArea->setPos(x()+line.dx(), y()+line.dy());

}
