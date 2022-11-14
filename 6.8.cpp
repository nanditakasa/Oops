#include<iostream>
using namespace std;
class test
{
	int *a;
	public:
	test(int size)
	{
		a=new int[size];
		cout<<"\n\n constructor Msg: integer array of size"<<size<<"created..";
	
	}
	~test()
	{
		delete a;
		cout<<"\n\n destructor msg:freed up the memory allocated for integer array";
	}	
};
int main()
{
	int s;
	cout<<"enter the size of the array..";
	cin>>s;
	cout<<"\n\ncreating an object of test class..";
	test T(s);
	cout<<"\n\npress any key to end the program..";
	return 0;
}
