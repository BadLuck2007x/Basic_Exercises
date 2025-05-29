# # #  10.  Count and display the number of vowels, consonants, uppercase, lowercase characters in string.


def Count_Alpha(string):
    Str=str(string).split()
    vowels = ["A","E","I","O","U"]
    items={
        "vowels":0,
        "consonants":0,
        "uppercase":0,
        "lowercase":0,
    }
    for i in Str:
        for j in i:
            if(j.islower()):
                items["lowercase"]+=1
            if(j.isupper()):
                items["uppercase"]+=1
            if(j.isdigit):
                if(j.upper()==(i for i in vowels)):
                    items["vowels"]+=1
                else:
                    items["consonants"]+=1
    return items
String=input("Enter the String: ")
if String:
    reasult=Count_Alpha(String)
    print("The number of Vowels is:",reasult["vowels"])
    print("The number of Consonants is:",reasult["consonants"])
    print("The number of Uppercase characters  is:",reasult["vowels"])
    print("The number of Lowercase characters is:",reasult["vowels"])

