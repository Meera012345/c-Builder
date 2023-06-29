#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	public:
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		int rating_type;
		char website[100];
		void set(int id,char name[],char type[],int staff_size,int room_size,int establish_year,char address[],int rating_type,char website[])
		{
			this-> id=id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff_size=staff_size;
			this->room_size=room_size;
			this->establish_year=establish_year;
			strcpy(this->address,address);
			this-> rating_type=rating_type;
			strcpy(this->website,website);
		}
		void get()
		{
			cout<<"Hotel's id                  :- "<<id<<endl;
			cout<<"Hotel's name                :- "<<name<<endl;
			cout<<"Hotel's type                :- "<<type<<endl;
			cout<<"Hotel's staff size          :- "<<staff_size<<endl;
			cout<<"Hotel's room size           :- "<<room_size<<endl;
			cout<<"Hotel's establish year      :- "<<establish_year<<endl;
			cout<<"Hotel's address             :- "<<address<<endl;
			cout<<"Hotel's rating type         :- "<<rating_type<<endl;
			cout<<"Hotel's website             :- "<<website<<endl;
		}
};
main()
{
	Hotel s;
	s.set(3775,"Green vally","Room with Restaurant",500,30,2009,"Vesu" ,7,"Greenvally@1234.com");
	s.get();
}
