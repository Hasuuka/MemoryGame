#ifndef GAME_H
#define GAME_H

#include <QObject>
#include "ui_mainwindow.h"
#include "mainwindow.h"
namespace Ui {
class MainWindow;
}

class Game : public QObject
{
    Q_OBJECT

public:
    Game(QWidget* parent = nullptr);


public slots:
    void changeText();

private:

    Ui::MainWindow *ui;

};

#endif // GAME_H
