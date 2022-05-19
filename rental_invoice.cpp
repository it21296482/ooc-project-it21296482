#include "rental_invoice.h"
#include <iostream>
using namespace std;

void rental_invoice::setInvoiceDetails(int cid, int iNo, int vNo)
{
customer_ID = cid;
invoice_no = iNo;
vehicle_no = vNo;

}

void rental_invoice::displayInvoiceDetails()
{
    cout << "customer id:" << customer_ID << endl;
    cout << "invoice number:" << invoice_no << endl;
    cout << "vehicle number:" << vehicle_no << endl;
}



