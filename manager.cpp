
# include<cstring>
#include<iostream>
#include"manager.h"

using namespace std;

//Implementation of Manager class
Manager::Manager()
{
    EmpID = "No Employee detected";
    Name = "No name detected";
    ProbReqNo = "No problem report";
    SupReqNo = "No support";
    CustomerID = "No Customer ID detected";

}
Manager::Manager(string EID, string Ename, string ProbNo, string SupNo, string CID)
{
    EmpID = EID;
    Name = Ename;
    ProbReqNo = ProbNo;
    SupReqNo = SupNo;
    CustomerID = CID;
}
void Manager:: AddSupAgent(supportAgent* SA)
{
    
}
void Manager::display()
{
    cout<<"The Manager Name is :" << Name << endl;
    cout << "The employee ID is :" << EmpID << endl;
    cout << "The problem number is:" << ProbReqNo << endl;
    cout << "The support request number is:" << SupReqNo << endl;
    cout << "The customer ID to which the problem refferred :" << CustomerID << endl;
}

