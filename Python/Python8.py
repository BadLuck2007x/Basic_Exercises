#  8.  Display the terms of a Fibonacci series.

def Fibonacci(n):
    first=0
    second=1
    sum=0
    for _ in range(1,n+1):
        sum=first+second
        first=second
        second=sum
        print(sum,end="  ")

num =int(input("Enter the number of Fibonacci:"))
if num>1:
    Fibonacci(num)