#include<string.h>
#include<iostream>
using namespace std;

//Defining new type for string
typedef char String[100];

//Class for storing ProfileData
class Disp
{
	public:
	String Name;
	int idnumber;

};

//inherited class for Trainer
class Dis:public Disp
{
	public:
    String jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec;
	//Default contructor manipulated for default input
	Trianer(bool GetInfo=true)
	{
		if(GetInfo)
		GetData();
	}
	//Function for reading input to objects
	void GetData()
	{
		fflush(stdin);
			cout<<"\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\tEnter Id Number:";
        cin>>idnumber;
		cout<<"\t\t\tEnter Name:";
		cin>>Name;
		cout<<"\t\t\tEnter Monthly Client Progress";

		cout<<"\n\t\t\tJanuary:     ";
		cin>>jan;
		cout<<"\t\t\tFebruary:    ";
		cin>>feb;
		cout<<"\t\t\tMarch:       ";
		cin>>mar;
        cout<<"\t\t\tApril:       ";
        cin >>apr;
        cout<<"\t\t\tMay :        ";
        cin >>may;
		cout<<"\t\t\tJune:        ";
		cin >>jun;
		cout<<"\t\t\tJuly:        ";
		cin >>jul;
		cout<<"\t\t\tAugust:      ";
		cin >>aug;
		cout<<"\t\t\tSeptember:   ";
		cin >>sep;
		cout<<"\t\t\tOctober:     ";
		cin >>oct;
		cout<<"\t\t\tNovember:    ";
		cin >>nov;
		cout<<"\t\t\tDecember:    ";
		cin >>dec;

	}


};

