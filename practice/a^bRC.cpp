#include<iostream>
using namespace std;

int  power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans= power(a,b/2);
    if(b&1){//B Odd h to 
        return a*ans*ans;
    }
    else{// b even h to
        return ans*ans;
    }

}

int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    
    int ans= power(a,b);
    cout<<"Answer is: "<<ans<<endl;

}