#include<iostream>
#include<conio.h>
using namespace std;

struct Diet{
    int idnumber;
	string name;
    string mon,tue,wed,thu,fri;
    Diet *next;
};

class DietDetails{
	private:
		Diet *head , *tail;
	public :
		Transport(){
			head = NULL;
			tail = NULL;
		}


	void NewDiet(int idnumber,string name,string mon,string tue,string wed,string thu, string fri){

			Diet *newDiet = new Diet();
			newDiet->idnumber  = idnumber;
			newDiet->name  = name;
			newDiet->mon = mon;
			newDiet->tue = tue;
			newDiet->wed = wed;
			newDiet->thu = thu;
			newDiet->fri = fri;
				if(head == NULL){
					newDiet->next = head;
					head =  newDiet;
					tail = newDiet;
				}else{
					tail->next = newDiet;
					tail = newDiet;
				}


	}

	void UpdateDiet(int idnumber){
		Diet *current = new Diet();
		current = head;
		while(current != NULL){

			if(current->idnumber == idnumber)
			 break;

			 current = current->next;
		}
		if(current != NULL){
			if(current->idnumber == idnumber){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tClient ID\t\t\t\t\t"<<current->idnumber<<endl;
			cout<<"\t\tName\t\t\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tMonday\t\t\t\t\t\t"<<current->mon<<endl;
			cout<<"\t\tTuesday\t\t\t\t\t\t"<<current->tue<<endl;
			cout<<"\t\tWednesday\t\t\t\t\t"<<current->wed<<endl;
			cout<<"\t\tThursday\t\t\t\t\t"<<current->thu<<endl;
			cout<<"\t\tFriday\t\t\t\t\t\t"<<current->fri<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			string op;
			cout<<"Are you Want to update(Y/N):            ";
			cin>>op;
			if(op=="Y" ||op == "y"){

				std::string mon,tue,wed,thu,fri;

				cout<<"\n\n\t\tEnter for Monday Diet Taken:                  ";
				std::getline(std::cin >> std::ws, mon);
				cout<<"\n\n\t\tEnter for Tuesday Diet Taken:                 ";
				std::getline(std::cin >> std::ws, tue);
				cout<<"\n\n\t\tEnter for Wednesday Diet Taken:               ";
				std::getline(std::cin >> std::ws, wed);
				cout<<"\n\n\t\tEnter for Thursday Diet Taken:                ";
				std::getline(std::cin >> std::ws, thu);
				cout<<"\n\n\t\tEnter for Friday Diet Taken:                  ";
				std::getline(std::cin >> std::ws, fri);

				current->mon = mon;
				current->tue = tue;
				current->wed= wed;
				current->thu = thu;
				current->fri = fri;
				cout<<"Updated Successfully"<<endl;
			}
		}
		}else{
			cout<<"Sorry..!!!\nNo Record is available about client "<<idnumber<<endl;
		}
	}

	void ShowAllDiet(){
		Diet *showDiet = new Diet;
		showDiet = head;
		while(showDiet  != NULL){

			for(int i=0; i<20; i++)
			system("color a");
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tClient ID\t\t\t\t\t"<<showDiet->idnumber<<endl;
			cout<<"\t\tClient Name\t\t\t\t\t"<<showDiet->name<<endl;
			cout<<"\t\tDiet Monday\t\t\t\t\t"<<showDiet->mon<<endl;
			cout<<"\t\tDiet Tuesday\t\t\t\t\t"<<showDiet->tue<<endl;
			cout<<"\t\tDiet Wednesday\t\t\t\t\t"<<showDiet->wed<<endl;
			cout<<"\t\tDiet Thursday\t\t\t\t\t"<<showDiet->thu<<endl;
			cout<<"\t\tDiet Friday\t\t\t\t\t"<<showDiet->fri<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			showDiet = showDiet->next;
		}
	}
};
