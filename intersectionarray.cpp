#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> intersectionArray(vector<int> &arr1,vector<int> &arr2){
    int i =0 , j=0;
    vector<int> ans;
    while(i<arr1.size()&&j<arr2.size()){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]==arr2[j]){
            arr2[j]=INT_MIN;
            ans.push_back(arr1[i]);
            i++;
            j++;
            
        }
        else
        {
            j++;
        }
    }
    return ans;
}
int main(){
    int array1[5]={1,2,3,4,5};
    int array2[3]={1,2,3};
    int array[] = intersectionArray(array1,array2)
}