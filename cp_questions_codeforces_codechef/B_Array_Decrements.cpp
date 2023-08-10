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
//         int arr3[n] = {};
//         for(int i{} ; i<n ; i++) {
//             cin>>arr1[i];
//         }
//         for(int i{} ; i<n ; i++) {
//             cin>>arr2[i];
//         }
//         bool flag = true;
//         int x{},y{},cnt1{},cnt2{};
//         for(int i{} ; i<n ; i++) {
//             arr3[i] = arr1[i]-arr2[i];
//             if(arr3[i] < 0) {
//                 flag = false;
//                 break;
//             }
//             if(arr2[i] == 0) {
//                 if(cnt1==0) {
//                     x = arr3[i];
//                     cnt1++;
//                 } else {
//                     if(x!=arr3[i]) {
//                         flag = false;
//                         break;
//                     }
//                 }
//             } else {
//                 if(cnt2==0) {
//                     y = arr3[i];
//                     cnt2++;
//                 } else {
//                     if(y!=arr3[i]) {
//                         flag = false;
//                         break;
//                     }
//                 }
//             }
//         }
//         if(flag) cout<<"YES\n";
//         else cout<<"NO\n";
//     } 
// }