#include<iostream>
using namespace std;

void reachHome(int src,int dest){
    cout<<"src: "<<src<<" "<<"Destination: "<<dest<<endl;
    if(src==dest){
        cout<<"Reached"<<endl;
        return ;
    }
    reachHome(src+1,dest);
}

int main(){
    int dest,src;
    cin>>dest>>src;

    reachHome(src,dest);
}