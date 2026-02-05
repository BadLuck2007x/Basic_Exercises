#include<iostream>
#include<string>
using namespace std;


/*
Sample Input
23,4,56
Sample Output
23
4
56
*/
void split(string input,const char ele){
    
    string temp="";
    for(char i:input){
        if((i!=ele)&&(i!=' ')) temp=temp+i;
        else if((i==ele)&&(i!=' ')) {
            cout<<temp<<endl;
            temp="";
        }
    }
    cout<<temp;
}


int main(){
    string input;
    int count=0;
    cin>>input;
    split(input,',');
    return 0;
}