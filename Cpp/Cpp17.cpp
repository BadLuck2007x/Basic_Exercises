#include<iostream>
#include<vector>
using namespace std;
/*LinkList CRUD oprations*/

class linkList{
    
    private:
        struct Node{
            int value;
            Node* next;
            Node(int v):value(v),next(nullptr){};
        };
        Node* head=nullptr;
        int length =0;
    public:
        linkList():head(nullptr){};
        void addFirst(int value ){
            Node* node = new Node(value);
            node->next = head;
            head=node;
            length++;
        }
        ~linkList(){
            clean();
        }

        int size(){
            return length;
        }

        Node* find(int value){
            Node* ptr =head;
            while(ptr!=nullptr){
                if(ptr->value ==value){
                    return ptr;
                }
                ptr=ptr->next;
            }
        }

        void replace(int value,int newValue){
            Node* node = find(value);
            node->value = newValue;
        }

        int* toArray(){
            Node* ptr =head ;
            int* array = new int[length];
            for(int i=0;i<length;i++){
                array[i] = ptr->value;
                ptr=ptr->next;
            } 
            return array;
        }

        void pop(){
            Node* ptr =head ;
            while(ptr->next!=nullptr){
                if(ptr->next->next == nullptr){
                    delete ptr-> next;
                    ptr->next =nullptr;
                    break;
                }
                ptr=ptr->next;
            };
        }

        void addLast(int value){
            Node* ptr =head ;
            while(ptr!=nullptr){
                if(ptr->next == nullptr){
                    Node* node  = new Node(value);
                    ptr->next = node;
                    break; 
                }
                ptr=ptr->next;
            };
        }


        void clean(){
            Node* ptr=head;
            while(ptr!=nullptr){
                Node* next= ptr->next;
                delete ptr;
                ptr = next;
            }
            length=0;
        }

        void display(){
            Node* ptr=head;
            while(ptr!=nullptr){
                cout<<ptr->value<<"->";
                ptr=ptr->next;
            }   
            cout<<"NULL"<<endl;     
        } 
};

int main(){
    linkList l;
    l.addFirst(3);
    l.addFirst(35);
    l.addFirst(356);
    l.display();
    l.addLast(3456);
    l.display();
    l.pop();
    l.display();
    l.replace(3,45);
    l.display();
    int* array = l.toArray();
    for(int i =0;i<l.size();i++){
        cout<<array[i]<<endl;
    }
    return 0;
}