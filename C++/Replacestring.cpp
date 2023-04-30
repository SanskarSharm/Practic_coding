#include<iostream>
using namespace std;
string checkSpace(string s){
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            temp.push_back('@');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;

}

int main(){

    string temp;
    getline(cin,temp);
    cout<<checkSpace(temp);
    
    
}