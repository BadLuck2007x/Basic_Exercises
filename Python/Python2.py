# 2. Input two numbers and display the larger / smaller number.

num1=int(input("Enter first number: "))
num2=int(input("Enter second number: "))

if(num1==num2):
    print("Both numbers are same")
elif num1>num2:
    print(f"The larger number:{num1}\nThe smaller number is:{num2}")
else:
    print(f"The larger number:{num2}\nThe smaller number is:{num1}")