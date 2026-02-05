# 4. Generate the following patterns using nested  loops.

# Pattern-2
# 12345  
# 1234  
# 123  
# 12  
# 1

        
def Pattern_2(n):
    for i in range(n,0,-1):
        for j in range(1,n+1):
            if(i>=j):
                print(j,end=" ")
        print("\n",end="")



n=int(input("Enter the number of lines: "))
if(n):
    Pattern_2(n)
elif (n<1) or not n.is_integer():
    print("Please enter a valid line number")