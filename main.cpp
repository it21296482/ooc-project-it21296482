

#include <iostream>
#include "customer.h"
#include "payment.h"
#include "vehicle.h"
#include "SupportAgent.h"
#include"Driver.h"
#include "customer.h"
#include"registerdcustomer.h"
#include "manager.h"
#include "cardpayment.h"
#include "cash.h"
#include "finance.h"


//Main Program
int main()
{

    //Creating Objects
    customer *C1 = new customer("Jagath Bandara", "CC0001", "15/B,Dodanduwa,Mathara", "jgath@gmail.com");
    supportAgent* SAgnt = new supportAgent("SA0001", "Nandasiri Arachchi", "CC0001", "******I NEED A HELP*****", 0001);
    Payment* P1 = new Payment(12345, 4000.00, "card", 1234, 0001, 10);
    Vehicle* V1 = new Vehicle("CAB-1234", "4000.00", "TOYOTA", "10000");
    Vehicle* V2 = new Vehicle("CBC-1334", "4500.00", "SUZUKI", "5000");
    driver* D1 = new driver("D0001", "Saman", "0771234567", "123/A,Colombo", 50);

C1->displaycustomerdetails();
  cout<<"\n...........\n";
SAgnt->printsupportAgentDetails();
  cout<<"\n...........\n";
P1->Display();
  cout<<"\n...........\n";
V1->displayVehicleDetails();
  cout<<"\n...........\n";
V2->displayVehicleDetails();
  cout<<"\n...........\n";
D1->printDriverDetails();
  
    //Delete objects
    delete C1;
    delete SAgnt;
    delete P1;
    delete V1;
    delete D1;

    return 0;


}