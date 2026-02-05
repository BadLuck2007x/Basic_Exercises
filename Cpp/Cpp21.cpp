#include<iostream>
using namespace std;

class Sort{
    private:
        int length=0;
        void swap(int* a,int* b){
            int temp = *a;
            *a = *b;
            *b = temp;
        }

    public:
        Sort(int length=0){
            this->length=length;
        }

        void print(int* array){
            for(int i=0;i<length;i++){
                cout<<array[i]<<" ";
            }
            cout<<endl;
        }

        void SelectionSort(int* array){
            int minIndex;
            for(int i=0;i<(length-1);i++){
                minIndex=i;
                for(int j=i+1;j<length;j++){
                    if( array[minIndex]>array[j] ){
                        minIndex=j;
                    }
                }
                swap(&array[i],&array[minIndex]);
            }
        }

        void BubbleSort(int* array){
            for(int i=length-1;i>=0;i--){
                for(int j=0;j<i;j++){
                    if(array[j]>array[j+1]){
                        swap(&array[j],&array[j+1]);
                    }
                }
            }
        }

        void InsertionSort(int* array){
            int index = 0, j=0,i=1;
            for(i = 1;i<length;i++){
                index = i;
                for(j=i-1;j>=0;j--){
                    if(array[index]< array[j]){
                        swap(&array[index],&array[j]);
                        index=j;
                    }
                }
            }
        }

        void QuickSort(int* array,int size){
            if(size<2){
                return;
            }
            int *pivot= &array[size-1],*j,*k;
            int incriment=-1;
            for(int  i=0;i<size-1;i++){
                k=&array[i];
                if(*k <= *pivot){
                    incriment++;
                    j =&array[incriment];
                    swap(j,k);
                }
            }
        
            QuickSort(array,incriment);
            QuickSort(array,size-incriment);
        }

};



int main(){
    int array[] = {56,3,656,123,7,34,50},length=0;
    length =sizeof(array)/sizeof(array[0]);
    Sort data(length);
    // data.BubbleSort(array);
    // data.SelectionSort(array);
    data.QuickSort(array,length);
    data.print(array);
    return 0;
}