#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char address[100];
		char email[100];
		char contect[100];
		
		public:
		void set()
		{
			cout<<"Enter Id=";
			cin>>id;
			cout<<"Enter Employee Name=";
			cin>>name;
			cout<<"Enter Role=";
			cin>>role;
			cout<<"Enter Employee Salary=";
			cin>>salary;
			cout<<"Enter Employee Experience=";
			cin>>experience;
			cout<<"Enter address=";
			cin>>address;
			cout<<"Enter email Address=";
			cin>>email;
			cout<<"Enter Contect Number=";
			cin>>contect;
		}
		void get()
		{
			cout<<"_______________________________________________________________________"<<endl;
			cout<<"Employee's ID="<<id<<endl;
			cout<<"Employee's Name="<<name<<endl;
			cout<<"Employee's Role="<<role<<endl;
			cout<<"Employee's Salary="<<salary<<endl;
			cout<<"Employee's Experience="<<experience<<endl;
			cout<<"Employee's Email="<<address<<endl;
			cout<<"Employee's Contect Number ="<<contect<<endl<<endl;
		}
};
main()
{
	Employee S[5];
	int i;
	for(i=0;i<5;i++)
	{
		S[i].set();
	}
	for(i=0;i<5;i++)
	{
		S[i].get();
	}
}
