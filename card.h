#ifndef CARD_H
#define CARD_H
#include "QObject"

#include "user.h"
enum Symbol{
    circle,
    triangle,
    rectangle
};

class Card : public QObject
{
    Q_OBJECT

public:
    Card(Symbol symbol, User* user);

    void setVisible(bool newVisible);
    bool compareCards(Card *card);

    bool visible() const;

    bool scored() const;
    void setScored(bool newScored);

private:
    Symbol m_symbol;
    bool m_visible;
    User *m_user;
    bool m_scored;

};

#endif // CARD_H
