#include<iostream>
#include<string.h>
using namespace std;

class highschool{
	int id;
	char name[100];
	int roll;
	int stander;
	int age;
	char contact[100];
	char address[100];
	
		public :
		void student()
		{
			cout<<"Enter student id = ";
			cin>>id;
			cout<<"Enter student name = ";
			cin>>name;
			cout<<"Enter student roll no = ";
			cin>>roll;
			cout<<"Enter student stander = ";
			cin>>stander;
			cout<<"Enter student age = ";
			cin>>age;
			cout<<"Enter student contact = ";
			cin>>contact;
			cout<<"Enter student address = ";
			cin>>address;
		}
		void pri()
		{
				cout<<" student id = "<<id<<endl
					<<" student name = "<<name<<endl
					<<" student roll no = "<<roll<<endl
					<<" student stander = "<<stander<<endl
					<<" student age = "<<age<<endl
					<<" student contact = "<<contact<<endl
					<<"Enter student address = "<<address<<endl;
		}
};


class collage{
	int id;
	char name;
	int roll;
	int stander;
	int age;
	char contact;

	char address;
	
	public :
		void  clg()
		{
			cout<<"Enter student id = ";
			cin>>id;
			cout<<"Enter student name = ";
			cin>>name;
			cout<<"Enter student roll no = ";
			cin>>roll ;
			cout<<"Enter student stander = ";
			cin>>stander;
			cout<<"Enter student age = ";
			cin>>age;
			cout<<"Enter student contact = ";
			cin>>contact;
			cout<<"Enter student address = ";
			cin>>address;
		}
		void printing()
		{
				cout<<" student id = "<<id<<endl
					<<" student name = "<<name<<endl
					<<" student roll no = "<<roll<<endl
					<<" student stander = "<<stander<<endl
					<<" student age = "<<age<<endl
					<<" student contact = "<<contact<<endl
					<<"Enter student address = "<<address<<endl;
		}
};
int main()
{
	highschool s;
	int i,n;

	cout<<"HOW MANY DATA DO YOU WANT ENTR FOR highschool = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s.student();
	}
	for(i=1;i<=n;i++)
	{
		s.pri();
	}
	collage c;
	cout<<"HOW MANY DATA DO YOU WANT ENTR for COLLAGE= ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c.clg();
	}
	for(i=1;i<=n;i++)
	{
		c.printing();
	}
}



