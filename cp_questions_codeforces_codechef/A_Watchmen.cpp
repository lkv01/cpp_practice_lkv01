// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     map<ll,ll> mx,my;
//     map<pair<ll,ll>,ll> mv;
//     ll ans1{};
//     while(n--) {
//         ll x,y;
//         cin>>x>>y;
//         ans1+=mx[x]++;
//         ans1+=my[y]++;
//         ans1-=mv[{x,y}]++;
//     }
//     cout<<(ans1)<<"\n";
// }