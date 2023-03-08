#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void InsertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        for (int i = 0; i < 9; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 10, 5, 6, 3, 7, 8, 4};
    InsertionSort(arr, 9);
    return 0;
}
