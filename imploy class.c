//#include<iostream>
#include<string.h>

class imploy{
	publik :
	
	int id;
	char name[20];
	int work;
	char address[100];
	char contact[10];
	

};
int main()
{
		imploy i;
	
	i.id = 1;
	strcpy(i.name,"bhagat");
	i.work = HOD;
	strcpy(i.address,"bangal");
	strcpy(i.contact, "9784747574"); 
	
	cout<<"impioy id = "<<i.id<<endl;
	cout<<"impioy name = "<<i.name<<endl;
	cout<<"impioy work = "<<i.work<<endl;
	cout<<"impioy address = "<<i.address<<endl;
	cout<<"impioy contact = "<<i.contact<<endl;
	return 0;
}
