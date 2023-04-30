// #include<iostream>
// using namespace std;

// int main(){
//     int num=10;
//     int *p=&num;
// //p ka mtlab hai pointer ka address
//     cout<<p<<endl;
//     cout<<"num: "<<num<<endl<<&num<<endl;
//     cout<<"value after dereferencing: "<<*p<<endl;
//     cout<<"size of num: "<<sizeof(num)<<endl; 
//     cout<<"size of p: "<<sizeof(p)<<endl;
//     cout<<"size of pointer: "<<sizeof(*p)<<endl;
// }

#include<iostream>
using namespace std;

int main(){
    int n=79;
    int a=n;

    cout<<"before increment: "<<n<<endl;
    a++;
    cout<<"after increment: "<<n<<endl;
    int *p=&n;
    cout<<"before increment: "<<n<<endl;
    (*p)++;
    cout<<"after increment: "<<n<<endl;

    //coping pointer

    int *p1=p;
    cout<<p1<<"-->"<<p<<endl;//address of p1 is same as p
    cout<<*p1<<"-->"<<*p<<endl;//value of p1 is same as p

    //arthematic operation on pointer
    int i=3;
    int *s=&i;
    *s=*s+1;
    cout<<*s<<endl;
    cout<<"brfore s"<<s<<endl;
    s=s+1;
    cout<<"after t"<<s<<endl;

    // cout<<"value of n: "<<n<<endl;
    // cout<<"address of n: "<<&n<<endl;
    // cout<<"value of p: "<<p<<endl;
    // cout<<"value of *p: "<<*p<<endl;
    // cout<<"address of p: "<<&p<<endl;
    // cout<<"value of n using pointer: "<<*p<<endl;
    // cout<<"size of n: "<<sizeof(n)<<endl;
    // cout<<"size of p: "<<sizeof(p)<<endl;
    // cout<<"size of pointer: "<<sizeof(*p)<<endl;
    
    

}