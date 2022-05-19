#ifndef CARDPAYMENT
#define CARDPAYMENT
#include "payment.h"

class Card_Payment : public Payment
{

protected:
    int Card_number;
    char Card_type;

public:
    Card_Payment();
    Card_Payment(int cnum,char ctype);
    int getCard_number();
    char getCard_type();
    void Validate_Card();
    void display();
    ~Card_Payment();

};
#endif