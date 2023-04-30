#include<iostream>
using namespace std;

void count(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;//tell recursion to print n
    count(n-1);
    cout<<n<<endl;//head recursion to print n
}

int main(){
    int n;
    cin>>n;
    count(n);

}