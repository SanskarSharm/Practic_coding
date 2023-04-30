#include<iostream>
using namespace std;
int main(){
    // int arr[10]={5,6,7,9,12};
    // cout<<"first index address is: "<<arr<<endl;//first index address hmesa uskaa arr hi hoga
    // cout<<"first index address is: "<<&arr[0]<<endl;
    // cout<<"0th location or /*arr is: "<<*arr<<endl;
    // cout<<"1 location valur is: "<<*(arr+1)<<endl;
    // int i=3;
    // cout<<"i[arr]=*(i+arr) formula se: "<<i[arr]<<endl;
    int arr[10];
    int *p=&arr[0];
    cout<<"before: "<<p<<endl;
    p=p+1;
    cout<<"after: "<<p<<endl;
    cout<<"size of arr is : "<<sizeof(arr)<<endl;
    cout<<"size of pointer is: "<<sizeof(*p)<<endl;
    cout<<"size of p is: "<<sizeof(p)<<endl;

}