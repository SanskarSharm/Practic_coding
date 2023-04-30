#include<iostream>
using namespace std;

void update(int &n){
    n++;
}

int main(){
    int n=5;
    cout<<"before updating: "<<n<<endl;
    update(n);
    cout<<"after updating: "<<n<<endl;
    // int i=5;
    // int &j=i;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // j++;
    // i++;
    // cout<<j<<endl;
    // cout<<i<<endl;
}