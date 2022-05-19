#include "registerdcustomer.h"
#include <iostream>
#include <cstring>
using namespace std;


registerdCustomer::registerdCustomer(char *cAge,char *customerId) {


    strcpy(customerAge, cAge);

    strcpy(customerIdNum, customerId);;

}

void registerdCustomer::displayregisterdCustomerdetails() {
    cout<<"Customer age : "<<customerAge<<endl;
    cout<<"Customer Id Number"<<customerIdNum<<endl;
}

