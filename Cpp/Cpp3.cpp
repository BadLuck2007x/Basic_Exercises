#include <iostream>
#include <cstdio>
using namespace std;



int main() {
    const string words[] = {"one","two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int x,y;
    cin >> x;
    cin >> y;
    for(int i =x;i<=y;i++){
        if ( i>=1 && i<=9 )
        {
           cout << words[i-1]<<endl;
        }
    }
    for (int i =x;i<=y;i++)
    {
        if(i>9){
            if(i%2){
                cout<<"odd"<<endl;
            }else cout<<"even"<<endl;
        }
    }
    
     
    return 0;
}