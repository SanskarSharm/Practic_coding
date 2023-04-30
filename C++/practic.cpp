#include<iostream>
using namespace std;

char tolowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
    
}


bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(tolowerCase(a[s])!=tolowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}


void getrevstring(char name[],int n){
    int s=0;
    int end=n-1;
    while(s<=end){
        swap(name[s++],name[end--]);
    }
}

int getcharlength(char name[]){
    int count =0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    
    cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"Your name is: "<<name<<endl;
    cout<<"Length is: ";
    cout<<getcharlength(name)<<endl;
    int n=getcharlength(name);
    getrevstring(name,n);
    cout<<"After revers string : "<<name;
    cout<<"Palindrome or Not : "<<checkPalindrome(name,n)<<endl;
    cout<<"Charcter is : "<<tolowerCase('b')<<endl;
    cout<<"Charcter is : "<<tolowerCase('B')<<endl;
}