#include "game.h"
#include "user.h"

Game::Game(QObject* parent): QObject(parent)
{
    m_user = new User();
    m_cards[0]= new Card(circle, m_user);
    m_cards[1]= new Card(rectangle, m_user);
    m_cards[2]= new Card(circle, m_user);
    m_cards[3]= new Card(triangle, m_user);
    m_cards[4]= new Card(rectangle, m_user);
    m_cards[5]= new Card(triangle, m_user);

    connect(this, &Game::inform, this, &Game::doSomething);

}

void Game::doSomething(int index){
    int index2 = -1;
    m_cards[index]->setVisible(true);

    emit informButtonOff(index);

    int cardsOpen = m_user->getCardsOpen();
    cardsOpen++;
    m_user->setCardsOpen(cardsOpen);
    if(m_user->getCardsOpen()==2){
        for(int i=0;i < 6;i++){
            if(m_cards[i]->visible()==true&&i!=index){
                index2 = i;
                break;
            }
        }
        if(m_cards[index]->compareCards(m_cards[index2]))
        {
            m_user->setCardsOpen(0);
            m_cards[index]->setScored(true);
            m_cards[index2]->setScored(true);
            m_cards[index]->setVisible(false);
            m_cards[index2]->setVisible(false);

            m_user->setPoints(m_user->points()+1);
            emit setPoints(m_user->points());

        }
        else{
            m_user->setLife(m_user->life()-1);
            emit setLifes(m_user->life());

            changeVisibility(index, index2);
            emit informButtonOn(index);
            emit informButtonOn(index2);

            //game over
            if(m_user->life() < 1){
                emit informButtonOff(0);
                emit informButtonOff(1);
                emit informButtonOff(2);
                emit informButtonOff(3);
                emit informButtonOff(4);
                emit informButtonOff(5);
                emit setPoints(-1);
            }
        }
    }

}

void Game::newGame(){
    emit informButtonOn(0);
    emit informButtonOn(1);
    emit informButtonOn(2);
    emit informButtonOn(3);
    emit informButtonOn(4);
    emit informButtonOn(5);

    m_user->setLife(3);
    emit setLifes(m_user->life());

    m_user->setPoints(0);
    emit setPoints(m_user->points());

    changeVisibility(0, 1);
    changeVisibility(2, 3);
    changeVisibility(4, 5);

}

void Game::changeVisibility(int index, int index2){
    m_cards[index]->setVisible(false);
    m_cards[index2]->setVisible(false);
    m_user->setCardsOpen(0);

    switch(index){
    case 0:
        emit informPicture1();
        break;
    case 1:
        emit informPicture2();
        break;
    case 2:
        emit informPicture3();
        break;
    case 3:
        emit informPicture4();
        break;
    case 4:
        emit informPicture5();
        break;
    case 5:
        emit informPicture6();
        break;
    }

    switch(index2){
    case 0:
        emit informPicture1();
        break;
    case 1:
        emit informPicture2();
        break;
    case 2:
        emit informPicture3();
        break;
    case 3:
        emit informPicture4();
        break;
    case 4:
        emit informPicture5();
        break;
    case 5:
        emit informPicture6();
        break;
    }
}
