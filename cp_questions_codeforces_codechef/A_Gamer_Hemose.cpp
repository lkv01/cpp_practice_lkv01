// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         long long int n,h;
//         cin>>n>>h;
//         long long int arr[n];
//         for(int i{} ; i<n ; i++) {
//             cin>>arr[i];
//         }
//         sort(arr,arr+n);
//         long long int y{};
//         long long int H = h;
//         long long int i{n-1};
//         while(H>0) {
//             H-=arr[i];
//             y++;
//             if((y&1)==1) {
//                 i = n-2;
//             } else {
//                 i = n-1;
//             }
//         }
//         cout<<y<<"\n";
//     }
// }