

#include "cardpayment.h"
#include "cardpayment.h"
#include<iostream>
using namespace std;

Card_Payment::Card_Payment()
{
}

Card_Payment::Card_Payment(int cnum, char ctype)
{
    Card_number = cnum;
    Card_type = ctype;
}

int Card_Payment::getCard_number()
{
    return Card_number;

}

char Card_Payment::getCard_type()
{
    return Card_type;
}

void Card_Payment::Validate_Card()
{
    if (Card_number == NULL) {
        cout << "Invalid card name" << endl;
    }
    else if (Card_type == NULL) {
        cout << "Invalid card type" << endl;
    }
    else
    {
        cout << "Card is validated Successfully" << endl;
    }
}

void Card_Payment::display()
{
    cout << "Card Number :" << Card_number << endl;
    cout << "Card Type :" << Card_type << endl;
    cout << "Card Payment Successfully" << endl;
}

Card_Payment::~Card_Payment()
{
}

