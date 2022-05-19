#include "unregisterdcustomer.h"
#include<cstring>
#include<iostream>
using namespace std;

unregisterdcustomer::unregisterdcustomer(char *cNIC) {
    strcpy(customerNICNum, cNIC);
}

void unregisterdcustomer::displayunregisterdCustomerdetails() {
    cout<<"Customer NIC number : "<<customerNICNum<<endl;

}
