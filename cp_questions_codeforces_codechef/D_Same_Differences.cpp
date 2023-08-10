// #include <iostream>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         int a[n] = {};
//         map<int,int> m;
//         for(int i{} ; i<n ; i++) {
//             cin>>a[i];
//             m[i-a[i]]++;
//         }
//         ll ans{};
//         for(auto it = m.begin() ; it != m.end() ; it++) {
//             int z = (it->second);
//             if(z>1) {
//                 ans+=((z*1LL*(z-1))/2);
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }