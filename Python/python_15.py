#   15.Create a dictionary with the roll number, name and marks of n students in a class and display the names of students who have marks above 75.

Students={ }
Subjects=["Bengali","English","Math","Physics","Chemistry","Computer Science"]

data=int(input("Enter the number of Student: "))
for _ in range(data):
    id=input("Enter the id of Student(Type (-1) for exit): ")
    if id=="-1":
        exit()
    name=input("Enter the Name of Student: ")
    clas=input("Enter the clas of Student: ")
    roll=input("Enter the roll of Student: ")
    Students[id]={"name":name,"class":clas,"Roll":roll,"subjects":{}}
    for i in Subjects:
        Students[id]["subjects"][f"{i}"]=int(input(f"Enter the {i} Subject marks: "))

for i,j in Students.items():
    print("id:",i)
    for key,value in Students[i].items():
        if key=="subjects":
            for sub,marks in Students[i]["subjects"].items():
                print(f"{sub}:",marks)
        else:
            print(f"{key}:",value)
