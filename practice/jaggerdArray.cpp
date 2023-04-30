#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter row: ";
    cin>>row;

    int** arr=new int*[row];
    int size[row];
    cout<<"Enter col size: ";
    for(int i=0;i<row;i++){
        cin>>size[i];
    }

    for(int i=0;i<row;i++){
        arr[i]=new int[size[i]];
    }

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < size[i]; j++) {
             cin>>arr[i][j];    
            
        }
    }
  
    cout << "elements in matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < size[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}