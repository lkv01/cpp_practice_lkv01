// #include <iostream>
// #include <cmath>
// #include <algorithm>
// #include <iomanip>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         // int n;
//         // cin>>n;
//         // double arr[n];
//         // for(int i{} ; i<n ; i++) {
//         //     cin>>arr[i];
//         // }
//         // for(int i{1} ; i<n ; i++) {
//         //     if(arr[i]>arr[0]) {
//         //         arr[0] = ceil(((double)(arr[0]+arr[i]))/2);
//         //     }
//         // }
//         // cout<<fixed<<setprecision(0)<<arr[0]<<"\n";
//         int n;
//         cin>>n;
//         ll arr[n];
//         for(int i{} ; i<n ; i++) {
//             cin>>arr[i];
//         }
//         sort(arr+1,arr+n);
//         for(int i{1} ; i<n ; i++) {
//             if(arr[i]>arr[0]) {
//                 ll x = (arr[0]+arr[i])/2;
//                 ll y = (arr[0]+arr[i])%2;
//                 arr[0] = x+y;
//             }
//         }
//         cout<<arr[0]<<"\n";
//     }
// }