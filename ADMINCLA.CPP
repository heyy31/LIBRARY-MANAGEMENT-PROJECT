#include<iostream.h>
#include<conio.h>
class Book
{
	int book_id;
	char book_name[10];
	char author_name[10];
	int book_price;
	void input();
	void output();
	void adddata();
	void readdata();
};
void admin::input()
{
	cout<<"Enter book id:\n ";
	cin>>book_id;
	cout<<"Enter book name:\n ";
	cin>>book_name;
	cout<<"Enter author name:\n ";
	cin>>author_name;
	cout<<"Enter price of book:\n ";
	cin>>book_price;
}
void admin::output()
{
	cout<<"Book id:\n"<<book_id;
	cout<<"Book name: \n"<<book_name;
	cout<<"Author name:\n"<<author_name;
	cout<<"Book price:\n"<<book_price;
}