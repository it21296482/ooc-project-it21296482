
#include "payment.h"
#include<iostream>
#include<cstring>

using namespace std;

Payment::Payment()
{
}

Payment::Payment(int inv_no, float Amt, const char Typ[], int Veh_no, int CID, int dis)
{
    Amount = Amt;
    invoice_no = inv_no;
    Vehicle_No = Veh_no;
    Customer_ID = CID;
    strcpy(Type, Typ);
    discount = dis;

}
void Payment::Calcamount()
{
    Amount = Amount - (Amount * (discount / 100));
}
int Payment::get_invoice_no()
{
    return invoice_no;
}
int Payment::get_Vehicle_No()
{
    return Vehicle_No;
}
int Payment::get_Customer_ID()
{
    return Customer_ID;
}
char* Payment::get_Type()
{
    return Type;
}
void Payment::set_Type(char* Typ)
{
    strcpy(Type, Typ);
}

void Payment::Display()
{
    cout << "Customer ID :" <<Customer_ID<< endl;
    cout << "Invoice No :"<<invoice_no << endl;
    cout << "Vehicle No : "<<Vehicle_No << endl;
    cout << "Payment Type :"<<Type << endl;
    cout << "Discount :" <<discount<< endl;
    cout << "Amount"<<Amount << endl;
    cout << "Payment Successfully" << endl;
}

Payment::~Payment()
{
}
