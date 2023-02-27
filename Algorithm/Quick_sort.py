'''
Lomuto
'''

'''
Hoare
'''


def LomutoPartition(array: list, left: int, right: int) -> int:
    # right = len - 1
    pivot = array[right]
    i = left - 1

    for j in range(left, right):
        if array[j] <= pivot:
            i += 1
            array[j], array[i] = array[i], array[j]

    i += 1
    array[i], array[right] = array[right], array[i]
    return i


def HoarePartition(array: list, left: int, right: int) -> int:
    # right = len - 1
    pivot = array[left]
    i = left
    j = right
    while True:
        while array[i] < pivot:
            i += 1
        while array[j] > pivot:
            j -= 1
        if i < j:
            array[i], array[j] = array[j], array[i]
        else:
            return j


def QuickSort(array: list, left: int, right):
    # right = len - 1
    if left >= right:
        return
    # pivot = LomutoPartition(array, left, right)
    pivot = HoarePartition(array, left, right)

    # Recursion
    QuickSort(array, left, pivot - 1)
    QuickSort(array, pivot + 1, right)


data = [-2, 45, 0, 11, -9]
QuickSort(data, 0, len(data) - 1)
print(data)
