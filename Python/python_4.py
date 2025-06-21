# 4. Generate the following patterns using nested  loops.
# Pattern-1      
# *  
# **  
# ***  
# ****  
# *****  

# Pattern-2
# 12345  
# 1234  
# 123  
# 12  
# 1

# Pattern-3  
# A  
# AB  
# ABC  
# ABCD  
# ABCDE 

def Pattern_1(n):
    for i in range(1,n+1):
        print("*"*i)
        
def Pattern_2(n):
    for i in range(n,0,-1):
        for j in range(1,n+1):
            if(i>=j):
                print(j,end=" ")
        print("\n",end="")

def Pattern_3(n):
    for i in range(0,n):
        for j in range(0,n):
            if(i>=j):
                print(chr(65+j),end=" ")
        print("\n",end="")

while(True):
    print("\n1.For pattern-1\n2.For pattern-2\n3.For pattern-3\n4.For Exit")
    inp=input("Enter Which pattern do you want to print:")
    if inp==4:
        break
    n=int(input("Enter the number of lines: "))
    if(n):
        match inp:
            case "1":
                Pattern_1(n)
            case "2":
                Pattern_2(n)
            case "3":
                Pattern_3(n)
            case _:
                print("\n~~~Invalid choise~~~\n")
    elif (n<1) or not n.is_integer():
        print("Please enter a valid line number")