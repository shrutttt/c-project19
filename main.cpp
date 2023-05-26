#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
class FAUJI
{
protected:
 char name[30];char enroll_no[20];
 int service,promo,posts,rrank;
public:
 void getdetails()
 {
 cout<<"Enter the name:\n";
 cin.getline(name,30);
 cin.getline(name,30);
 cout<<"Enter the enrollment number:\n";
 cin>>enroll_no;
 cout<<"Enter the years of service:\n";
 cin>>service;
 cout<<"Enter the rank in which retiring:\n1 Hawaldar\n2 NB Subedar\n3 Subedar\n4 Sub Major\n5 Colonel\n6 Brigadier\n7 Maj General\n8 Lt General\n9 General\n";
 cin>>rrank;
 cout<<"Enter the number of promotions recieved throughout the career:\n";
 cin>>promo;
 cout<<"Enter the number of postings recieved during services:\n";
 cin>>posts;
 }
 virtual void display1()=0;
};
class postret
{
protected:
 int qualif,salary;
public:
 void getq()
 {
 cout<<"Enter the qualification or expertise field\n";
 cout<<"1 Metric pass\n2 12th Pass/Diploma\n3 Pharmacist\n4 Engineering\n5 security war experience\n6 Paramedical\n7 ITI\n8 Transport driver\n";
 cin>>qualif;
 switch(qualif)
 {
 case 1:cout<<"\n\n**You have been assigned the job for governmental institutes managerial services**\n\n";
 salary=22000;
 break;
 case 2:cout<<"\n\n**You have been assigned the job in canteen supply depot services**\n\n";
 salary=25000;
 break;
 case 3:cout<<"\n\n**You have been assigned the job of ECHS medicine control services**\n\
n";
 salary=26000;
 break;
 case 4:cout<<"\n\n**You have been assigned the job in PWD engineering services**\n\n";
 salary=29000;
 break;
 case 5:cout<<"\n\n**You have been assigned the job of ration depot security services**\n\n";
 salary=23000;
 break;
 case 6:cout<<"\n\n**You have been assigned the job of ECHS medical services**\n\n";
 salary=34000;
 break;
 case 7:cout<<"\n\n**You have been assigned the job of central communication and technological services**\n\n";
 salary=27000;
 break;
 case 8:cout<<"\n\n**You have been assigned the job of goods transport services**\n\n";
 salary=34000;
 break;
 }
 }
 virtual void display2()=0;
};
class pension1:virtual public FAUJI
{
protected:
 int monthpen1;string rrank1;
public:
 void getpen1()
 {
 switch(rrank)
 {
 case 1:monthpen1=25000;
 rrank1="Hawaldar";
 break;
 case 2:monthpen1=28000;
 rrank1="NB Subedar";
 break;
 case 3:monthpen1=31000;
 rrank1="Subedar";
 break;
 case 4:monthpen1=34000;
 rrank1="Sub Major";
 break;
 case 5:monthpen1=92000;
 rrank1="Colonel";
 break;
 case 6:monthpen1=110000;
 rrank1="Brigadier";
 break;
 case 7:monthpen1=130000;
 rrank1="Maj General";
 break;
 case 8:monthpen1=142000;
 rrank1="Lt General";
 break;
 case 9:monthpen1=155000;
 rrank1="General";
 break;
 }
 }
 virtual void display3()=0;
};
class pension2:virtual public FAUJI
{
protected:
 int lumpsum,monthpen2;
 string rrank2;
public:
 void getpen2()
 {
 switch(rrank)
 {
 case 1:lumpsum=2000000;
 monthpen2=18000;
 rrank2="Hawaldar";
 break;
 case 2:lumpsum=2300000;
 monthpen2=20000;
 rrank2="NB Subedar";
 break;
 case 3:lumpsum=2500000;
 monthpen2=22000;
 rrank2="Subedar";
 break;
 case 4:lumpsum=2700000;
 monthpen2=24000;
 rrank2="Sub Major";
 break;
 case 5:lumpsum=4000000;
 monthpen2=80000;
 rrank2="Colonel";
 break;
 case 6:lumpsum=4500000;
 monthpen2=100000;
 rrank2="Brigadier";
 break;
 case 7:lumpsum=5000000;
 monthpen2=120000;
 rrank2="Maj General";
 break;
 case 8:lumpsum=5500000;
 monthpen2=130000;
 rrank2="Lt General";
 break;
 case 9:lumpsum=6000000;
 monthpen2=140000;
 rrank2="General";
 break;
 }
 }
 virtual void display4()=0;
};
class warcas:virtual public FAUJI
{
protected:
 char homestate[20];
 char war[20];
 int year,choose;
 string casuality;
public:
 void getdet();
 virtual void display5()=0;
};
 void warcas:: getdet()
 {
 cout<<"Enter type of casuality faced:\n1 Body part Damage/Handicapped/Disabled\n2 Death of soldier\n";
 cin>>choose;
 switch(choose)
 {
 case 1:casuality="Disabled/Handicapped";
 break;
 case 2:casuality="Death of soldier";
 break;
 }
 cout<<"Enter the operation in which casualities happened\n";

 cin.getline(war,30);
 cin.getline(war,30);
 cout<<"Enter the year when operation was held:\n";
 cin>>year;
 cout<<"Enter your homestate:\n";
 cin>>homestate;
 }
class All_displays:public pension1,public pension2,public warcas,public postret
{
protected:
int choice1,choice2,choice3;
public:
 void display1()
 {
 cout<<"Name:"<<name<<endl;
 cout<<"Enrollment number:"<<enroll_no<<endl;
 cout<<"Years served:"<<service<<endl;
 cout<<"Number of promotions:"<<promo<<endl;
 cout<<"Postings served:"<<posts<<endl;
 }
 void display2()
 {
 cout<<"salary offered in post retirement job: Rs"<<salary<<"\n\n"<<endl;
 }
 void display3()
 {
 cout<<"Retiring rank of army personal:"<<rrank1<<endl;
 cout<<"Monthly pension: Rs"<<monthpen1<<endl;
 }
 void display4()
 {
 cout<<"Retiring rank of army personal:"<<rrank2<<endl;
 cout<<"Lump sum alloted:"<<lumpsum<<endl;
 cout<<"Monthly pension: Rs"<<monthpen2<<endl;
 }
 void display5()
 {
 if(casuality=="Disabled/Handicapped")
 {
 cout<<"Casuality faced by soldier:"<<casuality<<endl;
 cout<<"Operation in which casualities happened:"<<war<<endl;
 cout<<"Operation held year:"<<year<<endl;
 cout<<"\n\n**You will be awarded with 1 acre of land in your homestate "<<homestate<<"**\
n\n"<<endl;
 }
 else
 {
 cout<<"Casuality faced by soldier:"<<casuality<<endl;
 cout<<"Operation in which casualities happened:"<<war<<endl;
 cout<<"Operation held year:"<<year<<endl;
 cout<<"\n\n**Amount will be credited into the bank account of Wife/Close relative**\n\n";
 cout<<"\n\n**You will be awarded with 1 acre of land in your homestate "<<homestate<<"**\n\n"<<endl;
 }
 }
};
class display_all: public All_displays
{
protected:
int choice1,choice2,choice3;
public:
 void get_all(int n)
 {
 getdetails();
 cout<<"Do you want Lumpsum to be alloted:\n1 Yes\n2 No\n";
 cin>>choice1;
 switch(choice1)
 {
 case 1:getpen2();
 break;
 case 2:getpen1();
 break;
 }
 cout<<"Do you have any war casualities:\n1 Yes\n2 No\n";
 cin>>choice3;
 switch(choice3)
 {
 case 1:getdet();
 break;
 case 2:cout<<"Do you want opt for post retirement government jobs:\n1 Yes\n2 No\n";
 cin>>choice2;
 switch(choice2)
 {
 case 1:getq();
 break;
 case 2:break;
 }
 break;
 }
 }
 void displaying(int n)
 {
 cout<<"\n\nSoldier details:\n";
 display1();
 if(choice1==1)
 display4();
 else
 display3();
 if(choice2==1 && choice3==2)
 display2();
 if(choice3==1)
 display5();
 }
};
int main()
{
 display_all d1;
 int n;
 cout<<"Enter the number of soldiers:\n";
 cin>>n;
 for(int i=0;i<n;i++)
 {
 cout<<"Enter soldier "<<i+1<<" details\n";
 d1.get_all(i);
 cout<<"Soldier "<<i+1<<" details\n";
 d1.displaying(i);
 }
 return 0;
}
