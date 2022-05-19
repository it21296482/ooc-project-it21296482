#ifndef VEHICLE
#define VEHICLE
#include<iostream>
#include "cash.h"

using namespace std;


class Customer;

class Driver;

#define size 3

class Vehicle
{
private :
    Customer* Cus0;
    string vehicle_no;
    string rent_price;
    string vehicle_model;
    const char *mileage;
    Driver* driver[size];
    int NoOfDrivers;

public :
    Vehicle();
    Vehicle(string Vno, string Rprice, string Vmodel, const char *distance);
    void AddDriver(Driver* d);
    void AddCustomer(Customer* Cus1);
    void displayVehicleDetails();
    ~Vehicle();
};
#endif