#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,r,temp;
	cout<<"Enter a number:";
	cin>>num;
	temp=num;
	while(num>0)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	num=temp;
	if(num==rev)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
return 0;
}
