# include<iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 3;
    int c = a&b;
    int d = a|b;
    int e = ~a;
    int f = a^b;
    cout << c << " "<< d << " "<< e << " "<< f << endl ;
    cout << (a >> 1) << endl ;
    cout << (a<<1) << endl ;

}