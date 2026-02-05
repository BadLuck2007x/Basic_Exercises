# 3. Input three numbers and display the largest / smallest number.

def Ans(a,b):
    print(f"The larger number:{a}\nThe smaller number is:{b}")

num1=int(input("Enter first number: "))
num2=int(input("Enter second number: "))
num3=int(input("Enter third number: "))


if(num1==num2==num3):
    print("The numbers are same")
elif(num1>num2)and (num1>num3):
    if num2>num3:
        Ans(num1,num3)
    else:
        Ans(num1,num2)
elif(num2>num1)and (num2>num3):
    if num1>num3:
        Ans(num2,num3)
    else:
        Ans(num2,num1)
else:
    if num1>num2:
        Ans(num3,num2)
    else:
        Ans(num3,num1)