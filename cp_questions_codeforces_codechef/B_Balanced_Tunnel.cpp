// #include <iostream>
// #include <unordered_map>
// #include <algorithm>
// const int N = 1e9;
// typedef long long ll;
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     unordered_map<int,int> m;
//     for(int i{1} ; i<=n ; i++) {
//         int x;cin>>x;
//         m[x] = i;
//     }
//     int arr[n] = {};
//     for(int i{} ; i<n ; i++) {
//         cin>>arr[i];
//     }
//     int min{N},ans{};
//     for(int i{n-1} ; i>=0 ; i--) {
//         if(m[arr[i]] < min) {
//             min = m[arr[i]];
//         } else {
//             ans++;
//         }
//     }
//     cout<<ans<<"\n";
// }