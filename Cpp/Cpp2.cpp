#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string spelling(int n){;
    string word;
    switch (n)
    {
    case 1:
        word="one";
        break;
    case 2:
        word="two";
        break;
    case 3:
        word="three";
        break;
    case 4:
        word="four";
        break;
    case 5:
        word="five";
        break;
    case 6:
        word="six";
        break;
    case 7:
        word="seven";
        break;
    case 8:
        word="eight";
        break;
    default:
        word="nine";
        break;
    }
    
    return word;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    if (n<=9 && n>=1){
        string word =  spelling(n);
        cout<<word;
    }else if(n<1){
        cout<<"Less then 1";
    }else{
        cout<<"Greater than 9";
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
