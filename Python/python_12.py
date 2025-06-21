#  12. Find the largest/smallest number in a list/tuple.


numbers=input("Enter the list numbers(use wide space for insert next element): ").split()
for i,j in enumerate(numbers):
    numbers[i]=int(j)
numbers.sort()
print(f"The Max value is:{numbers[len(numbers)-1]}")
print(f"The Min value is:{numbers[0]}")
