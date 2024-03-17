#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include "Book.h"
#include "user.h"
class Book_user
{
	public :
		void user_menu();
};
void Book_user::user_menu()
{
	int op;
	user u;
	do
	{
		cout<<"press 1:show all books\n";
		cout<<"press 2:Issue a book\n";
		cout<<"press 3:To return a book\n";
		Book b;
		user u;
		cin>>op;
		switch(op)
		{
			case 1:
				b.readdata();
				break;
			case 2:
				u.issue();
				break;
			case 3:
				u.returnbook();
				break;
		}
	}
	while(op<3);
}
