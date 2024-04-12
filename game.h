<<<<<<< HEAD
#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsScene>

class Game : public QGraphicsView
{
public:
    Game();
    void mousePressEvent(QMouseEvent *event);
    QGraphicsScene * scene;
};

#endif // GAME_H
=======
#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsScene>

class Game : public QGraphicsView
{
public:
    Game();
    void mousePressEvent(QMouseEvent *event);
    QGraphicsScene * scene;
};

#endif // GAME_H
>>>>>>> 0a07dc640bb9bab667a054c8d5d170d05e76cfa9
