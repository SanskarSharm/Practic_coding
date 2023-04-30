// #include<iostream>
// using namespace std;
// bool isPresent(int arr[][3],int target,int raw,int col){
//         for(int i=0;i<raw;i++){
//             for(int j=0;j<3;j++){
//                 if(arr[i][j]==target){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
//  //col sum me only i ko j or j ko i change krna hoga   

// void printSum(int arr[][3],int raw,int col){
//     cout<<"printing sum -> "<<endl;
//     for(int i=0;i<raw;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum+=arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
//     cout<<endl;
// }    

// int LargestSum(int arr[][3],int raw,int col){
//     int maxi = INT_MIN;
//     int rawIndex = -1;
//     for(int raw=0;raw<3;raw++){
//         int sum=0;
//         for(int col=0;col<3;col++){
//             sum+=arr[raw][col];
//         }
//         if(sum>maxi){
//             maxi = sum;
//             rawIndex = raw;
//         }
//     }
//     cout<<"The maximum sum is "<<maxi<<endl;
//     return rawIndex;
// }


// int main(){
//     //creat 2d array
//     int arr[3][3];
//     cout<<"Enter the elements of 2D array: "<<endl;

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     //print 2d array
//     cout<<"2D array: "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Enter the element to search: "<<endl;
//     int target;
//     cin>>target;

//     //searching
//     if(isPresent(arr,target,3,3)){
//         cout<<"Element is present"<<endl;
//     }
//     else{
//         cout<<"Element is not present"<<endl;
//     }
//     printSum(arr,3,3);

//     int ans =LargestSum(arr,3,3);
//     cout<<"raw "<<ans<<endl;
    


//     return 0;
// }

