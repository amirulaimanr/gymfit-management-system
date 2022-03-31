#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<process.h>
#include"GYMMenus.cpp"
#include"GYMAttendance.cpp"
#include"Client.cpp"
#include"Diet.cpp"
#include"File.cpp"
#include"Display.cpp"

using namespace std;

ClientDetails robj;
DietDetails dobj;

int main(){
///////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
	robj.NewClient(1234,"NAIM","0171231456","M");
	robj.NewClient(4502,"ALIF","012343564","M");
	robj.NewClient(2344,"HADI","012734325","M");
	robj.NewClient(2567,"AMIRUL","0163322234","M");
	robj.NewClient(5661,"AIMAN","01156211562","M");
	robj.NewClient(6526,"ARA","0147577757","F");

    dobj.NewDiet(1234,"NAIM","Eat Only Fruit","Only Eat Vegetables","Eat as much fruit and veg","Eat bananas and milk","Eat as much beef");
	dobj.NewDiet(4502,"ALIF","Eat as much fruit and veg","Only Eat Vegetables","Eat bananas and milk","Eat as much beef","Eat Only Fruit");
	dobj.NewDiet(2344,"HADI","Only Eat Vegetables","Eat as much fruit and veg","Eat bananas and milk","Eat as much beef","Eat Only Fruit");
	dobj.NewDiet(2567,"AMIRUL","Eat bananas and milk","Eat as much beef","Eat Only Fruit","Only Eat Vegetables","Eat as much fruit and veg");
	dobj.NewDiet(6526,"ARA","Eat Only Fruit","Eat bananas and milk","Eat as much beef","Eat as much fruit and veg","Only Eat Vegetables");


	GYMMenu obj;
	system("100");
	obj.welcome();
 	system ("pause");
	obj.Loading();
	cout<<"\n\n\n\n\n\n\n\n\n";
	system ("pause");
	main:
	system("cls");
	int op;
	obj.MainMenu();
	cout<<"\n\nSelect The Option:                       ";
	cin>>op;
	switch(op){
		case 1:
			{
				obj.GYMInformation();
					yr:
				string a;
		     	cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
				cin>>a;
		     	if(a=="y" || a=="Y")
				{
			    	goto main;
				}else if(a=="n" || a==" N")
				{
					return 0;
				}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
				{
				cout<<"TRY AGAIN  "<<endl;
					goto yr;
				}
				break;
			}
		case 2:
			{
				rmanu:
				int rop;
				obj.RegistrationMenu();
				cout<<"\nSelect the Option:      ";
				cin>>rop;
				switch(rop){
					case 1:
						{
							system("cls");
							New:
							string gender,name,phone;
							int idnumber;

                            cout<<"\n\n\t\tEnter Client ID:                         ";
                            cin>>idnumber;
                            cout<<"\n\n\t\tEnter Client Name:                       ";
                            cin>>name;
                            cout<<"\n\n\t\tEnter Client Phone No:                   ";
                            cin>>phone;
                            cout<<"\n\n\t\tEnter Client Gender(M/F):                ";
                            cin>>gender;

							robj.NewClient(idnumber,name,phone,gender);
							string again;
							cout<<"Continue (Y/N):        ";
							cin>>again;
							if(again == "y" || again == "Y"){
								goto New;
							}else{
								nr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="y" || a=="Y")
								{
			    					goto rmanu;
								}else if(a=="n" || a==" N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto nr;
								}
							}
							break;
						}
					case 2:
						{
							system("cls");
							robj.ShowAllClient();
							system("pause");
							sr:
							string a;
		     				cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
							cin>>a;
					     	if(a=="y" || a=="Y")
							{
			    				goto rmanu;
							}else if(a=="n" || a==" N")
							{
								return 0;
							}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
							{
								cout<<"TRY AGAIN  "<<endl;
								goto sr;
							}

							break;
						}
					case 3:
						{
							searchclie:
							system("cls");
							int idnumber;
							cout<<"\n\n\t\tEnter Client ID:                        ";
							cin>>idnumber;
							robj.SearchClient(idnumber);
							string again;
							cout<<"Continue (Y/N):        ";
							cin>>again;
							if(again == "y" || again == "Y"){
								goto searchclie;
							}else{
								ser:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="y" || a=="Y")
								{
			    					goto rmanu;
								}else if(a=="n" || a==" N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ser;
								}
							}
							break;
						}
					case 4:
						{

							system("cls");
							Deleteclie:
							int idnumber;
							cout<<"\n\n\t\tEnter Client ID:                        ";
							cin>>idnumber;
							robj.DeleteClient(idnumber);
							string again;
							cout<<"Continue (Y/N):        ";
							cin>>again;
							if(again == "y" || again == "Y"){
								goto Deleteclie;
							}else{
								dr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="y" || a=="Y")
								{
			    					goto rmanu;
								}else if(a=="n" || a==" N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto dr;
								}
							}
							break;
						}
					case 5:
						{
							system("cls");
							updateclie:
							int idnumber;
							cout<<"\n\n\t\tEnter Client ID:                        ";
							cin>>idnumber;
							robj.UpdateClient(idnumber);
							string again;
							cout<<"Continue (Y/N):        ";
							cin>>again;
							if(again == "y" || again == "Y" ){
								goto updateclie;
							}else{
								ur:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="y" || a=="Y")
								{
			    					goto rmanu;
								}else if(a=="n" || a==" N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ur;
								}
							}
							break;
						}
					case 6:
						{
							system("cls");
							goto main;
							break;
						}
						case 7:
						{
							return 0;
						}
					default:
						{
						  	goto rmanu;
						}
				}
				break;
			}


			case 3:
			{
				rmmanu:
				int roop;
				attend o1,o2,o3;
				ifstream file1;
                ofstream file2;
				obj.MonitorAttendance();
				cout<<"Select the Option:      ";
				cin>>roop;
				switch(roop){
					case 1:
						{

							system("cls");
							ng:
                            file1.open("attendance.txt");
                            file1.read((char *)& o1, sizeof(o1));
                            o1.calculate();
                            file1.close();
                            string again;
							cout<<"Continue (Y/N):        ";
							cin>>again;
							if(again == "y" || again == "Y"){
								goto ng;
							}else{
								ner:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="y" || a=="Y")
								{
			    					goto rmmanu;
								}else if(a=="n" || a==" N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ner;
								}
							}
							break;
						}
					case 2:
						{
							system("cls");

								shg:
								string a;
								file1.open("attendance.txt");
                                file1.read((char *)& o2, sizeof(o2));
                                file1.close();
                                o2.enter();
                                file2.open("attendance.txt");
                                file2.write((char *)& o2, sizeof(o2));
                                file2.close();
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="y" || a=="Y")
								{
			    					goto rmmanu;
								}else if(a=="n" || a==" N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto shg;
								}
							break;
						}

					case 3:
						{
							goto main;
							break;
						}
					case 4:
						{
							return 0;
						}
					default:
						{
						  	goto rmanu;
						}
				}
				system ("pause");
				 goto main;
				break;
			}

            case 4:
			{
				wmanu:
				int wop;
				obj.GymSchedule();
				cout<<"Select the Option:      ";
				cin>>wop;
				switch(wop){
					case 1:
						{
						    gy:
                            system("cls");
							Add();
							string agan;
							cout<<" Continue(Y/N):      ";
							cin>>agan;
							if(agan == "Y" || agan == "y" || agan =="yes"){
								goto gy;
							}else{
								ufr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="Y" || a=="y")
								{
			    					goto wmanu;
								}else if(a=="n" || a=="N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!="N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ufr;
								}
							}
							break;
						}
					case 2:
						{
								system("cls");
                                DisplayAllTrainer();
								uyr:
                                string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="Y" || a=="y")
								{
			    					goto wmanu;
								}else if(a=="n" || a=="N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!="N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto uyr;
								}
								break;
						}

					case 3:
						{

							system("cls");
							DisplayAllMember();
								utr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="Y" || a=="y")
								{
			    					goto wmanu;
								}else if(a=="n" || a=="N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!="N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto utr;
								}
								break;
							}

					case 4:
						{
							sch:
							system("cls");
							Schedule();

							string gn;
							cout<<"\n Continue(Y/N):      ";
							cin>>gn;
							if(gn == "y" || gn == "Y" ){
								goto sch;
							}else{
								uur:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="Y" || a=="y")
								{
			    					goto wmanu;
								}else if(a=="n" || a==" N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto uur;
								}
							}
							break;
						}
					case 5:
						{
							del:
						    system("cls");
						    Delete();
						    string gne;
							cout<<"\n Continue(Y/N):      ";
							cin>>gne;
							if(gne == "y" || gne == "Y" ){
								goto del;
							}else{
								uqr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="Y" || a=="y")
								{
			    					goto wmanu;
								}else if(a=="n" || a==" N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto uqr;
								}
							}
							break;
						}
					case 6:
						{
							goto main;
							break;
						}
					case 7:
					{
						return 0;
					}
					default:
						{
						  	goto rmanu;
						}
				}
				system ("pause");
				 goto main;
				break;
			}



			case 5:
			{
				dnu:
				int qop;
				obj.DietSched();
				cout<<"Select the Option:      ";
				cin>>qop;
				switch(qop){
					case 1:
						{
						    system("cls");
							Nw:
							string name;
							int idnumber;
							std::string mon,tue,wed,thu,fri;

                            cout<<"\n\n\t\tEnter Client ID:                         ";
                            cin>>idnumber;
                            cout<<"\n\n\t\tEnter Client Name:                       ";
                            cin>>name;
                            cout<<"\n\n\t\tEnter Diet Menu                          ";
                            cout<<"\n\n\t\tMonday     :                                 ";
                            std::getline(std::cin >> std::ws, mon);
                            cout<<"\n\n\t\tTuesday    :                                 ";
                            std::getline(std::cin >> std::ws, tue);
                            cout<<"\n\n\t\tWednesday  :                                 ";
                            std::getline(std::cin >> std::ws, wed);
                            cout<<"\n\n\t\tThursday   :                                 ";
                            std::getline(std::cin >> std::ws, thu);
                            cout<<"\n\n\t\tFriday     :                                 ";
                            std::getline(std::cin >> std::ws, fri);
							dobj.NewDiet(idnumber,name,mon,tue,wed,thu,fri);
							string again;
							cout<<"Continue (Y/N):        ";
							cin>>again;
							if(again == "y" || again == "Y"){
								goto Nw;
							}else{
								ne:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="y" || a=="Y")
								{
			    					goto dnu;
								}else if(a=="n" || a==" N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ne;
								}
							}
							break;
						}
					case 2:
						{
							system("cls");
							updatediet:
							int idnumber;
							cout<<"\n\n\t\tEnter Client ID:                        ";
							cin>>idnumber;
							dobj.UpdateDiet(idnumber);
							string again;
							cout<<"Continue (Y/N):        ";
							cin>>again;
							if(again == "y" || again == "Y" ){
								goto updatediet;
							}else{
								qr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="y" || a=="Y")
								{
			    					goto dnu;
								}else if(a=="n" || a==" N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto qr;
								}
							}
							break;

						}

					case 3:
						{
                          system("cls");
							dobj.ShowAllDiet();
							system("pause");
							er:
							string a;
		     				cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
							cin>>a;
					     	if(a=="y" || a=="Y")
							{
			    				goto dnu;
							}else if(a=="n" || a==" N")
							{
								return 0;
							}else if((a!="y" || a!="Y") || (a!="n" || a!=" N"))
							{
								cout<<"TRY AGAIN  "<<endl;
								goto er;
							}

							break;
                        }

					case 4:
						{
                            goto main;
							break;
						}
					case 5:
						{
                            return 0;
						}
					default:
						{
						  	goto dnu;
						}
				}
				system ("pause");
				 goto main;
				break;
			}

            case 6:
			{
			    system("cls");
				dp:
				int top;
				obj.DisplayProgress();
				cout<<"Select the Option:      ";
				cin>>top;
				switch(top){
					case 1:
						{
						    ds:
                            system("cls");
                            addnew();
							string agan;
							cout<<" Continue(Y/N):      ";
							cin>>agan;
							if(agan == "Y" || agan == "y" || agan =="yes"){
								goto ds;
							}else{
								uy:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="Y" || a=="y")
								{
			    					goto dp;
								}else if(a=="n" || a=="N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!="N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto uy;
								}
							}
							break;
						}

                    case 2:
                        	{
						    wq:
                            system("cls");
                            system("mode 150");
                            DisplayAllProgress();

								tr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (Y/N)?    ";
								cin>>a;
					     		if(a=="Y" || a=="y")
								{
			    					goto dp;
								}else if(a=="n" || a=="N")
								{
									return 0;
								}else if((a!="y" || a!="Y") || (a!="n" || a!="N"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto tr;
								}

							break;
						}
						case 3:
						{
						    system("mode 100");
                            goto main;

							break;
						}
					case 4:
						{
                            return 0;
						}
					default:
						{
						  	goto dp;
						}
				}
				system ("pause");
				 goto main;
				break;


	}

	}

}
