# 10.  Count and display the number of vowels, consonants, uppercase, lowercase characters in string.

def Count_Alpha(string):
    vowels = "AEIOUaeiou"
    items = {
        "vowels": 0,
        "consonants": 0,
        "uppercase": 0,
        "lowercase": 0,
    }

    for ch in string:
        if ch.isalpha():
            if ch in vowels:
                items["vowels"] += 1
            else:
                items["consonants"] += 1
            if ch.isupper():
                items["uppercase"] += 1
            elif ch.islower():
                items["lowercase"] += 1

    return items

String = input("Enter the String: ")
if String:
    result = Count_Alpha(String)
    print("The number of Vowels is:", result["vowels"])
    print("The number of Consonants is:", result["consonants"])
    print("The number of Uppercase characters is:", result["uppercase"])
    print("The number of Lowercase characters is:", result["lowercase"])