// #include <iostream>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         int arr[n+1] = {};
//         for(int i{1} ; i<=n ; i++) {
//             cin>>arr[i];
//         }
//         ll cnt{};
//         for(int i{1} ; i<=n ; i++) {
//             int k = arr[i];
//             int start{},l{1};
//             while(start <= i) {
//                 start = (k*l)-i;
//                 l++;
//             }
//             for(int j{start} ; j<=n ; j+=k) {
//                 if((k*1LL*arr[j]) == (i+j)) {
//                     cnt++;
//                 }
//             }
//         }
//         cout<<cnt<<"\n";
//     }
// }