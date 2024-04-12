#ifndef DEFENSETOWER_H
#define DEFENSETOWER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>

class DefenseTower : public QGraphicsPixmapItem{
public:
    DefenseTower(QGraphicsItem * parent=0);
    QGraphicsPolygonItem * AttackArea;
};

#endif // DEFENSETOWER_H
