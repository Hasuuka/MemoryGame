#ifndef GAME_H
#define GAME_H

#include <QObject>

class Game : public QObject
{
    Q_OBJECT
public:
    Game(QObject *parent = nullptr);

    public slots:

    void doSomething();

};

#endif // GAME_H
