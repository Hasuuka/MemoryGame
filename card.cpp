#include "card.h"

Card::Card(Symbol symbol, bool visible, User* user)
{
    m_user = user;
    m_symbol = symbol;
    m_visible = visible;
}

bool Card::visible() const
{
    return m_visible;
}

void Card::setVisible(bool newVisible)
{
    m_visible = newVisible;
}

bool Card::compareCards(Card card){
    if(card.m_symbol==this->m_symbol){
        int points = m_user->points();
        points++;
        m_user->setPoints(points);

    }
    else{
        int life = m_user->life();
        life--;
        m_user->setPoints(life);
    }
}
