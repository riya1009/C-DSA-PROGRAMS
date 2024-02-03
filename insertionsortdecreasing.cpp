#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){                                             // using for loop
    for(int i = 1;i <size ; i++){
        int temp = arr[i];
        int j = i-1;
        for( ; j>=0 ; j--){
            if(arr[j]<temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array[5]={4,2,8,1,0};
    insertionSort(array,5);
    printArray(array,5);
}