#include<iostream>
#include<csignal>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
using namespace std;
int pid,i;

static void signalHandler(int id)

{
	cout<<"\n i = "<<i<<endl;
	cout<<"Child Died"<<endl;
	wait(NULL);
	cout<<"ID: "<<id<<endl;
						
						
}
void Registersignal()
{
	signal(SIGCHLD,signalHandler);
}
int main()
{

	pid=fork();
	if(pid==0)
	{
		sleep(5);
		cout<<"child process"<<endl;
	}
	else
	{
		wait(0);
		Registersignal();
		for(;;);

		cout<<"parent"<<endl;
		cout<<"parent dies"<<endl;
	}
	return 0;
}
