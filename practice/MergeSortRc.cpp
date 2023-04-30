#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = s+(e-s)/2;

    int len1 = mid-s+1;//left part length
    int len2 = e-mid;//right part length

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values in first & second  new array
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    //now merge two sorted array first & second
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]= first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
// check for along index1 and index2

        while(index1<len1){
            arr[mainArrayIndex++]= first[index1++];
        }
        while(index2<len2){
            arr[mainArrayIndex++]= second[index2++];
        }
    }



void mergeSort(int *arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    //left part sort 
    mergeSort(arr,s,mid);

    //right part sort
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e);

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

    mergeSort(arr,0,n-1);//merge(arr, statingIndex,lastIndex)

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}