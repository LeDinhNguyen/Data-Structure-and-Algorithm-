#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int arr[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {

            if (arr[i] < arr[min_idx])
                min_idx = i;
        }

        swap(&arr[min_idx], &arr[step]);
    }
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 10, 5, 6, 3, 7, 8, 4};
    SelectionSort(arr, 9);

    return 0;
}
