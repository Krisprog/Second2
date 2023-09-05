#include<iostream>
using namespace std;

void Print(string str)
{
	cout << str << endl;
}

int Sum(int a, int b)
{
	return a + b;
}

int main()
{
	Print("Hello World");

	cout << Sum(10, 20)<<endl;
}