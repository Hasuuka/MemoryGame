#include "card.h"
#include "QDebug"
Card::Card(Symbol symbol, bool visible, User* user)
{
    m_user = user;
    m_symbol = symbol;
    m_visible = visible;
}


void Card::setVisible(bool newVisible)
{
    m_visible = newVisible;
}

bool Card::compareCards(Card* card){
    qDebug() << card->m_symbol << "card 2:" << this->m_symbol;
    if(card->m_symbol==this->m_symbol){
        int points = m_user->points();
        points++;
        m_user->setPoints(points);
        return true;

    }
    else{
        int life = m_user->life();
        life--;
        m_user->setPoints(life);
        return false;
    }
}

bool Card::visible() const
{
    return m_visible;
}
