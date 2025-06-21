#  9.  Compute the greatest common divisor and least common multiple of two integers.


num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))

a, b = num1, num2
while b != 0:
    a, b = b, a % b

gcd = a
lcm = (num1 * num2) // gcd
print("The GCD is:", gcd)
print("The LCM is:", lcm)