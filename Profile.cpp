#include"Schedule.cpp"
#include<string.h>
#include<iostream>
using namespace std;

//Defining new type for string
typedef char String[100];

//Defining new type for Personal Details
typedef struct
{
	String ID;
	String Password;
	bool IsAdmin=false;
}PersonalDetails;

//Class for storing ProfileData
class Profile
{
	protected:
	PersonalDetails LoginDetails;
	public:
	String Name;
	String Phone;
	int age;
	int idnumber;
};

//inherited class for Trainer
class Trainer:public Profile
{
	public:
	int Height;
	int weight;
	TrainerSchedule Schedule;


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
		cout<<"\t\t\tName:";
		cin>>Name;
		cout<<"\t\t\tAge:";
		cin>>age;
		cout<<"\t\t\tPhone:";
		cin>>Phone;
		cout<<"\t\t\tHeight:";
		cin>>Height;
		cout<<"\t\t\tWeight:";
		cin>>weight;
		cout<<"\t\t\tEnter the Schedule (Note:Write '0' in free time)\n";
		Schedule=AddTSchedule();
	}


};

//Inherited class for Members
class Member:public Profile
{
	public:
	double fee;
	MemberSchedule Schedule;
	String trainer;

		//Function to read inputs to objects
	void GetData()
	{
		fflush(stdin);
		cout<<"ID number:";
		cin>>idnumber;
		cout<<"Name:";
		cin>>Name;
		cout<<"Phone:";
		cin>>Phone;
		cout<<"Trainer:";
		cin>>trainer;
		cout<<"Fees:";
		cin>>fee;
		cout<<"\nEnter the Schedule (Note:Write '0' in free time)\n";
		Schedule=AddMSchedule();
	}

};
