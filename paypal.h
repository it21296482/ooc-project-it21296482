#ifndef PAYPAL
#define PAYPAL
#include "payment.h"
#include <cstring>

class Paypal : public Payment
{

protected:
    char Email[200];
    int Contact_no;


public:
    Paypal();
    Paypal(int mail, int con_No);
    char* getEmail();
    int getContact_No();
    void display();
    ~Paypal();

};
#endif