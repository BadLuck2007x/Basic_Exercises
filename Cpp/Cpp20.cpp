#include<iostream>
using namespace std;

class Queue{
    private:
        int length=0,capacity=0;
        int* Q=nullptr;
    public:
        Queue(int capacity){
            Q = new int[capacity];
            for(int i=0;i<capacity;i++){
                Q[i]=0;
            }
            this-> capacity = capacity;
        }
        ~Queue(){
            delete Q;
        }
        void enqueue(int ele){
            if(length>=capacity) return;
            else{
                Q[length]=ele;
                length++;
            }
        }
        void dequeue(){
            if(length<=0) return;
            else{
                for(int i=0;i<length-1;i++){
                    Q[i]=Q[i+1];
                }
                Q[length-1]=0;
                length--;
            }
        }
        void show(){
            for(int i=0;i<capacity;i++){
                cout<<Q[i]<<" ";
            }
            cout<<endl;
        }
        int peek(){
            return Q[0];
        }
        bool isEmpty(){
            return (length<=0);
        }
        int size(){
            return length;
        }
};

int main(){
    Queue q(4);
    q.enqueue(4);
    q.enqueue(34);
    q.show();
    q.dequeue();
    q.show();
    cout<<q.peek()<<" "<<q.size()<<" "<<q.isEmpty();
    return 0;
}