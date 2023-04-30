#include<iostream>
using namespace std;

int main(){

    int i=5;
    int *p=&i;
    int **p2=&p;
    
    cout<<"p is: "<<p<<endl;
    cout<<"*p is: "<<*p<<endl;
    cout<<"p2 is: "<<p2<<endl;
    cout<<"*p2 is: "<<*p2<<endl;
    cout<<"**p2 is: "<<**p2<<endl;
}