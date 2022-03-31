#include<iostream>
#include<conio.h>
using namespace std;

struct Client{
    int idnumber;
	string name;
    string phone;
    string gender;
    Client *next;
};

class ClientDetails{
	private:
		Client *head , *tail;
	public :
		Transport(){
			head = NULL;
			tail = NULL;
		}


	void NewClient(int idnumber,string name,string phone,string gender){

			Client *newClie = new Client();
			newClie->idnumber  = idnumber;
			newClie->name  = name;
			newClie->phone = phone;
			newClie->gender = gender;
				if(head == NULL){
					newClie->next = head;
					head =  newClie;
					tail = newClie;
				}else{
					tail->next = newClie;
					tail = newClie;
				}


	}

	void DeleteClient(int idnumber){
		Client *current = new Client();
		Client *privous = new Client();
		current = head;
		while(current != NULL){

			if(current->idnumber == idnumber)
			 break;
			 privous = current;
			 current = current->next;
		}
		if(current != NULL){
			if(idnumber == current->idnumber){
			string op;
			cout<<"Are you sure to delete:(yes/no)    ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				privous->next = current->next;
				delete current;
				cout<<"Record of "<<idnumber<<" member is deleted Successfully"<<endl;
			}else if(op=="No"||op=="NO"||op=="no"){

			}

		}
		}else{
			cout<<"Sorry..!!!\nNo Record is available about "<<idnumber<<" client"<<endl;
		}
	}


	void SearchClient(int idnumber){
		Client *current = new Client();
		Client *privous = new Client();
		current = head;
		while(current != NULL){
			privous = current;
			if(current->idnumber == idnumber)
			 break;

			 current = current->next;
		}

		if(idnumber == privous->idnumber){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tClient ID\t\t\t\t"<<current->idnumber<<endl;
			cout<<"\t\tClient Name\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tClient Phone No\t\t\t\t"<<current->phone<<endl;
			cout<<"\t\tGender\t\t\t\t\t"<<current->gender<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		}else{
			cout<<"Soory..!!!\nNo Record is available about "<<idnumber<<" client "<<endl;
			string op;
			cout<<"Are you want to Search Again:(yes/no)          ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){

			}else if(op=="No"||op=="NO"||op=="no"){

			}
		}
	}

	void UpdateClient(int idnumber){
		Client *current = new Client();
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
			cout<<"\t\tPhone No\t\t\t\t\t"<<current->phone<<endl;
			cout<<"\t\tGender\t\t\t\t\t\t"<<current->gender<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			string op;
			cout<<"Are you Want to update:            ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				string gender,name;
				string phone;
				int idnumber;
				cout<<"\n\n\t\tEnter Client ID:                        ";
				cin>>idnumber;
				cout<<"\n\n\t\tEnter Client Name:                      ";
				cin>>name;
				cout<<"\n\n\t\tEnter Client Phone No:                  ";
				cin>>phone;
				cout<<"\n\n\t\tEnter Client Gender:                    ";
				cin>>gender;
				current->idnumber  = idnumber;
				current->name  = name;
				current->phone = phone;
				current->gender = gender;
				cout<<"Updated Successfully"<<endl;
			}
		}
		}else{
			cout<<"Sorry..!!!\nNo Record is available about client "<<idnumber<<endl;
		}
	}

	void ShowAllClient(){
		Client *showClie = new Client;
		showClie = head;
		while(showClie  != NULL){

			for(int i=0; i<20; i++)
			system("color a");
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tClient ID\t\t\t\t\t"<<showClie->idnumber<<endl;
			cout<<"\t\tClient Name\t\t\t\t\t"<<showClie->name<<endl;
			cout<<"\t\tClient Phone No\t\t\t\t\t"<<showClie->phone<<endl;
			cout<<"\t\tClient Gender\t\t\t\t\t"<<showClie->gender<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			showClie = showClie->next;
		}
	}
};
