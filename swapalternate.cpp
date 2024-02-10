#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    for(int i=0;i+1<size&&i<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int array[6]={1,2,3,4,5,6};
    swapAlternate(array,6);
    printArray(array,6);
}
