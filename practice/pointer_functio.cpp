#include<iostream>
using namespace std;

// void print(int *p){
//     cout<<*p<<endl;
// }

// void update(int *p){
//     // p=p+1;
//     // cout<<"inside: "<<p<<endl;
//     *p = *p+1;
// }

// int main(){
//     int i;
//     cin>>i;
//     int *p=&i;
//     cout<<"before: "<<*p<<endl;
//     update(p);
//     cout<<"after: "<<*p<<endl;
//     print(p);
//     return 0;
// }

int getSum(int arr[],int n){//arr[]= *arr hi h

    cout<<"Size is: "<<sizeof(arr)<<endl;//pinter ki size hi print hogi
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;
}

int main(){

    int n;
    cout<<"Enter the size of arr: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter element: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size;
    cout<<"size of update arr: "<<endl;
    cin>>size;
    int ans =getSum(arr+3,size);
    cout<<"Sum is: "<<ans<<endl;
}