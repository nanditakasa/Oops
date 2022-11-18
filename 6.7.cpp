#include<iostream>
using namespace std;
int count=0;
class test
{
	public:
		test()
		{
			count++;
			cout<<"\n\nConstructor Msg:Object number"<<count<<
			"created..";
		}
		~test()
		{
			cout<<"\n\n Destructor Msg: Object number"<<count<<"destroyed..";
			count--;
		}
};
int main()
{
	cout<<"Inside the main block..";
	cout<<"\n\n Creating first object T1..";
	
	test T1;
	{
		
		//Block 1
		cout<<"\n\n Inside block 1..";
		cout<<"\n\n Creating two more objects T2 and T3..";
		test T2,T3;
		cout<<"\n\n Leaving block 1..";
	}
	cout<<"\n\n Back inside the main block..";
	return 0;
}
