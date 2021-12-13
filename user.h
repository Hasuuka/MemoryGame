#ifndef USER_H
#define USER_H


class User
{
public:
    User();
    virtual ~User(){

    }


    int life() const;
    void setLife(int newLife);
    int points() const;
    void setPoints(int newPoints);
    int getCardsOpen() const;
    void setCardsOpen(int newCardsOpen);

private:
    int m_life;
    int m_points;
    int cardsOpen;



};

#endif // USER_H
