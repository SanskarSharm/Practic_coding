#include <iostream>
using namespace std;
string removeSpaceWithoutIncrement(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s.push_back('@');
            
        }
        else{
            s.push_back(s[i]);
        }
    }
    return s;
}

int main(){
    string str;
    getline(cin,str);
    cout<<removeSpaceWithoutIncrement(str);
}