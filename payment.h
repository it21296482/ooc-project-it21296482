#ifndef PAYMENT
#define PAYMENT
#include<iostream>
#include <cstring>
#include "customer.h"
class customer;
class Payment {
protected:
    int invoice_no;
    float Amount;
    char Type[200];
    int Vehicle_No;
    int Customer_ID;
    int discount;
    customer *cus;

public:
    Payment();
    Payment(int inv_no, float Amt,const char Typ[], int Veh_no, int CID, int dis);
    void Calcamount();
    int get_invoice_no();
    int get_Vehicle_No();
    int get_Customer_ID();
    char* get_Type();
    void set_Type(char* Type);
    void Display();
    ~Payment();


};
#endif