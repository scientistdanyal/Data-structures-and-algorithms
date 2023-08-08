def fib(n):
    mylist = [0,1]
    for i in range(2,n):
        num = mylist[i-1] + mylist[i-2]
        mylist.append(num)

    return mylist



print(fib(10))