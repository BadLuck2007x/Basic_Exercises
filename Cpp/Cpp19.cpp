#include<iostream>

using namespace std;

class Stack{
    private:
        int length=0,capacity=0;
        int* head;
    public:
        Stack(int capacity){
            this->capacity = capacity;
            head = (new int[capacity]);
            for(int i=0;i<capacity;i++){
                head[i]=0;
            }
        }
        ~Stack(){
            delete head;
        }
        void push(int ele){
            if(length>capacity) return;
            else{
                head[length]=ele;
                length++;
            }
        }
        void pop(){
            if(length<=0) return;
            else{
                head[length-1]=0;
                length--;
            }
        }
        int peek(){
            return head[length-1];
        }
        int size(){
            return length;
        }
        bool isEmpty(){
            return (length>0);
        }

        void stackOut(){
            for(int i=0;i<capacity;i++){
                cout<<head[i]<<" ";
            }
            
        }


};

int main(){
    Stack g(5);
    g.push(45);
    g.push(5);
    g.push(4);
    // g.pop();
    // g.stackOut();
    cout<<g.peek()<<g.isEmpty();

   return 0;
}