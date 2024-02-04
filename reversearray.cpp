#include<iostream>
using namespace std;
void reversearray(int arr[] , int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    int array[] = {1,2,3,4,5,6};
    reversearray(array,6);
    cout<<"print  reversed array"<<endl;
    for(int i=0; i<6;i++){
        cout<<array[i]<<" ";
    }
}