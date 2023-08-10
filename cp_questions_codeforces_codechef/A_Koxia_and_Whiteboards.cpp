// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,m;
//         cin>>n>>m;
//         vector<ll> v1(n);
//         vector<ll> v2(m);
//         for(int i{} ; i<n ; i++) {
//             cin>>v1[i];
//         }
//         for(int i{} ; i<m ; i++) {
//             cin>>v2[i];
//         }
//         sort(v1.begin(),v1.end());
//         sort(v2.begin(),v2.end());
//         if(n<=m) {
//             ll ans{};
//             int nn = n;
//             while(nn--) {
//                 ans+=v2.back();
//                 v2.pop_back();
//             }
//             cout<<ans<<"\n";
//         } else {
//             ll ans{};
//             while(v1.size()>v2.size()) {
//                 ans+=v1.back();
//                 v1.pop_back();
//             }
//             for(int i{} ; i<m ; i++) {
//                 ans+=v2[i];
//             }
//             cout<<ans<<"\n";
//         }
//     }
// }