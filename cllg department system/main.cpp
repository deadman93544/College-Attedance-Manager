#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <unistd.h>
#include <time.h>

#include "sleep.h"
#include "gotoxy.h"
using namespace std;

//Structure defining

//For students
struct student
{
 string fname;//for student first name
 string lname;//for student last name
 
 string Registration;//for Registration No number
 string classes;//for class info
}studentData;//Variable of student type

//For teachers
struct teacher
{
 string fst_name;//first name of teacher
 string lst_name;//last name of teacher
 string qualification;//Qualification of teacher
 string exp;//Experiance of the person
 string pay;//Pay of the Teacher
 string subj;//subject whos he/she teach
 string lec;//Lecture per Week
 string addrs;//Adders of teacher home
 string cel_no;//Phone number 
 string blod_grp;//Bool Group 
 string serves;//Number of serves in School

}tech[50];//Variable of teacher type



int login()
{
   system("cls");
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tCOLLEGE DATA MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t------------------------------\n\n";	
   cout<<"\t\t\t\t\tEnter Password('exit' to Exit): ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   
   if(pass == "pass")
   {
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }
   else
   if(pass=="exit")
   {
   	 system("cls");
   	 cout<<"EXiting..";
   	 sleep(1);
     exit(0); 
   }
   else
   {
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

void loadscreen()
{
    gotoxy(90,28);
	cout<<"LOADING";
	sleep(1);cout<<".";
    sleep(1);cout<<".";
    sleep(1);cout<<".";		
}
void logoGITM()
{
	int delaytime;
	srand(time(0));
	gotoxy(35,7);
    cout<<"**********************************************\n";
    gotoxy(35,8);
    cout<<"*                                            *\n";
    gotoxy(35,9);
    cout<<"*                   G I T M                  *\n";
    gotoxy(35,10);
    cout<<"*    (Global Insti. of Tech. & Managment)    *\n";
    gotoxy(35,11);
    cout<<"*              (Farukhnagar,Haryan)          *\n";
    gotoxy(35,12);
    cout<<"*                                            *\n";
    gotoxy(35,13);
    cout<<"*                                            *\n";
    gotoxy(35,14);
    cout<<"**********************************************\n";
    //randomize();
    for(int i=0;i<110;i++)
    {
    	gotoxy(i,30);
    	cout<<">";
    	usleep(35000);
	}
	cout<<" W A I T ";
	sleep(1);
}

void show_DevInfo()
{
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t| Name     |: Gaurav Tanwar"<<endl;
	cout<<"\t\t\t\t\t| Roll NO. |: 181023"<<endl;
	cout<<"\t\t\t\t\t| Batch    |: 2018-2022"<<endl;
	cout<<"\t\t\t\t\t| Dept.    |: B.Tech CSE"<<endl;
	system("pause");
}

//Main function
int main()
{
	
int i=0,j;//for processing usage 
char choice;//for getting choice
string find;//for sorting
string srch;  

loadscreen();
system("cls");
sleep(1);
logoGITM();
sleep(3);
login();
while(1)//outer loop
{ 
 system("cls");//Clear screen

//Level 1-Display process 
 cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t\t  COLLEGE DATA MANAGEMENT\n\n";
 cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t\t\t:MAIN SCREEN:\n\n";
 cout<<"\t\t\t\t\t0. Developer Information"<<endl;
 cout<<"\t\t\t\t\t1. Students Information"<<endl;
 cout<<"\t\t\t\t\t2. Teacher Information"<<endl;
 cout<<"\t\t\t\t\t3. Exit Program"<<endl;
  cout<<"\n\n\t\t\t\tEnter your choice: ";
 cin>>choice;

system("cls");//Clear screen

switch(choice)//First switch
{
 
 case '0': 
 {
   show_DevInfo();
   continue;
 }break;
 case '1': //Student
 { 
   while(1)//inner loop-1
   { 
     system("cls");//Clear screen
     //Level-2 display
     cout<<"\t\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
     cout<<"\t\t\t\t\t1. Create new entry\n";
     cout<<"\t\t\t\t\t2. Find and display entry\n";
     cout<<"\t\t\t\t\t3. Jump to main\n";
     cout<<"\n\n\t\t\t\tEnter your choice: ";
     cin>>choice;

     switch (choice)//Second switch

    {   
case '1'://Insert data
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
	system("CLS");
 cout<<"\t\t\t\t\tNEW ENTRY\n\n";
 cout<<"\t\t\t\t\tEnter First name: ";
 cin>>studentData.fname;
 cout<<"\n\t\t\t\t\tEnter Last name: ";
 cin>>studentData.lname;
 cout<<"\n\t\t\t\t\tEnter Registration number: ";
 cin>>studentData.Registration;
 cout<<"\n\t\t\t\t\tEnter class: ";
 cin>>studentData.classes;
 
 f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl;
 cout<<"\n\n\t\t\t\t\tDo you want to enter data: ";
 cout<<"\n\t\t\t\t\tPress Y for Continue and N to Finish:  ";
 cin>>choice;
}
} 
f1.close();
}
continue;//control back to inner loop -1

case '2'://Display data
{  ifstream f2("student.txt"); 
system("CLS");
cout<<"\n\t\t\t\tDISPLAY STUDENT'S ENTRY\n";
cout<<"\n\t\t\t\t\tEnter First name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{ 

getline(f2,studentData.fname);

if(studentData.fname==find)
{
 notFound = 1;
 cout<<"\n\t\t\t\t\tFirst Name: "<<studentData.fname<<endl;
 cout<<"\n\t\t\t\t\tLast Name: "<<studentData.lname<<endl;

 cout<<"\n\t\t\t\t\tRegistration Number: "<<studentData.Registration<<endl;

 cout<<"\n\t\t\t\t\tClass: "<<studentData.classes<<endl<<endl;
}

}


if(notFound == 0)
{
 cout<<"\n\t\t\tNo Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
system("pause");//To hold data on screen

}
continue;//control back to inner loop -1

case '3'://Jump to main
{
break;//inner switch breaking
}
}

break;//inner loop-1 breaking
}
continue;//Control pass to 1st loop    
}

case '2'://Teachers biodata
{ 
while(1)//inner loop-2
{ 
system("cls");//Clear screen
//Level-2 Display process
cout<<"\t\t\t\tINSTRUCTOR INFORMATION AND BIODATA SECTION\n\n\n";
cout<<"\t\t\t\t\t1. Create new entry\n";
cout<<"\t\t\t\t\t2. Find and display\n";
cout<<"\t\t\t\t\t3. Jump to main\n";                       ||
cout<<"\n\n\t\t\t\tEnter your choice: ";
cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{ 
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{
 
 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
 	system("CLS");
  cout<<"\t\t\t\t\tEnter First name: ";
  cin>>tech[i].fst_name;
  cout<<"\n\t\t\t\t\tEnter Last name:: ";
  cin>>tech[i].lst_name;
  cout<<"\n\t\t\t\t\tEnter Qualification: ";
  cin>>tech[i].qualification;
  cout<<"\n\t\t\t\t\tEnter Experiance(year): ";
  cin>>tech[i].exp;
  cout<<"\n\t\t\t\t\tEnter Year in this college: ";
  cin>>tech[i].serves;
  cout<<"\n\t\t\t\t\tEnter Subject: ";
  cin>>tech[i].subj;
  cout<<"\n\t\t\t\t\tEnter Lecture(per Week): ";
  cin>>tech[i].lec;
  cout<<"\n\t\t\t\t\tEnter Pay: ";
  cin>>tech[i].pay;
  cout<<"\n\t\t\t\t\tAddress: ";
  cin>>tech[i].addrs;
  cout<<"\n\t\t\t\t\tEnter Phone Number: ";
  cin>>tech[i].cel_no;
  cout<<"\n\t\t\t\t\tEnter Blood Group: ";
  cin>>tech[i].blod_grp;
  
  t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl 
   <<tech[i].qualification<<endl<<tech[i].exp<<endl
   <<tech[i].serves<<endl<<tech[i].subj<<endl<<tech[i].lec
   <<endl<<tech[i].pay<<endl<<tech[i].addrs<<endl<<tech[i].cel_no<<endl<<tech[i].blod_grp<<endl;
  cout<<"\n\n\t\t\t\t\tDo you want to enter data: ";
  cin>>choice;
 }//if
}//for loop
//for finding through name 
system("cls");

t1.close();
}//case 1

continue;//Control pass to inner loop-2

case '2'://Display data
{ 
ifstream t2("teacher.txt"); 
system("CLS");
cout<<"\n\t\t\t\tDISPLAY TEACHER'S ENTRY\n";
cout<<"\n\t\t\t\t\tEnter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{ 
 
 getline(t2,tech[j].fst_name);
 
 if(tech[j].fst_name==find)
 {
  notFound = 1;
  cout<<"\n\t\t\t\t\tFirst name: "<<tech[j].fst_name<<endl;
  getline(t2,tech[j].lst_name);
  cout<<"\n\t\t\t\t\tLast name: "<<tech[j].lst_name<<endl;
  getline(t2,tech[j].qualification);
  cout<<"\n\t\t\t\t\tQualification: "<<tech[j].qualification<<endl;
  getline(t2,tech[j].exp);
  cout<<"\n\t\t\t\t\tExperience: "<<tech[j].exp<<endl;

  getline(t2,tech[j].serves);
  cout<<"\n\t\t\t\t\tYear in this School: "<<tech[j].serves<<endl;

  getline(t2,tech[j].subj);
  cout<<"\n\t\t\t\t\tSubject: "<<tech[j].subj<<endl;

  getline(t2,tech[j].lec);
  cout<<"\n\t\t\t\t\tLecture (per Week): "<<tech[j].lec<<endl;
  getline(t2,tech[j].pay);
  cout<<"\n\t\t\t\t\tPay: "<<tech[j].pay<<endl;

  getline(t2,tech[j].addrs);
  cout<<"\n\t\t\t\t\tAddress: "<<tech[j].addrs<<endl;

  getline(t2,tech[j].cel_no);
  cout<<"\n\t\t\t\t\tPhone Number: "<<tech[j].cel_no<<endl;

  getline(t2,tech[j].blod_grp);
  cout<<"\n\t\t\t\t\tBlood Group: "<<tech[j].blod_grp<<endl;
 }//if
 
}//for loop
t2.close();
if(notFound == 0){

 cout<<"\n\t\t\tNo Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
system("pause");//To hold data on screen
}//case 2

continue;//Control pass to inner loop-2

case '3'://Jump to main 
{
break;//inner switch
}//case 3

}//inner switch

break;//inner while
}//inner loop

continue;//control pass to 1st loop
}//outer case 2

case '3':
{
	cout<<"Exiting...";
	sleep(2);
	cout<<"\nBrought To You By Gaurav Tanwar";
	sleep(3);
break;//outer case 3
}//outer case 3
}   
break;//outer loop 
}
return 0;
}



