#ifndef CLAN_H
#define CLAN_H

#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QPixmap>
#include <QGraphicsItem>
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>

class Clan : public QGraphicsPixmapItem
{
public:
    Clan();
    void displayClanDesign();

private:
    int num;
};

#endif // CLAN_H
