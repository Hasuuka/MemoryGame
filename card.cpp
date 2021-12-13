#include "card.h"

Card::Card(Symbol symbol, User* user)
{
    m_user = user;
    m_symbol = symbol;
    m_visible = false;
    m_scored = false;
}


void Card::setVisible(bool newVisible)
{
    m_visible = newVisible;
}

bool Card::compareCards(Card* card){
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

bool Card::scored() const
{
    return m_scored;
}

void Card::setScored(bool newScored)
{
    m_scored = newScored;
}
