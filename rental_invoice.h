#ifndef RENTALINVOICE
#define RENTALINVOICE

class rental_invoice
{
private:
    int customer_ID;
    int invoice_no;
    int vehicle_no;
public:
    void setInvoiceDetails( int cid, int iNo, int vNo);
    void displayInvoiceDetails();

};
#endif