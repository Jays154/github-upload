#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"Enter all the elements of array:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"All the elements of array are:";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
return 0;
}
