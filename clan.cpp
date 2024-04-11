#include "clan.h"

Clan::Clan() {}

void displayClanDesign(){
    QFile ClanFile("/Users/adamrefaat/Desktop/ClashOfClans/ClashOfClans");
    if (!ClanFile.open(QIODevice::OpenModeFlag::ReadOnly)){
        qCritical() << "Error! File not open." ;
        qCritical() << ClanFile.errorString();
        return;
    }
    else{
        QTextStream in(&ClanFile);
        while(!in.atEnd()){
            QString line= in.readLine();
            QStringList integerlist= line.split( ",");
            for(const QString & integerlist : integerlist){
                int val = integerlist.toInt();
                switch (val) {
                case 0:
                   setPixmap(QPixmap(":/Images/EmptyLand.png").scaled(15, 15));
                    break;
                case 1:
                   setPixmap(QPixmap(":/Images/ClanCastle.png").scaled(15, 15));
                    break;
                case 2:
                   setPixmap(QPixmap(":/Images/ArcherTower.png").scaled(15, 15));
                    break;
                case 3:
                   setPixmap(QPixmap(":/Images/Fence.png").scaled(15, 15));
                    break;
                default:
                    qCritical() << "Invalid value." ;
                    break;
                }
            }
        }
    }
}
