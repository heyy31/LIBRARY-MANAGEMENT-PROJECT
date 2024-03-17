#include<iostream.h>
#include<conio.h>
#include<string.h>
#include "Book_Admin.h"
void main()
{
	clrscr();
	start:
	char username[10],adminname[10],adminpass[10],userpass[10];
	cout<<"1.Admin login\n";
	cout<<"2.User login\n";
	cout<<"3.Exit\n";
	int ch;
	cout<<"Enter choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
		cout<<"Enter admin id: ";
		cin>>adminname;
		cout<<"Enter admin password: ";
		cin>>adminpass;
		if((strcmp(adminname,"admin")==0) && (strcmp(adminpass,"admin")==0))
		{
			cout<<"Login successfull";
			Book_Admin ba;
			ba.admin_menu();
		}
		else
		{
			cout<<"Login not successful";
			goto start;
		}
	}

	getch();
}

