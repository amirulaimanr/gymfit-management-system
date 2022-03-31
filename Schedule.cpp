#ifndef Schedule_H
#define Schedule_H

#include<iostream>
#include<string>

using namespace std;

//Defining new types for Time and string
typedef char Time[100];
typedef char String[100];

//Defining new types for Schedules
typedef struct
{

	String Timing[5][5];

}TrainerSchedule;
typedef struct
{
	Time Timing[5];

}MemberSchedule;

MemberSchedule AddMSchedule(void)
{
		MemberSchedule MS;
		cout<<"Monday:";scanf("%s",MS.Timing[0]);
		cout<<"Tuesday:";scanf("%s",MS.Timing[1]);
		cout<<"Wednesday:";scanf("%s",MS.Timing[2]);
		cout<<"Thursday:";scanf("%s",MS.Timing[3]);
		cout<<"Friday:";scanf("%s",MS.Timing[4]);
		return MS;
}

TrainerSchedule AddTSchedule(void)
{
	String DayNames[5]={"Monday","Tuesday","Wednesday","Thursday","Friday"};
	String Time[5]={"1-2","2-3","3-4","4-5","5-6"};
	TrainerSchedule TS;

		for(int i=0;i<5;i++)
		{
			cout<<"Schedule for "<<DayNames[i]<<endl;
				for(int j=0;j<5;j++)
				{ cout<<Time[j];
					scanf("%s",TS.Timing[i][j]);
				}

		}

		return TS;
}
void ShowTSchedule(void)
{

}
void ShowMSchedule(MemberSchedule Ms)
{
	cout<<"\n----------------------Schedule-------------------";
	cout<<"\nMon\tTue\tWed\tThu\tFri\n";
	for(int i=0;i<5;i++)
	cout<<Ms.Timing[i]<<"\t";
	cout<<"\n-------------------------------------------------";
}
void ShowTSchedule(TrainerSchedule Ts)
{
	String Times[7]={"1-2","2-3","3-4","4-5","5-6"};
	cout<<"\n\tMon\t\tTue\t\tWed\t\tThu\t\tFri\t\n";
	cout<<"---------------------------------------------------------------------------------\n";
	for(int i=0;i<5;i++)
	{cout<<Times[i]<<"->\t";
	for(int j=0;j<5;j++)
	cout<<Ts.Timing[j][i]<<"\t\t";
	cout<<"\n";
	}
	cout<<"\n--------------------------------------------------------------------------------";

}
#endif
