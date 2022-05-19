 
#include <iostream>
#include <cstring>
#include "customer.h"

using namespace std;
customer::customer(const char cName[],const char cNum[], const char addre[],const char cEmail[])
{
    strcpy(customerName,cName); strcpy(customerContactNumber,cNum); strcpy(address,addre);
    strcpy(customerEmail,cEmail);
}
void customer::displaycustomerdetails() {
    cout << "customer Name: " << customerName << endl;
    cout << "Telephone Number: " << customerContactNumber << endl;
    cout << "address: " << address << endl;
    cout << "customer Email: " << customerEmail << endl;
}
