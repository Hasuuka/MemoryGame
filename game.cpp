#include "game.h"
#include "user.h"
#include "QDebug"

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
    if(m_cards[index]->scored()==true){
        qDebug() <<"already scored";
        return;
    }
    m_cards[index]->setVisible(true);
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
            qDebug()<<"true";
            m_user->setCardsOpen(0);
            m_cards[index]->setScored(true);
            m_cards[index2]->setScored(true);
            m_user->setCardsOpen(0);
        }
        else{
            qDebug()<<"false";

            changeVisibility(index, index2);
        }
    }

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
