#include <iostream>
using namespace std;

int partition(int arr[], int a, int b)
{

    int pivot = arr[a];

    int count = 0;
    for (int i = a + 1; i <= b; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = a + count;
    swap(arr[pivotIndex], arr[a]);

    int i = a, j = b;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int a, int b)
{

    if (a >= b)
    {
        return;
    }

    int p = partition(arr, a, b);
    quickSort(arr, a, p - 1);
    quickSort(arr, p + 1, b);
}

int main()
{
    int arr[] = {3, 5 ,1 ,4 ,2};
    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
