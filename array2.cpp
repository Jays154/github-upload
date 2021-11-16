#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int num[MAX],size,i,sum=0;
	cout<<"Enter the size of the array:";
	cin>>size;
	cout<<"Enter the numbers:"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<size;i++)
	{
		cout<<num[i];
		cout<<"\t";
		sum=sum+num[i];
	}
	cout<<endl<<"Sum is:"<<sum;

return 0;
}
