#include"DispPro.cpp"
#include<iostream>
#include<fstream>
#include <streambuf>

using namespace std;

void addnew()              //Function to Add New Record in Data File
{
	fstream fil;
	Dis fileobj;
	fil.open("Dis.dat",ios::app| ios::binary);
    fileobj.GetData();
    fil.write((char*)&fileobj, sizeof(fileobj));
    cout<<"Display Data Saved Successfully\n";
	fil.close();

}

void DisplayAllProgress()		//Function to Display All Record from Data File
{
    system("mode 150");
    fstream fil;
	int count=0;
	Dis fileobj;
	fil.open("Dis.dat",ios::in| ios::binary);
	if(!fil)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		cout<<"\n--------------------------------Client Progress by Month--------------------------------------------------------------------------";
		cout<<"\n\tID number\tName\t\tJan\tFeb\tMar\tApr\tMay\tJune\tJuly\tAug\tSep\tOct\tNov\tDec";

		fil.read((char*)&fileobj, sizeof(fileobj));
		while(!fil.eof())
		{

			count++;
			cout<<"\n"<<count<<"\t"<<fileobj.idnumber<<"\t\t"<<fileobj.Name<<"\t\t"<<fileobj.jan<<"\t"<<fileobj.feb<<"\t"<<fileobj.mar<<"\t"<<fileobj.apr<<"\t"<<fileobj.may<<"\t"<<fileobj.jun<<"\t"<<fileobj.jul<<"\t"<<fileobj.aug<<"\t"<<fileobj.sep<<"\t"<<fileobj.oct<<"\t"<<fileobj.nov<<"\t"<<fileobj.dec;
			fil.read((char*)&fileobj, sizeof(fileobj));
		}
	}cout<<"\n-----------------------------------------------------------------------------------------------------------------------------------";

	fil.close();
}

