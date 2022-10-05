#include<iostream>
using namespace std;
long fact(int n)
{
	if(n==0)
	return 1;
	return(n*fact(n-1));
}
int main()
{
	int num;
	cout<<"enter a positive integer:";
	cin>>num;
	cout<<"factorial of"<<num<<"is"<<fact(num);
	return 0;
}
/*Output:
enter a positive integer:4
factorial of4is24*/
