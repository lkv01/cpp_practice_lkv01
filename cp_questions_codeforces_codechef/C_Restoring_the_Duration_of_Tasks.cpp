// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         int arr1[n] = {};
//         int arr2[n] = {};
//         for(int i{} ; i<n ; i++) {
//             cin>>arr1[i];
//         }
//         for(int i{} ; i<n ; i++) {
//             cin>>arr2[i];
//         }

//         for(int i{} ; i<n ; i++) {
//             if(i==0) {
//                 cout<<arr2[i]-arr1[i]<<" ";
//             } else {
//                 if(arr1[i] >= arr2[i-1]) {
//                     cout<<arr2[i]-arr1[i]<<" ";
//                 } else {
//                     cout<<arr2[i]-arr2[i-1]<<" ";
//                 }
//             }
//         }
//         cout<<"\n";
//     }
// }