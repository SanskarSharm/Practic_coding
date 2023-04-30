#include<iostream>
using namespace std;
int main(){
    char ch[6]="abcde";
    cout<<"ch is: "<<ch<<endl;
    char *c=&ch[0];
    cout<<"after pointing to c is: "<<c<<endl;
    char s='z';
    char *t=&s;
    cout<<t<<endl;//isko null char k ke baad mila h
    
}