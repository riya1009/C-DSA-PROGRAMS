#include<iostream>
using namespace std;
int main(){
    int arr[3]={3,0,1};
    int length = 3;
    int ans = arr[0];
    for(int i =1;i<length;i++){
        ans = ans^arr[i];
    }
    for(int i=0; i<4 ;i++)
        ans = ans^i;
    cout<<ans;
}