#include<iostream>
using namespace std;
int main()
{
	int num,fact=1,i;
	cout<<"enter a number:";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial of the number is:"<<fact;
return 0;
}
