#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
		void getdata(void);
		void display(void);
};
void person :: getdata(void)
{
	cout<<"enter name:";
	cin>>name;
	cout<<"enter name:";
	cin>>age;
}
void person :: display(void)
{
	cout<< "\nname: "<< name;
	cout<< "\nage: "<< age;
}
int main()
{
	person p;
	p.getdata();
	p.display();
	
	return 0;
}
