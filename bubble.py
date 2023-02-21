def bubble_sort(array):

    for i in range(len(array)):
        for j in range(len(array) - i):
            if array[j] > array[j + 1]:
                