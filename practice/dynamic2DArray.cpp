// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     int** arr =new int* [n];

//     for(int i=0;i<n;i++){
//         arr[i]=new int[n];
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }



//     return 0;
// }

//row or col deiffrent ho tb

#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Enter the row size is: ";
    cin>>row;
    int col;
    cout<<"Enter the col size is: ";
    cin>>col;

    int** arr = new int*[row];

    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    //input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2D array is: "<<endl;
    
    //output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    //releasing memory

    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
}