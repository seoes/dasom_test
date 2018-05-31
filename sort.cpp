#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j >= 0; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				swap(arr[j - 1], arr[j]);

			}
			else 
			{
				continue;
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,4,2,6,1,3,5 };
	int size = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "";
	}
	cout << endl;
	return 0;
}