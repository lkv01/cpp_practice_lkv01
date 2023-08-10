// #include <iostream>
// #include <map>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         map<int,int> m;
//         for(int i{} ; i<n ; i++) {
//             int z;
//             cin>>z;
//             m[z]++;
//         }
//         int max2{-1};
//         for(auto it = m.begin() ; it!=m.end() ; it++) {
//             if(max2<(it->second)) {
//                 max2=(it->second);
//             }
//         }
//         int x{max2},ans{};
//         while(x<n) {
//             ans++;
//             if((2*x) <= n) {
//                 ans+=x;
//                 x*=2;
//             } else {
//                 ans+=(n-x);
//                 x = n;
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }