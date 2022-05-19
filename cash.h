#ifndef CASH
#define CASH
#include "payment.h"

class Cash : public Payment {

protected:
    int Cash_amount;
    int Balance;

public:
    Cash();
    Cash(int camount, int bln);
    void setCash_amount(int cash);
    int Calc_Balance();
    void display();
    ~Cash();
};

#endif