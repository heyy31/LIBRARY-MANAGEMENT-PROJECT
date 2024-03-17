#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	ofstream ofn;
	ofn.open("marks.dat",ios::out);
	int rno;
	char ch='y';
	float marks;
	while(ch=='y'||ch=='Y')
	{
		cout<<"\n Enter roll no: ";
		cin>>rno;
		cout<<"\n Enter marks: ";
		cin>>marks;
		ofn<<rno<<"\n"<<marks<<"\n";
		cout<<"\n Do you want to continue";
		cin>>ch;
	 }
	 ofn.close();
	 getch();
}