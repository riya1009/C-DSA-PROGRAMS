#include<iostream>
using namespace std;
int main(){
    int i;
    int marks[] = {23,45,56,89};
    cout << marks[0] << endl;
    int mathMarks[5] ;
    cout << " enter the elements of array " << endl;
    for(i=0;i<5;i++)
    {
        cin >> mathMarks[i];
    }
    for(i=0;i<5;i++)
    {
        cout << mathMarks[i]<<endl;
    }
    return 0;
}
