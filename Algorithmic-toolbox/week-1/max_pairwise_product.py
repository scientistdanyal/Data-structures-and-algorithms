def MaxPairWiseProduct(numbers):
    results = 0
    n = len(numbers)
    for i in range(0,n):
        for j in range(i+1,n):
            if numbers[i] * numbers[j] > results:
                results = numbers[i] * numbers[j]

    return results




numList = []
num = int(input("Enter length of list: "))
for i in range(0,num):
    numList.append((int)(input()))

print(MaxPairWiseProduct(numList))