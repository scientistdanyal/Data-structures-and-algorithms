def fib(n):
    if n <= 1:
        return n
    else:
        return (fib(n-1) + fib(n-2))
    


for i in range(0,10):
    print("Fibonacci number is",i,"is:",fib(i),"\n")