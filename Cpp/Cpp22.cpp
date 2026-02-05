#include<iostream>
using namespace std;

class Search{
    private:
        int length=0;
    public:
        Search(int length=0){
            this->length=length;
        }
        
        void print(int* array){
            for(int i=0;i<length;i++){
                cout<<array[i]<<" ";
            }
        }

        int LinearSearch(int* array,int ele){
            int i=0;
            for(i;i<length;i++){
                if(array[i]==ele) return i;
            }
            return -1;
        }

        int BinarySearch(int* array,int ele){
            int left=0,right=length-1,mid=0;
            while(left<=right){
                mid=(right+left)/2;
                if(array[mid]==ele){
                    return mid;
                }else if(array[mid]>ele){
                    right=mid-1;
                }else{
                    left=mid+1;
                }
                if(mid==0 && right<0) break;
            }
            return -1;
        }

};



int main(){
    int array[] = {1,2,3,4,5,6,7,23,56,69,89,90},length=0;
    length =sizeof(array)/sizeof(array[0]);
    Search s(length);
    // cout<<sizeof(array)<<" "<<sizeof(array[0])<<" "<<length;
    cout<<s.BinarySearch(array,2);
    return 0;
}