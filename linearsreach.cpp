#include<iostream>
using namespace std;
int linearSearch(int arr[], int size , int key){
    for(int i = 0;i<size;i++){
        if(arr[i] == key){
            cout<<"element found at index:"<<i<<endl;
            return 1;
        }
    }
    return 0;
    
}
int main(){
    int array[5]={1,2,3,4,5};
    int key1 = 5;
    int key2 = 6;
    bool found1 = linearSearch(array,5,key1);
    bool found2 = linearSearch(array,5,key2);
    cout<<found1<<endl;
    cout<<found2<<endl;


}
