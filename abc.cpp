#include<iostream>
using namespace std;
int main()
{
	char c[]={'a','b','c','d','e','f','g','h','i','j'};
	int a[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		cout<<"Enter no. of gifts for person:"<<ends<<c[i]<<endl;
		cin>>a[i];
		cout<<endl;
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			
			
			if(a[i]>a[j])
			{
				int  temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			char t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
	cout<<endl<<"*******The oder of Billing **********"<<endl;
		for(i=0;i<10;i++)//displaying 
	{
	cout<<c[i]<<"\t\t"<<a[i]<<endl;
	}
}
/*swathi.cpp
Displaying swathi.cpp.*/
