#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int Partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1); 
 
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = Partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
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

    QuickSort(arr, 0, size-1);

	cout<<"Sorted array: \n";
	printArray(arr, size);

	return 0;
}