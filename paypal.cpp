
#include "paypal.h"
#include<iostream>
#include <cstring>
using namespace std;

Paypal::Paypal()
{
}
Paypal::Paypal(int mail, int con_No)
{
    Contact_no = con_No;
    strcpy(Email, reinterpret_cast<const char *>(mail));
}

char* Paypal::getEmail()
{
    return Email;
}

int Paypal::getContact_No()
{
    return Contact_no;
}

void Paypal::display()
{
    cout << "Email Address :" << Email << endl;
    cout << "Contact Number :" << Contact_no << endl;
    cout << "Paypal Transaction Successfully" << endl;
}

Paypal::~Paypal()
{

}




