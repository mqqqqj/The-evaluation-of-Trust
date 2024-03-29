#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <QMainWindow>
#include<QWidget>
#include<battle.h>
#include<QList>
#include <QPainter>
#include <synchapi.h>
#include "rpttournament.h"
namespace Ui {
class tournament;
}

class tournament : public QMainWindow
{
    Q_OBJECT

public:

    explicit tournament(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void refresh(player*a);
    ~tournament();
    pink pk;
    cheater cht;
    detective det;
    copycat cat;
    grudger grd;
    QList<player*>list;

private slots:
    void on_pushButton_clicked();
    void on_getwinner_clicked();

private:
    Ui::tournament *ui;
    rpttournament*rpttour = new rpttournament;
};

#endif // TOURNAMENT_H
