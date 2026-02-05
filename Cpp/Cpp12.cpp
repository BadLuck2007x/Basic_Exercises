#include<iostream>
#include<string>
using namespace std;


class Student{
    private:
        int roll=0,marks=0;
        string name,surname;
        const char* seperat = ",";
    public:
        void setStudent(){
            cin>>roll;
            cin>>name;
            cin>>surname;
            cin>>marks;
        }
        string getStudent(){
            string o = "\n"+to_string(roll) +seperat+name+seperat+surname+ seperat+to_string(marks);
            return o;
        }
        string getPre(){
            return to_string(roll)+"\n"+name+seperat+surname+"\n"+to_string(marks)+"\n";
        }
        
};


int main(){
    Student s;
    s.setStudent();
    cout<<s.getPre();
    cout<<s.getStudent();
    return 0;
}