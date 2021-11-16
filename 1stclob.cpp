#include<iostream>
using namespace std;
class stu
{
	private:
		int id;
		char name[20];
		public:
			void readstu()
			{
				cout<<"Enter the name & id:";
				cin>>name>>id;
			}
			void showstu();
};
void stu::showstu()
{
	cout<<"The name is:"<<name<<endl;
	cout<<"Id is:"<<id;
}
int main()
{
	stu s;
	s.readstu();
	s.showstu();
return 0;
}
