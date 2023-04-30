#include<iostream>
using namespace std;

inline int getMax(int a,int b){
    return (a>b)? a : b;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<getMax(a,b)<<endl;//inline kr ne se jha jha getMax() call kiya h vhaa vhaa (a>b)? a : b; aa jayega 
    a=a+1;
    b=b+2;
    cout<<getMax(a,b)<<endl;
}