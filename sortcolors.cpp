#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,0,2,1,1,0};
    int length=6;
    int start=0,end=length-1,current=0;
    while (start<end){
        while(arr[start]==0){
            start++;
        }
        while(arr[end]==2){
            end--;
        }
    }
    for(int i = 0 ; i<length ; i++){
        cout<<arr[i];
    }
}