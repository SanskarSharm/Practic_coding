#include<iostream>
using namespace std;

int Fibonnaci(int n){
    if(n==0 || n==1){
        return n;
    }
    return Fibonnaci(n-1)+Fibonnaci(n-2);
}
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<=n){
        cout<<Fibonnaci(i)<<" ";
        i++;
    }
    cout<<endl<<"Sum is: ";

     int ans = Fibonnaci(n);
     cout<<ans<<endl;

}