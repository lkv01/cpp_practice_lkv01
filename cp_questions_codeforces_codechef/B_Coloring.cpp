// #include <iostream>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,m,k;
//         cin>>n>>m>>k;
//         int z{};
//         int z1 = n/k;
//         int arr[m] = {};
//         for(int i{} ; i<m ; i++) {
//             cin>>arr[i];
//         }
//         if((n%k) != 0) {
//             z = z1+1;
//             int z2 = n%k;
//             bool flag = true;
//             for(int i{} ; i<m ; i++) {
//                 if(arr[i]>z) {
//                     flag = false;
//                     break;
//                 } else if(arr[i] == z) {
//                     if(z2==0) {
//                         flag = false;
//                         break;
//                     } else {
//                         z2--;
//                     }
//                 }
//             }
//             if(flag == true) {
//                 cout<<"YES\n";
//             } else {
//                 cout<<"NO\n";
//             }
//         } else {
//             z = z1;
//             bool flag = true;
//             for(int i{} ; i<m ; i++) {
//                 if(arr[i]>z) {
//                     flag = false;
//                     break;
//                 }
//             }
//             if(flag == true) {
//                 cout<<"YES\n";
//             } else {
//                 cout<<"NO\n";
//             }
//         }
//     }
// }