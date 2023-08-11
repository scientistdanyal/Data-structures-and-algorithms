def insertion_sort(numbers):
    n = len(numbers)
    for i in range(1, n):  # Start from the second element (index 1)
        key = numbers[i]
        j = i - 1
        while j >= 0 and numbers[j] > key:  # Change number[i] to numbers[j]
            numbers[j + 1] = numbers[j]
            j = j - 1
        numbers[j + 1] = key

    return numbers

numbers = [2, 4, 1, 3, 2, 6, 2]
print(insertion_sort(numbers))
