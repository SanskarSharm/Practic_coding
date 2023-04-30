#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool linearSrc(int arr[],int n,int k){
    print(arr,n);
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    return linearSrc(arr+1,n-1,k);
}

int main(){
    int n,k;
    cin>>n>>k;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool  ans=linearSrc(arr,n,k);
    //cout<<linearSrc(arr,n,k);
    if(ans){
        cout<<"Yes present here";
    }
    else{
        cout<<"Not present";
    }
}