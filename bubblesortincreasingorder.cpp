#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    for(int i = 1; i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int array[5] = {5 ,2 ,6,3,8};
    bubbleSort(array,5);
    printArray(array,5);
}