#  14. Input a list/tuple of elements, search for a given element in the list/tuple.

numbers=input("Enter the list numbers(use wide space for insert next element): ").split()

search_item = input("Enter the element to search: ")

if search_item in map(str, elements):
    print(f"Element '{search_item}' found at index {list(map(str, elements)).index(search_item)}")
else:
    print(f"Element '{search_item}' not found.")