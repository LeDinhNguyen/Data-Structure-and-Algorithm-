def SelectionSort(array: list):
    size = len(array)
    for step in range(size):
        min_index = step
        for i in range(step+1, size):
            if (array[min_index] > array[i]):
                min_index = i
            array[min_index], array[step] = array[step], array[min_index]


data = [-2, 45, 0, 11, -9]
SelectionSort(data)
print(data)
