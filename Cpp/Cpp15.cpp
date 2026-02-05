#include<iostream>
using namespace std;

class students{
    private:
        int size=0,sub;
        int** data;

    public:
        students(int n,int subjects=5){
            sub = subjects;
            size = n;
            data = new int*[size];
            for (int i = 0; i < size; i++) {
                 data[i] = new int[sub]; 
            }
        }
        ~students(){
            for (int i = 0; i < size; i++) {
                delete data[i];
            }
            delete[] data;
        }

        void getMarks(){
            for (int i = 0; i < size; i++) {
                for(int j = 0; j < sub; j++){
                    cin>>data[i][j];
                }
            }
        }
        int calc(){
            int sum=0,Kristen=0,count=0;
            for (int i = 0; i < size; i++) {
                for(int j = 0; j < sub; j++){
                    sum+=data[i][j];
                }
                if(i==0) Kristen=sum;
                else if(Kristen<sum) count++;
                sum=0;
            }
            return count;
        }
};


int main(){
    int size;
    cin>>size;
    students s(size);
    s.getMarks();
    cout<<s.calc();
    return 0;
}