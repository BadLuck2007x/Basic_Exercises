#include<iostream>
#include<string>

using namespace std;


struct details{
    string name,surname ;
    int value,age;
};


int main(){
    details d;
    
    cin>>d.value;
    cin>>d.name;
    cin>>d.surname;
    cin>>d.age;
    cout<< to_string(d.value) +" "+d.name+" "+ d.surname+" "+ to_string(d.age);


    return 0;
}