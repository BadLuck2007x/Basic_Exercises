# 5. Write a program to input the value of x and n and print the sum of the following series:
# 1) 1+x+(x^2)+(x^3)+...+(X^n)
# 2) 1+x+(x^2)+(x^3)+...+(X^n)
# 3) x+(x^2)/2 +(x^3)/3 +(x^4)/4+...+(x^n)/n
# 4) x+(x^2)/2! +(x^3)/3! +(x^4)/4! +...+(x^n)/n!


from math import factorial 

def Series_1(x,n):
    sum=1
    for i in range(1,n+1):
        sum+=(x**i)
    print(sum)

def Series_2(x,n):
    sum=1
    for i in range(1,n+1):
        if not(i%2):
            sum+=(x**i)
        else:
            sum-=(x**i)
    print(sum)

def Series_3(x,n):
    sum=0
    for i in range(1,n+1):
        sum+=((x**i)/i)
    print(sum)

def Series_4(x,n):
    sum=0
    for i in range(1,n+1):
        sum+=((x**i)/factorial(i))
    print(sum)

while True:
    print("\n0.for Exit")
    for i in range(1,5):
        print(f"{i}.for Series-{i}")

    choise=input("Enter your choise: ")
    if choise=="0":
        exit()
    x=int(input("Enter the value of x:"))
    n=int(input("Enter the value of n:"))

    if(n or x):
        match choise:
            case "1":
                Series_1(x,n)
            case "2":
                Series_2(x,n)
            case "3":
                Series_3(x,n)
            case "4":
                Series_4(x,n)
            case _:
                print("Invalid choise")

