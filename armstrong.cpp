#include<iostream>
using namespace std;
int main()
{
	int num,r,sum=0,temp,c;
	cout<<"Enter a number:";
	cin>>num;
	temp=num;
	while(num>0)
	{
		r=num%10;
		c=r*r*r;
		sum=sum+c;
		num=num/10;
	}
	num=temp;
	if(num==sum)
	cout<<"Armstrong";
	else
	cout<<"Not an Armstrong";
return 0;
}
