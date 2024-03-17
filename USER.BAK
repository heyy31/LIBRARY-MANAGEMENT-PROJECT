#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
class user
{
	int mobile,user_id;
	char user_name[10],user_pass[10];
	public:
	void input();
	int user_idd()
	{
		return user_id;
	}
	void output();
	void adddata();
	void readdata();
	void delet();
	void modify();
	void issue();
	void returnbook();
};
void user::input()
{
	cout<<"Enter username: \n";
	cin.getline(user_name,10);
	cout<<"Enter user id: \n";
	cin>>user_id;
	cout<<"Enter user password: \n";
	cin.getline(user_pass,10);
	cout<<"Enter mobile no: \n";
	cin>>mobile;
}
void user::output()
{
	cout<<"User name: "<<user_name<<"\n";
	cout<<"User id: "<<user_id<<"\n";
	cout<<"User password: "<<user_pass<<"\n";
	cout<<"Mobile no: "<<mobile<<"\n";
}
void user::adddata()
{
	clrscr();
	user u;
	ofstream fout;
	fout.open("user.dat",ios::out|ios::binary);
	u.input();
	fout.write((char*)&u,sizeof(u));
	fout.close();
}
void user::readdata()
{
	clrscr();
	user u;
	ifstream fin;
	fin.open("user.dat",ios::in|ios::binary);
	while(fin.read((char*)&u,sizeof(u)))
	{
		u.output();
	}
	fin.close();
}
void user::delet()
{
	ofstream fout;
	ifstream fin;
	fout.open("temp.dat",ios::out|ios::binary);
	fin.open("user.dat",ios::in|ios::binary);
	int id;
	user u;
	cout<<"Enter user id whose record has to be deleted: ";
	cin>>id;
	while(fin.read((char*)&u,sizeof(u)))
	{
		if(u.user_idd()!=id)
			fout.write((char*)&u,sizeof(u));
	}
	fout.close();
	fin.close();
	remove("user.dat");
	rename("temp.dat","user.dat");
}
void user::issue()
{
	 int id;
	 char ch='y';
	 cout<<"Enter book id to be issued: ";
	 cin>>id;
	 Book b;
	 fstream fin;
	 fin.open("book.dat",ios::in|ios::binary|ios::out);
	 int flag=0,pos;
	 while(fin.read((char*)&b,sizeof(b)));
	 {
		if(id==b.bi())
		 {
			b.output();
			flag=1;
			pos = fin.tellg();
		}
	 }
    if(flag==1)
    {
	cout<<"Do you want to issue the book?";
	cin>>ch;
	if(ch=='y'||'Y')
	{
	cout<<"Book issued";
	fin.seekg(pos-sizeof(b));
	b.status = 'N';
	fin.write((char*)&b,sizeof(b));
	cout << "status changed to Not avaiable";
	}

}
}
void user::returnbook()
{

	 int id;
	 char ch='y';
	 cout<<"Enter book id to be issued: ";
	 cin>>id;
	 Book b;
	 fstream fin;
	 fin.open("book.dat",ios::in|ios::binary|ios::out);
	 int flag=0,pos;
	 while(fin.read((char*)&b,sizeof(b)));
	 {
		if(id==b.bi())
	 {
		b.output();
		flag=1;
		pos = fin.tellg();
	 }
	 }
    if(flag==1)
    {
	cout<<"Do you want to return the book?";
	cin>>ch;
	if(ch=='y'||'Y')
	{
	cout<<"Book returned";
	fin.seekg(pos-sizeof(b));
	b.status = 'Y';
	fin.write((char*)&b,sizeof(b));
	cout << "status changed to avaiable";
	}

}
/*void user::modify()
{
	clrscr();
	user u;
	fstream fin;
	fin.open("user.dat",ios::in|ios::out|ios::binary);
	int id;
	cout<<"\n Enter user id whose record is to be modified: ";
	cin>>id;
	long pos;
	char found ='f';
	while(fin.read((char*)&u,sizeof(u)))
	{
		pos=fin.tellg();
		if(u.user_idd()==id)
		{
			cout<<"Records to be modified\n";
			u.output();
			cout<<"Enter new details:"<<"\n";
			char namen[10];
			int mobilee;
			char pass[10];
			cout<<"New Name:(Enter'.' to retain old one)";
			cin.getline(namen,10);
			cout<<"New password:(Enter'-1' to retain old one)";
			cin.getline(pass,10);
			cout<<"New mobile no:(Enter'1' to retain old one)";
			cin>>mobilee;

			if(strcmp(namen,".")!=0)
				strcpy(u.user_name,namen);
			if(strcmp(pass,"-1")!=0)
				strcpy(u.user_pass,pass);
			if(mobile==mobilee)
				u.mobile=mobilee;

			fin.seekg(pos-sizeof(u));
			fin.write((char*)&u,sizeof(u));
			found='t';
			break;
		}
	 }
	 if(found=='f')
		cout<<"\n Record not found!!";
	 getch();

} */
}



