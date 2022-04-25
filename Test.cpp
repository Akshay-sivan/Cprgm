#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	cout << "Adding two numbers \n";
	int a = 10;
	int b = 20;
	int c = a + b;
	cout << a << " + " << b << " = " << c <<"\n";
	int lst[5] = { 1,2,3,4,5 };
	cout << "List items are : ";
	for ( int i = 0; i < 5; i++)
	{
		cout << lst[i] << " ";

	}
}

