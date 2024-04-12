<<<<<<< HEAD
#include "game.h"
#include "arrow.h"
#include "defensetower.h"
#include <QGraphicsScene>

Game::Game() {

    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,800,600);
    setScene(scene);

    DefenseTower * Tower1 = new DefenseTower();

    scene->addItem(Tower1);

    setFixedSize(800,600);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void Game::mousePressEvent(QMouseEvent *event){
    //making an arrow
    Arrow * arrow = new Arrow;
    arrow->setPos(event->pos());
    scene->addItem(arrow);
}
=======
#include "game.h"
#include "arrow.h"
#include "defensetower.h"
#include <QGraphicsScene>

Game::Game() {

    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,800,600);
    setScene(scene);

    DefenseTower * Tower1 = new DefenseTower();

    scene->addItem(Tower1);

    setFixedSize(800,600);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void Game::mousePressEvent(QMouseEvent *event){
    //making an arrow
    Arrow * arrow = new Arrow;
    arrow->setPos(event->pos());
    scene->addItem(arrow);
}
>>>>>>> 0a07dc640bb9bab667a054c8d5d170d05e76cfa9
