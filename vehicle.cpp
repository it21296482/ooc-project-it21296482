
#include "vehicle.h"
#include<iostream>


class Customer;

class Driver;

using namespace std;



Vehicle::Vehicle()
{
    vehicle_no = "No Vehicle Number";
    rent_price = "No Rent Price";
    vehicle_model = "No Vehicle Model";
    mileage = "No mileage";

}

Vehicle::Vehicle(string Vno, string Rprice, string Vmodel, const char *distance)
{
    vehicle_no = Vno;
    rent_price = Rprice;
    vehicle_model = Vmodel;
    mileage = distance;
}

void Vehicle::AddCustomer(Customer* Cus1)
{
    Cus0 = Cus1;
}

void Vehicle:: AddDriver(Driver* d)
{

}
void Vehicle::displayVehicleDetails()
{
    cout << "The Vehicle Number is: " << vehicle_no << endl;
    cout << "The rent price is:" << rent_price << endl;
    cout << "The vehicle model is:" << vehicle_model << endl;
    cout << "The mileage is:" << mileage << endl;



}

Vehicle::~Vehicle()
{
    cout << "*********** The vehicle bearing this number ---> ****************" << vehicle_no << "Deleted*******************" << endl;
}

