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

int main()
{
	int arr[5];
	Init(arr, 5);
	Print(arr, 5);
	
}