#include<iostream.h>
#include<conio.h>
#include<fstream.h>
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
void Book::input()
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
void Book::output()
{
	cout<<"Book id:\n"<<book_id;
	cout<<"Book name: \n"<<book_name;
	cout<<"Author name:\n"<<author_name;
	cout<<"Book price:\n"<<book_price;
}
void Book::adddata()
{
	clrscr();
	Book b;
	ofstream fout;
	fout.open("book.dat",ios::out|ios::binary);
	b.input();
	fout.write((char*)&b,sizeof(b));
	fout.close();
}
void Book::readdata()
{
	clrscr();
	Book b;
	ifstream fin;
	fin.open("book.dat",ios::in|ios::binary);
	b.output();
	while(fin.read((char*)&b,sizeof(b)))
	{
		b.output();
	}
	fin.close();
}










