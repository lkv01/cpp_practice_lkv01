// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n,q;
//     cin>>n>>q;
//     vector<ll> v(n);
//     ll sum{};
//     for(int i{} ; i<n ; i++) {
//         cin>>v[i];
//         sum+=v[i];
//     }
//     while(q--) {
//         int t;
//         cin>>t;
//         if(t==1) {
//             int i;
//             ll x;
//             cin>>i>>x;
//             sum=(sum-v[i-1]+x);
//             cout<<sum<<"\n";
//             v[i-1] = x;
//         } else {
//             ll x;
//             cin>>x;
//             vector<ll> v1(n,x);
//             v = v1;
//             sum=(n*1LL*x);
//             cout<<sum<<"\n";
//         }
//     }
// }