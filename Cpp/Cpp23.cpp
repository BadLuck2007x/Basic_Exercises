#include<iostream>
#define len 10
using namespace std;



class HashTable{
    private:
        int length=0;
        int* array=nullptr;

    public:
        HashTable(int size){
            length = size;
            array = new int[size];
        }

        int hashf(int value){
            return value%length;
        }

        void insert(int value){
            int index =hashf(value);
            array[index]=value;
        }


        void display(){
            int i=0,j=0;
            for(i;i<length;i++){
                cout<<i<<"->"<<array[i]<<endl;
            }
        }

        bool replace(int old_value,int new_value){
            int index = hashf(old_value);
            int new_index =hashf(new_value);
            if(index == new_index){
                array[index] = new_value;
                return true;
            }
            return false;
        }
        
        void del(int value){
            int index= hashf(value);
            array[index]=0;
        }

};


int  main(){
    HashTable h(3);
    h.insert(67);
    h.insert(21);
    h.insert(23);
    h.del(23);
    h.replace(21,24);
    h.display();
    return 0;
}