#ifndef CARD_H
#define CARD_H

#include "user.h"
enum Symbol{
    circle,
    triangle,
    rectangle
};

class Card
{
public:
    Card(Symbol symbol, bool visible, User* user);

    void setVisible(bool newVisible);
    bool compareCards(Card card);

private:
    Symbol m_symbol;
    bool m_visible;
    User * m_user;

};

#endif // CARD_H
