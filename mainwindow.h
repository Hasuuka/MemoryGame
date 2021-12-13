#ifndef MAINWINDOW_H
#define MAINWINDOW_H

class Game;

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

     explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void changePicture1_1();
    void changePicture1_2();

    void changePicture2_1();
    void changePicture2_2();

    void changePicture3_1();
    void changePicture3_2();

    void changePicture4_1();
    void changePicture4_2();

    void changePicture5_1();
    void changePicture5_2();

    void changePicture6_1();
    void changePicture6_2();


private:
    Game* game;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
