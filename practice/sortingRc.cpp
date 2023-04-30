#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==1||size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool ans = isSorted(arr+1,size-1);
    return ans;
}
int main(){
    int arr[5] = {2,4,6,8,10};
    int size=5;

    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}