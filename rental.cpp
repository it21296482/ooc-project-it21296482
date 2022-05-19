
#include <iostream>
#include "rental.h"
#include "rental_invoice.h"
using namespace std;

rental::rental(float pdate, float rdate, rental_invoice iNo)
	:pickup(pdate), returnDate(rdate), invoiceNo(iNo)
{
	
}
void rental::displayDetails()
{
	cout << "pickup date: " << pickup << endl;
	cout << "return date: " << returnDate << endl;
}
