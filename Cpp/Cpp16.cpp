#include <iostream>
using namespace std;

/*
Input (stdin)
5
2 3 4 5
4
5
4
2 4 6 7
Expected Output
3 4 5
60
3 4 5
60
4 6 7


1 -> Print current box
2 -> l b h	Create a new box with dimensions (l, b, h)
3 -> l b h	Compare a new box (l, b, h) with current box
4 -> Print volume of current box
5 -> Print a copy of current box

*/


class Box {
private:
    int l, b, h;
public:
    Box() : l(0), b(0), h(0) {}
    Box(int L, int B, int H) : l(L), b(B), h(H) {}
    Box(const Box& B) : l(B.l), b(B.b), h(B.h) {}

    int getLength() const { return l; }
    int getBreadth() const { return b; }
    int getHeight() const { return h; }
    long long CalculateVolume() const { return (long long)l*b*h; }

    bool operator<(const Box& B) const {
        if(l < B.l) return true;
        if(l == B.l && b < B.b) return true;
        if(l == B.l && b == B.b && h < B.h) return true;
        return false;
    }
};

ostream& operator<<(ostream& out, const Box& B) {
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}



void check2() {
    int n;
    cin >> n;

    Box temp;

    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            cout << temp << endl;
        }
        else if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout<<temp<<endl;
        }
        else if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);

            if (NewBox < temp)
                cout << "Lesser"<<endl ;
            else
                cout << "Greater"<<endl ;
        }
        else if (type == 4) {
            cout << temp.CalculateVolume() << endl;
        }
        else if (type == 5) {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}





int main(){
    check2();
    return 0;
}
