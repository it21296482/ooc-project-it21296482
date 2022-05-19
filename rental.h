#ifndef rental
#include"rental_invoice.h"
class rental
{
private:
	float pickup;
	float returnDate;
	rental_invoice invoiceNo;
public:
	rental(float pdate,float rdate,rental_invoice iNo);
	void displayDetails();
};
#endif
