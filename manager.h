#ifndef MANAGER
#define MANAGER
# include<cstring>
#include<iostream>
#include "SupportAgent.h"
using namespace std;
class supportAgent;
//Manager Class
#define size1 5
//Declaring Manager Class
class Manager
{
    private :
        string EmpID;
        string Name;
        string ProbReqNo;
        string SupReqNo;
        string CustomerID;
        supportAgent* SAgent[size1];
        int SupAgents;

    public :
        Manager();
        Manager(string EID, string Ename, string ProbNo, string SupNo, string CID);
        void display();
        void AddSupAgent(supportAgent* SA);

};
#endif