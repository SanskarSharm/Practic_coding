#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0)
    return b;

while(a!=b){
    if(a>b){
        a=a-b;
    }
    else{
        b=b-a;
    }
}
return a; 
}


int main(){
    int a,b;
    cin>>a>>b;

    int ans = gcd(a,b);

    cout<<"GCD of a & b is: "<<ans<<endl;
    cout<<"lcm of a & b is:"<<(a*b)/ans;
}