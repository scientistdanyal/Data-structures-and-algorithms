def insertion_sort(number):
    n = len(number)

    for i in range(1,n):
        key = number[i]
        j = i - 1
        while j>=0 and number[j] < key:
            number[j+1] = number[j]
            j -=1
        number[j+1] = key
    return number    

numbers = [2, 4, 1, 3, 2, 6, 2]
print(insertion_sort(numbers))

