#include<iostream>
using namespace std;


class LinkList{
   private:
      struct Node{
         int value;
         Node* next=nullptr;
         Node* prev=nullptr;
         Node(int v):value(v){};
      };
      Node* head=nullptr;
      Node* tail=nullptr;
      int length=0;

   public:
      void addFirst(int v){
            Node* node= new Node(v);
            if(head==nullptr){
               head =node ;
               tail =node ;
            }else{
               node->next = head ;
               head->prev = node;
               head = node ;
            }
            length++;
      }

      void addLast(int v){
         Node* node  = new Node(v);
         if(tail==nullptr){
            tail=node;
            head=node;
         }else{
            node->prev = tail;
            tail->next = node;  
            tail=node;
         }
         length++;
      }

      void pop(){
         Node* prev = tail->prev;
         delete tail;
         tail =prev;
      }

      Node* find(int index){
         if(index>=0){
            if(length<index) return nullptr;
            int i=0;
            Node* ptr =head;
            while(ptr!=nullptr){
               if(i==index) return ptr;
               i++;
               ptr=ptr->next;
            }
         }else {
            index = index*(-1);
            if(length<index) return nullptr;
            Node* ptr =tail;
            int i=1;
            while(ptr!=nullptr){
               if(i==index) return ptr;
               i++;
               ptr=ptr->prev;
            }
         }
      }
      
      bool pop(int index){
         Node* ptr = find(index);
         if(ptr== nullptr) return false;
         Node* next  =  ptr->next;
         Node* prev  = ptr-> prev;
         next->prev= prev;
         prev->next = next;
         return true;
      }

      void update(int index,int value){
         Node* ptr= find(index);
         ptr->value = value;
      }
   
      void show(){
         Node* ptr  = head ;
         while(ptr!=nullptr){
            cout<<ptr->value<<"<-->";
            ptr=ptr->next;
         }
         cout<<"NULL"<<endl;
      }

      void destroy(){
         
         while (head!=nullptr){
            Node* next = head->next;
            delete head;
            head =next;
         }
      }


      int size(){
         return length;
      }

      ~LinkList(){
      destroy();
      }
};



int main(){
   LinkList l;
   l.addFirst(34);
   l.addFirst(45);
   l.show();
   l.addLast(345);
   l.addLast(69);
   l.show();
   l.pop();
   l.show();
   l.update(0,23);
   l.show();
   
   return 0; 
}