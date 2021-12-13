#ifndef GAME_H
#define GAME_H

#include "user.h"
#include "card.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QObject>

class Game : public QObject
{
    Q_OBJECT
public:
    Game(QObject *parent = nullptr);

signals:
    void inform(int);
    void informVisibility(int, int);

    void informPicture1();
    void informPicture2();
    void informPicture3();
    void informPicture4();
    void informPicture5();
    void informPicture6();

    public slots:

    void changeVisibility(int index, int index2);

    void doSomething(int index);
private:
    User* m_user;
    Card* m_cards[6];
    Ui::MainWindow* ui;


};

#endif // GAME_H
