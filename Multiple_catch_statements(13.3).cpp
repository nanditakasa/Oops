#include<iostream>
using namespace std;
void test(int x)
{
	try
	{
		if (x == 1) throw x;
		else
		if (x == 0) throw 'x';
		else
		if (x == -1) throw 1.0;
		cout<<"End of try-block\n";
	}
	catch(char c)
	{
		cout<<"caught a character \n";
	}
	catch(int m)
	{
		cout<<"caught an integer \n";
	}
	catch(double d)
	{
		cout <<"caught a double\n";
	}
	cout<<"end of try-catch system\n\n";
}
int main()
{
	cout<<"testing multiple catches\n";
	cout<<"x == 1\n";
	test(1);
	cout<<"x == 0\n";
	test(0);
	cout<<"x == -1\n";
	test(-1);
	cout<<"x == 2\n";
	test(2);
	return 0;
	
}
/*
OUTPUT:
testing multiple catches
x == 1
caught an integer
end of try-catch system

x == 0
caught a character
end of try-catch system

x == -1
caught a double
end of try-catch system

x == 2
End of try-block
end of try-catch system*/
