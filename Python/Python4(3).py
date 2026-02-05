# 4. Generate the following patterns using nested  loops.

# Pattern-3  
# A  
# AB  
# ABC  
# ABCD  
# ABCDE 

def Pattern_3(n):
    for i in range(0,n):
        for j in range(0,n):
            if(i>=j):
                print(chr(65+j),end=" ")
        print("\n",end="")


n=int(input("Enter the number of lines: "))
if(n):
    Pattern_3(n)
elif (n<1) or not n.is_integer():
    print("Please enter a valid line number")