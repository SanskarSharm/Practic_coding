#include<iostream>
using namespace std;

bool checkPalindrom(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]!= str[j]){
        return false;
    }
    else{
        return checkPalindrom(str,i+1,j-1);
    }
}

int main(){
    string name;
    cin>>name;

    bool ispalindrom = checkPalindrom(name, 0, name.length()-1);

    if(ispalindrom){
        cout<<"Yeh palindrom h";
    }
    else{
        cout<<"Nhi h";
    }
}