def runnerUp(arr):
    max_index1 = -1 
    n = len(arr)
    for i in range(0,n):
        if max_index1 == -1 or arr[i] > arr[max_index1]:
           max_index1 = i
    max_index2 = -1       
    for j in range(0,n):
        if (j != max_index1 and arr[max_index1] != arr[max_index2]) and (max_index2 == -1 or arr[i] > arr[max_index2]):
            max_index2 = j
    
    return arr[max_index2] 



if __name__ == '__main__':
    arr = list(map(int, input().split()))
    print(runnerUp(arr)) 