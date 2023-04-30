#include<iostream>
using namespace std;

void insertionSort(int *arr, int n){
    int temp;
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    n=n-1;
    insertionSort(arr,n);
}

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the Array: ";

    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    cout<<"Sorted arr is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}