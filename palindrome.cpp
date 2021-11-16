#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,r,temp;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    temp=num;
    while(num>0)
    {
        r=num%10;
        rev=(rev*10)+r;
        num=num/10;
    }
    num=temp;
    if(rev==num)
    cout<<"The entered number is a palindrome."<<endl;
    else
    cout<<"The entered number is not a palindrome."<<endl;
return 0;
}
