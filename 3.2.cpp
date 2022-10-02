#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size;
	cout<<"enter the size of the integer array:";
	cin>>size;
	cout<<"creating an array of size"<<size<<"..";
	arr = new int[size];
	cout<<"\n dynamic allocation of memory for array arr is successful.";
	delete arr;
	return 0;
}
/*
Output:
enter the size of the integer array:5
creating an array of size5..
dynamic allocation of memory for array arr is successful.*/
