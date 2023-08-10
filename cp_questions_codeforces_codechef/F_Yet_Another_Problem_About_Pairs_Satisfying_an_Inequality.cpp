// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         ll n;
//         cin>>n;
//         ll arr[n+1] = {};
//         for(ll i{1} ; i<=n ; i++) {
//             cin>>arr[i];
//         }
//         vector<pair<ll,ll>> v;
//         for(ll i{1} ; i<=n ; i++) {
//             if(arr[i] < i) {
//                 v.push_back({arr[i],i});
//             }
//         }
//         ll x{};
//         vector<ll> v1;
//         vector<pair<ll,vector<ll>>> vec;
//         for(size_t i{} ; i<v.size() ; i++) {
//             vector<ll> v3 = v1;
//             if(i==0) {
//                 vec.push_back({v[i].first,v3});
//                 x = v[i].second;
//                 continue;
//             }
//             v3.push_back(x);
//             v1 = v3;
//             x = v[i].second;
//             vec.push_back({v[i].first,v3});
//         }

//         ll ans{};
//         for(size_t i{} ; i<vec.size() ; i++) {
//             vector<ll> v3 = (vec[i].second);
//             if(!v3.empty()) {
//                 ll ind = lower_bound(v3.begin(),v3.end(),vec[i].first)-v3.begin();
//                 ans+=ind;
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         ll n;
//         cin>>n;
//         ll arr[n+1] = {};
//         vector<ll> v;
//         ll ans{};
//         for(ll i{1} ; i<=n ; i++) {
//             cin>>arr[i];
//             if(arr[i]>=i) {continue;}
//             ans+=(lower_bound(v.begin(),v.end(),arr[i])-v.begin());
//             v.push_back(i);
//         }
//         cout<<ans<<"\n";
//     }
// }