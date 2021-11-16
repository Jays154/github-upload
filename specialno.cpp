#include<iostream>
using namespace std;
int main()
{
	int num,r,fact,temp,i,sum=0;
	cout<<"Enter a number:";
	cin>>num;
	temp=num;
	while(num>0)
	{
		r=num%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	num=temp;
	if(num==sum)
	cout<<"Special number";
	else
	cout<<"Not a special number";
return 0;
}
