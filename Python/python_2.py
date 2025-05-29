# 2. Input two numbers and display the larger / smaller number.

num1=int(input("Enter first number: "))
num2=int(input("Enter second number: "))

if(num1==num2):
    print("Both numbers are same")
else:
    print(f"The larger number:{max(num1,num2)}\nThe smaller number is:{min(num1,num2)}")
