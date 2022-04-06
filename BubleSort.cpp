#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int size)
{
	int i, j;
	for (i = 0; i < size-1; i++)	
	    for (j = 0; j < size-i-1; j++)
		    if (arr[j] > arr[j+1])
			    swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
    int size;
    cout << "Enter array lenght \n";
    cin >> size;

	int arr[size];
    for (int i = 0; i < size; i++)
        arr[i] = rand();
    
    cout<<"Unsorted array: \n";
    printArray(arr, size);

	bubbleSort(arr, size);

	cout<<"Sorted array: \n";
	printArray(arr, size);

	return 0;
}
