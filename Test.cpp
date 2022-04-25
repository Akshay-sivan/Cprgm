#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	cout << "My first program to add two numbers \n";
	int a = 20;
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
