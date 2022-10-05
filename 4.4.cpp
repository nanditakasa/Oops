#include<iostream>
using namespace std;
void TOH(int d,char tower1,char tower2,char tower3)
{
	if(d==1)
	{
		cout<<"\n Shift top disk from tower"<<tower1<<"to tower"<<tower2;
		return;
	}
	TOH(d-1,tower1,tower3,tower2);
	cout<<"\n shift top disk from tower"<<tower1<<"to tower"<<tower2;
	
	TOH(d-1,tower3,tower2,tower1);
}
int main()
{
	int disk;
	cout<<"enter the number of disks:";
	cin>>disk;
	if(disk<1)
	cout<<"\nthere are no disks to shift";
	else
	cout<<"\nthere are"<<disk<<"disks in tower 1\n";
	TOH(disk,'1','2','3');
	cout<<"\n\n"<<disk<<"disks in tower 1 are shifted to tower 2";
	return 0;
}
/*Output:
enter the number of disks:2

there are2disks in tower 1

 Shift top disk from tower1to tower3
 shift top disk from tower1to tower2
 Shift top disk from tower3to tower2

2disks in tower 1 are shifted to tower 2*/
