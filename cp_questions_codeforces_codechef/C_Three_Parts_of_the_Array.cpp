// #include <iostream>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     ll fs[n+2] = {};
//     ll rs[n+2] = {};
//     ll arr[n+2] = {};
//     for(int i{1} ; i<=n ; i++) {
//         cin>>arr[i];
//         fs[i] = arr[i]+fs[i-1];
//     }
//     for(int i{n} ; i>=1 ; i--) {
//         rs[i] = arr[i]+rs[i+1];
//     }
//     int lo{1},hi{n};
//     ll ans{};
//     while(lo<hi) {
//         if(fs[lo]<rs[hi]) {
//             lo++;
//         } else if(fs[lo]>rs[hi]) {
//             hi--;
//         } else {
//             ans = fs[lo];
//             lo++;
//             hi--;
//         }
//     }
//     cout<<ans<<"\n";
// }