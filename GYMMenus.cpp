#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
using namespace std;


void gotoxy(int x, int y)
{
	COORD coord;
    	coord.X =x;
	coord.Y =y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class GYMMenu{

	public:
//**********************************************
//  WELCOME
//**********************************************
void welcome()
{
	system("mode 100");
	ifstream file;
	file.open("welcome.txt");
	if(!file.is_open())
	{
		cout<<"file unable to open successfully:  ";
	}
	else
	{
	string a;
	getline(file,a);

		while(!file.eof())
		{
			system("color a");
			cout<<a<<endl;
		getline(file,a);
		}
		file.close();
}
}

	void Loading(){

	system("cls");
	int r,q,i=0,j;
	char s=178;
	gotoxy(46,24);
	cout<<"loading..."<<endl;
	for(r=1,i=0,j=40; r<20,i<=100,j<=60; r++,i=i+5,j++)
	{
		for(q=0; q<5; q++)
		system("color a");
		gotoxy(j,25);
		cout<<s;
		gotoxy(47,27);
		cout<<i<<"%";
	}
}

void MainMenu(){
	system("cls");
	ifstream menu;
	menu.open("menu.txt");
	if(!menu.is_open())
	{
		cout<<"unable to open file: ";
	}else
	{
		string c;
		getline(menu,c);
		while(!menu.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(menu,c);
		}
	}
}

void GYMInformation(){
	system("cls");
	ifstream HIF;
	HIF.open("gyminfo.txt");
	if(!HIF.is_open())
	{
	cout<<"unable to open a file:  ";
	}else
	{
		string c;
		getline(HIF,c);
		while(!HIF.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(HIF,c);
		}
	}
}

void RegistrationMenu(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 -------------------------------- ADD NEW CLIENT  |"<<endl;
	cout<<"\n\t\t\t| 2 ----------------------------------- CLIENT LIST  |"<<endl;
	cout<<"\n\t\t\t| 3 --------------------------------- SEARCH CLIENT  |"<<endl;
	cout<<"\n\t\t\t| 4 --------------------------------- DELETE CLIENT  |"<<endl;
	cout<<"\n\t\t\t| 5 --------------------------------- UPDATE CLIENT  |"<<endl;
	cout<<"\n\t\t\t| 6 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 7 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;

}


void MonitorAttendance(){
	system("cls");

	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 --------------------------- VIEW YOUR ATTENDANCE |"<<endl;
	cout<<"\n\t\t\t| 2 ------------------------- UPDATE YOUR ATTENDANCE |"<<endl;
	cout<<"\n\t\t\t| 3 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 4 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
}

void GymSchedule(){
	system("cls");

	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 --------------------------------- ADD NEW RECORD |"<<endl;
	cout<<"\n\t\t\t| 2 ------------------------- DISPLAY TRAINER RECORD |"<<endl;
	cout<<"\n\t\t\t| 3 -------------------------- DISPLAY MEMBER RECORD |"<<endl;
	cout<<"\n\t\t\t| 4 ------------------------------- DISPLAY SCHEDULE |"<<endl;
	cout<<"\n\t\t\t| 5 ---------------------------------- DELETE RECORD |"<<endl;
	cout<<"\n\t\t\t| 6 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 7 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
}

void DietSched(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 --------------------------------- ADD NEW RECORD |"<<endl;
	cout<<"\n\t\t\t| 2 ------------------------------ UPDATE DIET TAKEN |"<<endl;
	cout<<"\n\t\t\t| 3 -------------------------- DISPLAY DIET SCHEDULE |"<<endl;
	cout<<"\n\t\t\t| 4 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 5 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
}

void DisplayProgress(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 --------------------------------- ADD NEW RECORD |"<<endl;
	cout<<"\n\t\t\t| 2 ------------------------ DISPLAY CLIENT PROGRESS |"<<endl;
	cout<<"\n\t\t\t| 3 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 4 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
}

//class end
};
