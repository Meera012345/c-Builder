#include<iostream>
#include<string.h>
using namespace std;

class uttarakhand
{
	public:
	    char capital[100];
		char state[100];
		char place[100];
		char Language_name[100];
		static char North_india[100];
		char food[100];
		char festival[100];
	    static void info()
		{
			cout<<"India's part from where the state sitated = "<<North_india<<endl;
		}
};
class Himachal_Pradesh
{
	public:
		char capital[100];
		char state[100];
		char place[100];
		char Language_name[100];
		static char North_india[100];
		char food[100];
		char festival[100];
	   	static void info()
		{
			cout<<"India's part from where the state sitated = "<<North_india<<endl;
		}
};
char uttarakhand::North_india[100]="North India";
char Himachal_Pradesh::North_india[100]="North India";
int main()
{
	uttarakhand s1;
	Himachal_Pradesh o1;
	strcpy(s1.state,"Uttarakhand");
    strcpy(s1.capital,"Dehradun");
	strcpy(s1.place,"Rishikesh,Mussoorie,Nainital");
	strcpy(s1.Language_name,"Garhwali");
	strcpy(s1.food,"Gulgula");
	strcpy(s1.festival,"Kumbh mela");
	s1.info();
	cout<<"state Name                   =  "<<s1.state<<endl;
	cout<<"Uttarakhand's capital        =  "<<s1.capital<<endl;
	cout<<"Uttarakhand's famous place   =  "<<s1.place<<endl;
	cout<<"Uttarakhand's Language name  =  "<<s1.Language_name<<endl;
	cout<<"Uttarakhand's famous food    =  "<<s1.food<<endl;
    cout<<"Uttarakhand's state festival =  "<<s1.festival<<endl<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl<<endl;
    strcpy(o1.state,"Himachal Pradesh");
    strcpy(o1.capital,"Shimla and Dharmshala");
	strcpy(o1.place,"Hadimba devi temple,Manali,shimla,dharmshala");
	strcpy(o1.Language_name,"Hindi and pahari");
	strcpy(o1.food,"Siddu");
	strcpy(o1.festival,"Kullu Dusseehra");
	o1.info();
	cout<<"state name                         =   "<<o1.state<<endl;
	cout<<"Himachal pradesh's capital         =   "<<o1.capital<<endl;
	cout<<"Himachal pradesh's famous place    =   "<<o1.place<<endl;
	cout<<"Himachal pradesh's Language name   =   "<<o1.Language_name<<endl;
	cout<<"Himachal pradesh's famous food     =   "<<o1.food<<endl;
    cout<<"Himachal pradesh's state festival  =   "<<o1.festival<<endl;	
}
