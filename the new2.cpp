#include<iostream>
#include<string>
using namespace std;

class Count_Time{
	public:		
		int hh;
		int mm;
		int ss;
		int totalhh;
		int totalmm;
		int totalss;	
};
int main()
{
	Count_Time c,c1,t;
	cout<<"====== Enter A = HH : MM : SS ====== "<<endl;
	cout<<"Enter HH A = ";
	cin>>c.hh;
	cout<<"Enter MM A = ";
	cin>>c.mm;
	cout<<"Enter SS A = ";
	cin>>c.ss;
	cout<<endl<<"====== Enter B = HH : MM : SS ====== "<<endl;
	cout<<"Enter HH B = ";
	cin>>c1.hh;
	cout<<"Enter MM B = ";
	cin>>c1.mm;
	cout<<"Enter SS B = ";
	cin>>c1.ss;
	t.totalss = c.ss + c1.ss;
	t.totalmm = c.mm + c1.mm;
	t.totalhh = c.hh + c1.hh;
	cout<<endl<<"====== Sum A + B HH : MM : SS ======"<<endl;
	while(t.totalss >= 60)
	 	{
	 		t.totalmm++;
	 		t.totalss -= 60;
		 }
	while(t.totalmm >= 60)
		{
			t.totalhh++;
			t.totalmm -= 60;
		}
		cout<<"Total HH = "<<t.totalhh<<endl
		    <<"Total MM = "<<t.totalmm<<endl
		    <<"Total SS = "<<t.totalss<<endl;
	return 0;
}

