#include<account.h>

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
	long accnumber = 45637465837;
	cout<<"\nAccount_Number:"<<accnumber<<endl;
	char* acctype="Savings";
	cout<<"\nType_of_Account:"<<acctype<<endl;
	float balance=0;
	cout<<"\nAccount_Balance:"<<balance<<endl;

	 }
	void getdetails()
		{
		name=new char[20];
		cout<<endl<<endl<<"**********Customer Details*********** "<<endl;
		cout<<"          -------- -------            "<<endl;
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter accnumber: ";
		cin>>accnumber;
		cout<<"Enter Acctype: 
		cin>>acctype;
		cout<<"Enter deposit amount: ";
		cin>>depo;
																							cout<<"______________________________________"<<endl<<endl;
																							}
              ~bank(){
				
			}
        void deposit();
        void withdrawal();
	 void newaccount()
	void viewaccdetails();
};

void bank::withdrawal()
{
	long amtdrawn;
	cout<<"Enter amount to be withdrawn: ";
	cin>>amtdrawn;
	if(balance<amtdrawn)
	cout<<"\nInsufficient balance! "<<endl<<endl;
	else
	balance=balance-amtdrawn;

}
void bank::deposit()
{
	long dep;
	cout<<"Enter amount to be deposited: ";
	cin>>dep;
	balance+=dep;
}
void bank::newaccount()
{
	accno++;
	getdetails();
	balance=0;
}
void bank::viewaccdetails()
{
	cout<<endl<<endl<<"********* BANK ACCOUNT DETAILS*********"<<endl;
	cout<<"         --- ---- ------- -------         "<<endl;
	cout<<"Account no.: "<<accno<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Acctype: "<<acctype<<endl;
	cout<<"Balance: "<<balance<<endl;
	cout<<"_________________________________________"<<endl;
								   
}
