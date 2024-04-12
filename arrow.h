#ifndef ARROW_H
#define ARROW_H

#include <QGraphicsPixmapItem>
#include <QObject>


class Arrow : public QObject, public QGraphicsPixmapItem
{
public:
    Arrow(QGraphicsItem * parent=0);
public slots:
    void move();
};

#endif // ARROW_H
