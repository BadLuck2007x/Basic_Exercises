# 5. Write a program to input the value of x and n and print the sum of the following series:
# 2) 1+x+(x^2)+(x^3)+...+(X^n)


x=int(input("Enter the value of x:"))
n=int(input("Enter the value of n:"))

if (not x<1):
    sum=1
    for i in range(1,n+1):
        if not(i%2):
            sum+=(x**i)
        else:
            sum-=(x**i)
    print(sum)
else:
    print("Something went wrong")