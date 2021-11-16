#include<iostream>
#include<string.h>
using namespace std;
class emp
{
	private:
	int empid;
	char ename[20];
	float esal;
	public:
		void putemp(int id,char name[20],float sal);
		void getemp();
};
void emp::putemp(int id,char name[20],float sal)
{
	empid=id;
	strcpy(ename,name);
	esal=sal;
}
void emp::getemp()
{
	cout<<"Employ id:"<<empid<<endl;
	cout<<"Employ Name:"<<ename<<endl;
	cout<<"Employ salary:"<<esal;
}
int main()
{
	emp e;
	e.putemp(101,"Jaya",16000);
	e.getemp();
return 0;
}
