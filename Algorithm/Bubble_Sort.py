def BubbleSort(array: list):
    size = len(array)
    for _ in range(size):
        for i in range(size-1):
            if array[i] > array[i+1]:
                array[i], array[i+1] = array[i+1], array[i]


data = [-2, 45, 0, 11, -9]
BubbleSort(data)
print(data)
