#   13. Input a list of numbers and swap elements at the even location with the elements at the odd location.

def Swap(lst):
    try:
        print("Converting...")
        for i in range(len(lst)-1):
            lst[i+1],lst[1]=lst[1],lst[i+1]
        return lst
    finally:
        print("Conversition Successfull...")


Input=list(map(int,input("$:").split()))
Input=Swap(Input)
print("Reasult:",Input)