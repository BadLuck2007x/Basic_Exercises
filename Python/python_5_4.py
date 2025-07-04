# 5. Write a program to input the value of x and n and print the sum of the following series:
# 4) x+(x^2)/2! +(x^3)/3! +(x^4)/4! +...+(x^n)/n!
from math import factorial as fact


x=int(input("Enter the value of x:"))
n=int(input("Enter the value of n:"))

if (not x<1):
    sum=0
    for i in range(1,n+1):
        sum+=((x**i)/fact(i))
    print(sum)
else:
    print("Something went wrong")