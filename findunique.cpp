#include<iostream>
using namespace std;
int findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int array[5]={1,2,3,1,3};
    int unique = findUnique(array,5);
    cout<<"unique element in the array is:"<<unique;
}