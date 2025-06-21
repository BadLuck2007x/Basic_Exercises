#  7. Input a number and check if the number is a prime or composite number.


def Is_prime(num):
    if num<=1:
        return 0
    else:
        for i in range(2,num):
            if num%i==0:
                return False
        return True

num=int(input("Enter the number: "))
match Is_prime(num):
    case 0:
        print("The number is not Prime or Composite")
    case True:
        print("The number is Prime ")
    case False:
        print("The number is Composite ")
    case _:
        print("Something is went wrong")
