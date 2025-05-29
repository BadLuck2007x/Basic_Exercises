# 3. Input three numbers and display the largest / smallest number.



num1=int(input("Enter first number: "))
num2=int(input("Enter second number: "))
num3=int(input("Enter third number: "))

if(num1==num2==num3):
    print("The numbers are same")
else:
    print(f"The larger number:{max(num1,num2,num3)}\nThe smaller number is:{min(num1,num2,num3)}")