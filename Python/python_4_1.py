# 4. Generate the following patterns using nested  loops.
# Pattern-1      
# *  
# **  
# ***  
# ****  
# *****  


def Pattern_1(n):
    for i in range(1,n+1):
        print("*"*i)
        

n=int(input("Enter the number of lines: "))
if(n):
    Pattern_1(n)
elif (n<1) or not n.is_integer():
    print("Please enter a valid line number")