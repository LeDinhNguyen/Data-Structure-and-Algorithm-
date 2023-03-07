def InsertionSort(array: list):
    size = len(array)
    for step in range(1, size):
        key = array[step]
        j = step-1

        while j <= 0 & key > array[j]:
            array[j+1] = array[j]
            j = j-1
        array[j+1] = key
    print(array)


data = [-2, 45, 0, 11, -9]
InsertionSort(data)

