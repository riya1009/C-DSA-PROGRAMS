#include<iostream>
#include<climits>
using namespace std;
int maximum(int arr[], int size){
    int maxi= INT_MIN;
    for(int i = 0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
int minimum(int arr[], int size){
    int mini= INT_MAX;
    for(int i = 0;i<size;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    return mini;
}

int main(){
    int array[15];
    int maxim , minim;
    cout<<"enter array elements";
    for(int i = 0 ; i<15;i++){
        cin >> array[i];
    }
    cout<<"print array"<<endl;
    for(int i = 0 ; i<15;i++){
        cout << array[i];
    }
    maxim = maximum(array,15);
    minim = minimum(array,15);
    cout<<" maximum element of array"<<maxim<<endl;
    cout<<"minimum elelment of array"<< minim << endl;
}