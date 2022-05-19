#ifndef FINANCE
#define FINANCE

class Customer;

class finance
{
private:
    int customer_ID;
    int invoice_No;
    double payment;
    Customer*cus;
public:
    finance(int cid, int iNo, double pay)
    {
        customer_ID = cid;
        invoice_No = iNo;
        payment = pay;
    }
    void displayDetails();
};
#endif