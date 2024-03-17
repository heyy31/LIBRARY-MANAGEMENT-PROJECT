#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include "Book.h"
#include "user.h"
class Book_Admin
{
	public :
		void admin_menu();
};
void Book_Admin::admin_menu()
{
	int op;
	user u;
	do
	{
		cout << "press 1:add a book\n";
		cout << "press 2:show all the books\n";
		cout << "press 3:Edit book details\n";
		cout << "press 4:Delete a delete\n";
		cout << "press 5:add a user\n";
		cout << "press 6:show all the user\n";
		cout << "press 7:Edit user details\n";
		cout << "press 8:Delete a user \n";
		cout << "press 9:Exit\n";
		cout << "Enter your choice :";
		cin >>op;
		Book b;
		switch(op)
		{
			case 1:
				b.adddata();
				break;
			case 2:
				b.readdata();
				break;
			case 3:
				b.modify();
				break;
			case 4:
				b.delet();
				break;
			case 5:
				u.adddata();
				break;
			case 6:
				u.readdata();
				break;
			case 7:
				u.modify();
				break;
			case 8:
				u.delet();
				break;
			case 9:
				exit(0);
		}
	}
	while(op < 9);
}


