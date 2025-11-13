#   13. Input a list of numbers and swap elements at the even location with the elements at the odd location.

def Swap(lst):
    print("Converting...")
    for i in range(len(lst)-1):
        lst[i+1],lst[1]=lst[1],lst[i+1]
    return lst


Input=list(map(int,input("Enter the list numbers(use wide space for insert next element): ").split()))
Input=Swap(Input)
print("Reasult:",Input)