#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
	int i, j, min;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[min])
			{
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	}
}
void display(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " " ;
	}
}
int main()
{
	int arr[5];
	cout << "Enter The Values of Array" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionsort(arr, n);
	display(arr, n);
	system("pause");
	return 0;
}
