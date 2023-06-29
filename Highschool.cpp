#include<iostream>
#include<string.h>
using namespace std;

class Highschool
{
	public:
		int id;
		char stu_name[100];
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		char stu_contect[100];
		static char stu_edu_institute[100];
		char stu_address[100];
	public:
		void set()
		{
			cout<<"Enter Student's ID=";
			cin>>id;
			cout<<"Enter Student's Name=";
			cin>>stu_name;
			cout<<"Enter Student's Roll No=";
			cin>>stu_roll_no;
			cout<<"Enter Student's Standard=";
			cin>>stu_standard;
			cout<<"Enter Student's Age=";
			cin>>stu_age;
			cout<<"Enter Student's Contect=";
			cin>>stu_contect;
			cout<<"Enter Student's Address=";
			cin>>stu_address;
		}
		void get()
		{
			cout<<"--------------------------------------------------------------------------------"<<endl;
			cout<<"Student's ID="<<id<<endl;
			cout<<"Student's Name="<<stu_name<<endl;
			cout<<"Student's Roll No="<<stu_roll_no<<endl;
			cout<<"Student's Standard="<<stu_standard<<endl;
			cout<<"Student's Age="<<stu_age<<endl;
			cout<<"Student's contect number="<<stu_contect<<endl;
			cout<<"Student's Address="<<stu_address<<endl;
		}

};
class College
{
	public:
		int id;
		char stu_name[100];
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		char stu_contect[100];
		static char stu_edu_institute[100];
		char stu_address[100];
	public:
		void set()
		{
			cout<<"Enter Student's ID=";
			cin>>id;
			cout<<"Enter Student's Name=";
			cin>>stu_name;
			cout<<"Enter Student's Roll No=";
			cin>>stu_roll_no;
			cout<<"Enter Student's year=";
			cin>>stu_standard;
			cout<<"Enter Student's Age=";
			cin>>stu_age;
			cout<<"Enter Student's Contect=";
			cin>>stu_contect;
			cout<<"Enter Student's Address=";
			cin>>stu_address;
		}
		void get()
		{
			cout<<"--------------------------------------------------------------------------------"<<endl;
			cout<<"Student's ID="<<id<<endl;
			cout<<"Student's Name="<<stu_name<<endl;
			cout<<"Student's Roll No="<<stu_roll_no<<endl;
			cout<<"Student's Standard="<<stu_standard<<endl;
			cout<<"Student's Age="<<stu_age<<endl;
			cout<<"Student's contect number="<<stu_contect<<endl;
			cout<<"Student's Address="<<stu_address<<endl;
		}
};
char Highschool :: stu_edu_institute[100]="Education Instiutes.";
char College :: stu_edu_institute[100]="Education Instiutes.";
int main()
{
	Highschool s1;
	College h1;
	
	s1.set();
	h1.set();
	
	s1.get();
	cout<<"Student's School Name="<<s1.stu_edu_institute<<endl;
	h1.get();
	cout<<"Student's Collage Name="<<h1.stu_edu_institute<<endl;
}
