#  14. Input a list/tuple of elements, search for a given element in the list/tuple.

numbers=input("Enter the list numbers(use wide space for insert next element): ").split()
item=input("Enter the search-able element: ")
print(f"The index of element is:{numbers.index(item)}")