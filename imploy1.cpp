#include<iostream>
#include<string.h>
using namespace std;
class imploy{
	public :
	int id;
	char name[100];
	char work;
	char address[100];
	char contact[10];

};
main()
{
	imploy i;
	int l,n;
	
	cout<<"how many data do you want enter = ";
	cin>>n;
	for(l=1;l<=n;l++)
	{
		cout<"enter id of imploy";
		cin>>i[l].id;
		cout<"enter name of imploy";
		cin>>i[l].name;
		cout<"enter work of imploy";
		cin>>i[l]work;
		cout<"enter addres of imploy";
		cin>>i[l]address;
		cout<"enter contact of imploy";
		cin>>i[l]contact;
	}

	for(l=1;l<=n;l++)
	{
	
	cout<<"imploy id = "<<i.id<<endl;
	cout<<"imploy name = "<<i.name<<endl;
	cout<<"imploy std = "<<i.std<<endl;
	cout<<"imploy address = "<<i.address<<endl;
	cout<<"imploy contact ="<<i.contact<<endl;
	}
}
