#   11. Input a string and determine whether it is a palindrome or not; convert the case of characters in a string.


def isPalindrome(Str):
    try:
        if(len(Str)<2):
            return False
        else:
            newStr=Str[::-1]
            if newStr==Str:
                return True
            else:
                return False
    except Exception as e:
        print(f"The problem is:{e}")
    finally:
        print(f"The case converted String is: {Str.swapcase()}")
        pass



Input = input("Enter the String: ")
result=isPalindrome(Input)
if result:
    print("The String is palindrome")
else:
    print("The String is not palindrome")

