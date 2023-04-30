#include<iostream>
using namespace std;

int minIndex(int *arr,int i,int j){
    if(i==j){
        return i;
    }
    int k= minIndex(arr,i+1,j);
    return (arr[i]<arr[k])?i:k;
}

void slectionSort(int *arr,int n,int index=0){
    if(n==index){
        return ;
    }
    int k = minIndex(arr,index,n-1);
    if(k!= index){
        swap(arr[k],arr[index]);
    }
    return  slectionSort(arr,n,index+1);
}

int main(){
    int n;
    cout<<"Enter Array size: ";
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    slectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


