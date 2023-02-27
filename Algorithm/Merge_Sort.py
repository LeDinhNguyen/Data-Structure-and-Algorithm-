def MergeSort(array: list):
    if len(array) > 1:
        middle_position = len(array) // 2
        Left_subarray = array[:middle_position]
        Right_subarray = array[middle_position:]

        MergeSort(Left_subarray)
        MergeSort(Right_subarray)

        i = j = k = 0

        while i < len(Left_subarray) and j < len(Right_subarray):
            if Left_subarray[i] < Right_subarray[j]:
                array[k] = Left_subarray[i]
                i += 1
            else:
                array[k] = Right_subarray[j]
                j += 1
            k += 1

        while i < len(Left_subarray):
            array[k] = Left_subarray[i]
            k += 1
            i += 1
        while j < len(Right_subarray):
            array[k] = Right_subarray[j]
            k += 1
            j += 1


data = [-2, 45, 0, 11, -9]
MergeSort(data)
print(data)


