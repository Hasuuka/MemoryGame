#include "user.h"

User::User()
{
    m_life = 3;
    m_points = 0;
    cardsOpen = false;
}

int User::life() const
{
    return m_life;
}

void User::setLife(int newLife)
{
    m_life = newLife;
}

int User::points() const
{
    return m_points;
}

void User::setPoints(int newPoints)
{
    m_points = newPoints;
}

int User::getCardsOpen() const
{
    return cardsOpen;
}

void User::setCardsOpen(int newCardsOpen)
{
    cardsOpen = newCardsOpen;
}
