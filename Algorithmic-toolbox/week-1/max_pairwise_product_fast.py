def maxPairwiseProductFast(numbers):
    n = len(numbers)


    max_index1 = -1

    for i in range(0,n):
        if max_index1 == -1 or numbers[i] > numbers[max_index1]:
            max_index1 = i


    max_index2 = -1
    for j in range(0,n):
        if j != max_index1 and (max_index2 == -1 or numbers[j] > numbers[max_index2]):
            max_index2 = j
    
    print("highest pairs are: {},{}".format(numbers[max_index1],numbers[max_index2]))

    return numbers[max_index1] * numbers[max_index2]                


num = int(input())

mylist = []

for i in range(0,num):
    mylist.append(int(input()))

print(maxPairwiseProductFast(mylist))    