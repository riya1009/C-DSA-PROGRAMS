#include<iostream>
using namespace std;
int twosum(int arr[],int target){
    
    
    for(int i =0 ; i<5 ; i++ ){
        int temp = arr[i];
        for(int j = i+1;j<5;j++){
            int sum = temp+arr[j];
            if(sum==target){
                    return (i,j);
            }
        }
    }
}
int main(){
    int array[5]={1,2,3,4,5};
    int tar=5;
    int z = twosum(array,5);
    cout<<z;
}
