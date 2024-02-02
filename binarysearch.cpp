#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start - (start-end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid +1;
        }
        mid = start - (start-end)/2;
    }
    return -1;
}
int main(){
    int array[5]={1,2,3,4,5};
    int array1[6]={1,2,3,4,5,6};
    int key1 = 4;
    int key2 = 7;
    int found1 = binarySearch(array,5,key1);
    int found2 = binarySearch(array1,6,key1);
    int found3 = binarySearch(array,5,key2);
    int found4 = binarySearch(array1,6,key2);
    cout<<found1<<" "<<found2<<" "<< found3<<" "<<found4;


}