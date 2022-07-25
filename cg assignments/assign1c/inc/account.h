#include<iostream>
#include<string.h>
using namespace std;
class bank
{
	private:
		char *name;
		long accnumber;
		char acctype[50];
		float balance;
	public:
		        
		int depo;
		int accno=0;
	bank(){   //default      
	      char* name="defaultName";
	       cout<<"\nCustomer Name:"<<name<<endl;
		long accnumber = 123456789012;
		cout<<"\nAccount_Number:"<<accnumber<<endl;
	        char* acctype="Savings";
		cout<<"\nType_of_Account:"<<acctype<<endl;
		float balance=0;
		cout<<"\nAccount_Balance:"<<balance<<endl;
		}
      void getdetails();
      ~bank(){
	      			
	      		}	
      	void deposit();
	void withdrawal();
	void newaccount();
	void viewaccdetails();
};


void bank::withdrawal();

void bank::deposit();

void bank::newaccount();

void bank::viewaccdetails();




