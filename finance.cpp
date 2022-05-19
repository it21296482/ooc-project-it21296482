#include"finance.h"
#include<iostream>
using namespace std;

void finance::displayDetails()
{
    cout << "customer id:" << customer_ID << endl;
    cout << "invoice number:" << invoice_No << endl;
    cout << "total payment: " << payment << endl;
}


