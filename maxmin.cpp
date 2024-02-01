#include<iostream>
#include<climits>
using namespace std;
void printArray(int arr[],int size){
    for(int i = 0 ; i <size ; i++){
        cout<<arr[i]<<" ";
    }
}
int minElement(int arr[], int size){
    int mini = INT_MAX;
    for(int i= 0 ; i<size; i++){
        mini = min(arr[i], mini);
    }
    return mini;
    
}
int maxElement(int arr[], int size){
    int maxi = INT_MIN;
    for(int i= 0 ; i<size; i++){
        maxi = max(arr[i], maxi);
    }
    return maxi;
    
}


int main(){
    int array[100];
    int count;
    int minimum;
    int maximum;
    cout<<"enter count";
    cin>>count;
    cout<<"enter elements of array";
    for(int i = 0 ; i<count ; i++){
        cin>>array[i];
    }
    printArray(array,count);
    cout<<endl;
    minimum = minElement(array,count);
    maximum = maxElement(array,count);  
    cout<<minimum<<endl;
    cout<<maximum<<endl;  

}