#  6. Determine whether a number is a perfect number, an Armstrong number or a palindrome.


def Is_Perfect(num):
    if num<1:
        return False
    else:
        sum=0
        for i in range(1,num):
            if num%i==0:
                sum+=i
        return sum==num
    
def Is_Armstrong(num):
    digits=[int(d) for d in str(num)]
    power=len(digits)
    return sum(((digit**power) for digit in digits))==num
    pass

def Is_Palindrome(num):
    Str1=str(num)
    Str2=Str1
    length=len(Str1)
    for i in range(0,length):
        if Str1[length-i-1]!=Str2[i]:
            return False
    return True



num=int(input("Enter the number: "))
if(num):
    is_Palindrome = Is_Palindrome(num)
    is_Armstrong = Is_Armstrong(num)
    is_Perfect = Is_Perfect(num)
    if(is_Palindrome and is_Armstrong and is_Perfect):
        print("The Number is a perfect number, an Armstrong number and a palindrome number")
    elif(is_Palindrome or is_Armstrong or is_Perfect):
        if(is_Palindrome and is_Armstrong):
            print("The Number is an Armstrong number and a palindrome number")
        elif(is_Palindrome and is_Perfect):
            print("The Number is an Palindrome number and a Perfect number")
        elif(is_Armstrong and is_Perfect):
            print("The Number is an Armstrong number and a Perfect number")
        elif(is_Palindrome):
            print("The Number is a palindrome number")
        elif(is_Armstrong):
            print("The Number is an Amstrong number")
        elif(is_Perfect):
            print("The Number is a perfect number")
    else:
        print("The Number is not a perfect number or an Armstrong number or a palindrome number")
