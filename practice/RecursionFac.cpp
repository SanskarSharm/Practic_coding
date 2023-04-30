#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    //base case jaruri h nhi to segmentation fault aayega
    
    return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
}