#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int k = 0;
    int i = left;
    int j = mid + 1;
    int temp[right - left + 1];

    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[i - left];
    }
}

void MergeSort(int arr[], int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main()
{
    int size = 5;
    int arr[] = {5, 1, 4, 2, 8};
    MergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}