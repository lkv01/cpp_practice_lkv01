// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     ll n,m;
//     cin>>n>>m;
//     //int arr[n+1] = {};
//     vector<ll> arr(n+2);
//     for(ll i{1} ; i<=n ; i++) {
//         cin>>arr[i];
//     }
//     ll hshf[n+1] = {};
//     ll xf{};
//     for(ll i{2} ; i<=n ; i++) {
//         if(arr[i]<arr[i-1]) {
//             xf+=(arr[i-1]-arr[i]);
//         }
//         hshf[i] = xf;
//     }

//     reverse(arr.begin(),arr.end());
//     ll hshb[n+1] = {};
//     ll xb{};
//     for(ll i{2} ; i<=n ; i++) {
//         if(arr[i]<arr[i-1]) {
//             xb+=(arr[i-1]-arr[i]);
//         }
//         hshb[i] = xb;
//     }

//     while(m--) {
//         ll s,t;
//         cin>>s>>t;
//         if(s<=t) {
//             cout<<hshf[t]-hshf[s]<<"\n";
//         } else {
//             cout<<(hshb[n-t+1]-hshb[n-s+1])<<"\n";
//         }
//     }
// }