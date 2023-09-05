#include<iostream>
using namespace std;
void Init(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}
}
void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Reverse(int arr[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int main()
{
	int arr[5];
	Init(arr, 5);
	Print(arr, 5);
	Reverse(arr, 5);

	double arr2[5];
	Init((int*)arr2, 5);
	Print((int*)arr2, 5);
	
}