#include<iostream>
using namespace std;
void swap(int a, int b){
    cout << a;
    cout << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << a ;
    cout << b << endl;
}
int main(){
    int a = 4 , b = 5;
    cout << " the value of a and b before swapping are :" << a << b << endl;
    swap(a,b);
    cout << " the value of a and b after swapping are :"<< a << b << endl;
    return 0;
}
