#include"Profile.cpp"
#include<iostream>
#include<fstream>
#include"Schedule.cpp"
using namespace std;

void DeleteMember();
void DeleteTrainer();
bool GetTrainerFromFile();
bool GetMemberFromFile();

Trainer t;
Member m;
void Add()              //Function to Add New Record in Data File
{
	fstream fil;
	AddSelection:
	int choice;
	cout<<" Choose from Below\n 1. ADD TRAINER \n 2. ADD MEMBER \n->";
	cin>>choice;
	if(choice==1)
	{
	char ch='y';
	Trainer fileobj;
	fil.open("Trainer.dat",ios::app| ios::binary);
	{
		fileobj.GetData();
		fil.write((char*)&fileobj, sizeof(fileobj));
		cout<<"Trainer Data Saved Successfully\n";
	}
	fil.close();
	}
	else if(choice==2)
	{
		char ch='y';
		Member fileobj;
	fil.open("Member.dat",ios::app| ios::binary);
	{
		fileobj.GetData();
		fil.write((char*)&fileobj, sizeof(fileobj));
		cout<<"Member Data Saved successfully\n";
	}
	fil.close();
	}
	else
	{
		cout<<"Wrong choice:Try Again?(Y/N)";
		char c;
		cin>>c;
		if(c=='Y'|| c=='y')goto AddSelection;

	}



}

void Schedule()
{
int ch;
cout<<" Choose from Below\n 1. TRAINER SCHEDULE \n 2. MEMBER SCHEDULE \n->>";

cin>>ch;
if(ch==1)
{
	if(GetTrainerFromFile())
	ShowTSchedule(t.Schedule);
}
else if(ch==2)
{
	if(GetMemberFromFile())
	ShowMSchedule(m.Schedule);
}

	else
	cout<<"Invalid Input.";

}
bool GetTrainerFromFile()
{fstream fil;
	char n[100];
	bool found=false;
	cout<<"Enter Name of user : ";
	scanf("%s",&n);
	Trainer fileobj;
	fil.open("Trainer.dat",ios::in| ios::binary);
	if(!fil)
	{
		cout<<"File not Found";
		return false;
	}
	else
	{
		fil.read((char*)&fileobj, sizeof(fileobj));
		while(!fil.eof())
		{
			if(strcmp(n,fileobj.Name)==0)
			{
				found=true;
			t=fileobj;
			return true;
			}
			else
			{

			}
			fil.read((char*)&fileobj, sizeof(fileobj));
		}
		if(!found)
		{cout<<"\n User Not Found";
		return false;
		}
	}

	fil.close();
}
bool GetMemberFromFile()
{fstream fil;
		char n[100];
	bool found=false;
	cout<<"Enter Name of user : ";
	scanf("%s",&n);
	Member fileobj;
	fil.open("Member.dat",ios::in| ios::binary);
	if(!fil)
	{
		cout<<"File not Found";
		return false;

	}
	else
	{
		fil.read((char*)&fileobj, sizeof(fileobj));
		while(!fil.eof())
		{
			if(strcmp(n,fileobj.Name)==0)
			{
				found=true;
				m= fileobj;
				return true;
			}

			fil.read((char*)&fileobj, sizeof(fileobj));
		}
		if(!found)
		{
			cout<<"\n User Not Found";
			return false;
		}
	}

	fil.close();
}

  void Delete()
 {
 	int ch;
 	cout<<" Choose from Below\n 1. REMOVE TRAINER  \n 2. REMOVE MEMBER \n->>";
 	cin>>ch;
 	if(ch==2)DeleteMember();
 	else if(ch==1)DeleteTrainer();
 	else cout<<"Wrong choice.";

 }

void DeleteMember()		//Function to Delete Particular Record from Data File
{fstream fil;
	char n[100];
	bool found=false;
	cout<<"Enter Name that should be Deleted :";
	scanf("%s",&n);
	Member fileobj;
	ofstream o;
	o.open("new.dat",ios::out|ios::binary);
	fil.open("Member.dat",ios::in| ios::binary);
	if(!fil)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		fil.read((char*)&fileobj, sizeof(fileobj));
		while(!fil.eof())
		{
			if(strcmp(n,fileobj.Name)!=0)
			{
				o.write((char*)&fileobj, sizeof(fileobj));
			}
			else
			{
				found=true;
				 cout<<"Member Successfully Deleted."<<endl;

			}
			fil.read((char*)&fileobj, sizeof(fileobj));
		}
	}
	o.close();
	fil.close();
	remove("Member.dat");
	rename("new.dat", "Member.dat");
}//end of program
void DeleteTrainer()		//Function to Delete Particular Record from Data File
{fstream fil;
	char n[100];
	cout<<"Enter Name that should be Deleted :";
	scanf("%s",&n);
	Trainer fileobj;
	ofstream o;
	bool found=false;
	o.open("new.dat",ios::out|ios::binary);
	fil.open("Trainer.dat",ios::in| ios::binary);
	if(!fil)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		fil.read((char*)&fileobj, sizeof(fileobj));
		while(!fil.eof())
		{
			if(strcmp(n,fileobj.Name)!=0)
			{
				o.write((char*)&fileobj, sizeof(fileobj));
			}
			else
			{
				found=true;
				 cout<<"Trainer Successfully Deleted."<<endl;

			}
			fil.read((char*)&fileobj, sizeof(fileobj));
		}
	}
	if(!found)cout<<"\nUser not found";

	o.close();
	fil.close();
	remove("Trainer.dat");
	rename("new.dat", "Trainer.dat");
}//end of program

void DisplayAllTrainer()		//Function to Display All Record from Data File
{fstream fil;
	int count=0;
	Trainer fileobj;
	fil.open("Trainer.dat",ios::in| ios::binary);
	if(!fil)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		cout<<"\n--------------------------------Trainers---------------------------------------------------------";
		cout<<"\n\tID number\tName\t\tAge\t\tPhone\t\tHeight\t\tWeight";

		fil.read((char*)&fileobj, sizeof(fileobj));
		while(!fil.eof())
		{

			count++;
			cout<<"\n"<<count<<"\t"<<fileobj.idnumber<<"\t\t"<<fileobj.Name<<"\t\t"<<fileobj.age<<"\t\t"<<fileobj.Phone<<"\t"<<fileobj.Height<<"\t\t"<<fileobj.weight;
			fil.read((char*)&fileobj, sizeof(fileobj));
		}
	}cout<<"\n-------------------------------------------------------------------------------------------------";

	fil.close();
}
void DisplayAllMember()		//Function to Display All Record from Data File
{fstream fil;
	int count=0;
	Member fileobj;
	fil.open("Member.dat",ios::in| ios::binary);
	if(!fil)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		cout<<"\n--------------------------------Members----------------------------------------------";
		cout<<"\n\tID number\tName\t\tPhone\t\tTrainer\t\tFee";

		fil.read((char*)&fileobj, sizeof(fileobj));
		while(!fil.eof())
		{

		count++;

			cout<<"\n"<<count<<"\t"<<fileobj.idnumber<<"\t\t"<<fileobj.Name<<"\t\t"<<fileobj.Phone<<"\t"<<fileobj.trainer<<"\t\t"<<fileobj.fee;
			fil.read((char*)&fileobj, sizeof(fileobj));
		}
	}	cout<<"\n-------------------------------------------------------------------------------------";

	fil.close();
}
