#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class Book
{
	int book_id;
	char book_name[40];
	char author_name[40];
	int book_price;
	public:
		char status;

	void input();
	void output();
	void adddata();
	void readdata();
	void search();
	void modify();
	void delet();
	int bi()
	{
		return book_id;
	}
	char *bn()
	{
		return book_name;
	}
	int price()
	{
		return book_price;
	}
};
void Book::input()
{
	char ch;
	cout<<"Enter book id:\n ";
	cin>>book_id;
	cin.get(ch);
	cout<<"Enter book name:\n ";
	cin.getline(book_name,40);
	cout<<"Enter author name:\n ";
	cin.getline(author_name,40);
	cout<<"Enter price of book:\n ";
	cin>>book_price;
	cout << "Enter status (A or N) ";
	cin >> status;
}
void Book::output()
{
	cout<<"Book id: "<<book_id<<"\n";
	cout<<"Book name: "<<book_name<<"\n";
	cout<<"Author name: "<<author_name<<"\n";
	cout<<"Book price: "<<book_price<<"\n";
	cout << status<< endl;
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
	Book b;
	ifstream fin;
	fin.open("book.dat",ios::in|ios::binary);
	while(fin.read((char*)&b,sizeof(b)))
	{
		b.output();
	}
	fin.close();
}
void Book::search()
{
	 int id;
	 cout<<"Enter book id to be searched: ";
	 cin>>id;
	 Book b;
	 ifstream fin;
	 fin.open("book.dat",ios::in|ios::binary);
	 int flag=0;
	 while(fin.read((char*)&b,sizeof(b)));
	 {
		if(id==b.bi())
	 {
		b.output();
		flag=1;
	 }
	 }
    if(flag==0)
	cout<<"Book id not found!!";
}
void Book::modify()
{
	fstream fin;
	fin.open("book.dat",ios::in|ios::out|ios::binary);
	int idd;
	cout<<"Enter book id whose book data is to be modified:";
	cin>>idd;
	long pos;
	char found='f';
	Book b;
	while(fin.read((char*)&b,sizeof(b)))
	{
		pos=fin.tellg();
		if(b.bi()==idd)
		{
			cout<<"Records to be modified \n";
			cout<<"Book id:"<<b.book_id<<"\n";
			cout<<"Book name:"<<b.book_name<<"\n";
			cout<<"Author name:"<<b.author_name<<"\n";
			cout<<"Book price:"<<b.book_price<<"\n";

			cout<<"Enter new details:"<<"\n";
			char namen[20]="";
			int pricen;
			cout<<"New book name:(Enter '.'to retain old one)";
			cin>>namen;
			cout<<"New price of book:(Enter '-1' to retain old one)";
			cin>>pricen;
			if(strcmp(namen,".")!=0)
			strcpy(b.book_name,namen);
			if(pricen!=-1)
			b.book_price=pricen;

			fin.seekg(pos-sizeof(b));
			fin.write((char*)&b,sizeof(b));
			found='t';
			break;
		 }
	 }
	 if(found=='f')
		cout<<"\nBook id not found!! ";
	 fin.close();
	 getch();
}
void Book::delet()
{
	ofstream fout;
	ifstream fin;
	fout.open("temp.dat",ios::out|ios::binary);
	fin.open("book.dat",ios::in|ios::binary);
	int iddd;
	Book b;
	cout<<"Enter book id whose book data is to be deleted: ";
	cin>>iddd;
	while(fin.read((char*)&b,sizeof(b)))
	{
		if(b.bi()!=iddd)
			fout.write((char*)&b,sizeof(b));
	}
	fout.close();
	fin.close();
	remove("book.dat");
	rename("temp.dat","book.dat");
}











