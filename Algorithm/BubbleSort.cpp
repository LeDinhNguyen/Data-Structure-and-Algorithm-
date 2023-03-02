#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int step = 0; step < size; step++)
    {
        for (int i = 0; i < size - step; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int size = 5;
    int arr[size] = {5, 1, 4, 2, 8};
    BubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}