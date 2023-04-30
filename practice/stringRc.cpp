#include<iostream>
using namespace std;

void reverseStr(string &str,int i,int j){//string &str pass bi refrance krna hoga nhi to copy bnegi
    cout<<"call kro reverse ke liye: "<<str<<endl;
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverseStr(str,i,j);
}

int main(){

    string name;
    cin>>name;
    cout<<endl;
    reverseStr(name,0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;//call krne pr refrence call hogi

}