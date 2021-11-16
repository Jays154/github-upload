#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,lmt,c,i;
	cout<<"Enter the limit:";
	cin>>lmt;
	cout<<"The fibonaci series is:";
	for(i=1;i<=lmt;i++)
	{
		cout<<a<<"\t";
		c=a+b;
		a=b;
		b=c;
	}
return 0;
}
