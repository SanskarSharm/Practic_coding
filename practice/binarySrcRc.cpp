#include<iostream>
using namespace std;
void print (int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySrc(int arr[],int s,int e,int k){
    print(arr,s,e);
    cout<<endl;
    if(s>e){
        return false;
    }
    int mid = s +(e-s)/2;
    cout<<"mid value after: "<<arr[mid]<<endl;
    if(arr[mid]==k){
        return true;
    }
    
    if(arr[mid]<k){
        return binarySrc(arr,mid+1,e,k);
    }
    else{
        return binarySrc(arr,s,mid-1,k);
    }

}

int main(){
    int n,k;
    cin>>n>>k;
    int s=0;
    int e=n-1;

    int *arr  = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    bool ans= binarySrc(arr,s,e,k);
    if(ans){
        cout<<"present";
    }
    else{
        cout<<"Not present";
    }


}