#include<iostream>
#include<string.h>
using namespace std;
class Distance{
	public:
	  int feet;
	  int inch;
	  int totalfeet;
	  int totalinch;
};
main(){
	
	Distance d,d1,total;
		
	cout<<"Enter A Feet = ";
	cin>>d.feet;
	cout<<"Enter A Inch = ";
	cin>>d.inch;
	
	cout<<"Enter B Feet = ";
	cin>>d1.feet;
	cout<<"Enter B Inch = ";
	cin>>d1.inch;
	
	total.totalfeet = d.feet + d1.feet;
	total.totalinch = d.inch + d1.inch;
	
	while(total.totalinch>=12)
		{
			total.totalfeet++;
			total.totalinch ;
		}
	cout<<"Total Feet = "<<total.totalfeet<<endl
	    <<"Total Inch = "<<total.totalinch<<endl;
	
}
