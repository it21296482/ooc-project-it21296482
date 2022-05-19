

#ifndef CUSTOMER
#define CUSTOMER
#include "payment.h"
#define size5 5

class Payment;

class customer {
private:
    char customerName[30]{};
    char customerContactNumber[11]{};
    char address[50]{};
    char customerEmail[50]{};
    Payment *payment[size5];
public:
    void displaycustomerdetails();
    

    customer(const char *cName,const char *cNum,const char *addre,const char *cEmail);
};
#endif