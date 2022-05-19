
#include<iostream>
#include "cash.h"

using namespace std;


Cash::Cash()
{
}

Cash::Cash(int camount, int bln)
{
    Cash_amount = camount;
    Balance = bln;
}

void Cash::setCash_amount(int cash)
{
    Cash_amount = cash;
}

int Cash::Calc_Balance()
{
    Balance = Cash_amount - Amount;
    return Balance;
}

void Cash::display()
{
    cout << "Amount :" << Amount << endl;
    cout << "Balance :" << Balance << endl;
    cout << "Cash Payment Successfully" << endl;
}

Cash::~Cash()
{

}

