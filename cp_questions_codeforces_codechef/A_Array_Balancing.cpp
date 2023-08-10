// #include <iostream>
// #include <cmath>
// using namespace std;
// typedef long long ll;

// void swap(ll &x,ll &y) {
//     x = x^y;
//     y = y^x;
//     x = x^y;
// }

// ll min(ll x,ll y) {
//     if(x<y) return x;
//     else return y;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         ll n;
//         cin>>n;
//         ll a[n] = {};
//         ll b[n] = {};
//         for(ll i{} ; i<n ; i++) {
//             cin>>a[i];
//         }
//         for(ll i{} ; i<n ; i++) {
//             cin>>b[i];
//         }
//         ll ans{};
//         for(ll i{1} ; i<n ; i++) {
//             ll x1 = abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
//             ll x2 = abs(b[i]-a[i-1])+abs(a[i]-b[i-1]);
//             if(x2<x1) {
//                 swap(a[i],b[i]);
//             }
//             ans+=(min(x1,x2));
//         }
//         cout<<ans<<"\n";
//     }
// }