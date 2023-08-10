// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n;cin>>n;
//     ll ans{};
//     vector<ll> a(21,1);
//     for(int i{1} ; i<21 ; i++) {
//         a[i]=i*1LL*a[i-1];
//     }
//     ans = (a[n]/(a[n/2]*1LL*a[n/2]));
//     ans/=2;
//     ans*=a[(n/2)-1];
//     ans*=a[(n/2)-1];
//     cout<<ans<<"\n";
// }