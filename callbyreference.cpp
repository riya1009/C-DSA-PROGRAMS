#include<iostream>
using namespace std;
void swappointer(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapreferencevar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 4 , y = 5;
    cout << " the value of x and y before swapping is : " << x << y << endl;
    //swappointer(&x , &y);
    swapreferencevar(x,y);
    cout << " the value of x and y after swapping is : " << x << y << endl;
    return 0;
}