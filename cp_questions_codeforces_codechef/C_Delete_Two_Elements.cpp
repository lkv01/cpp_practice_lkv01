// #include <iostream>
// #include <vector>
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
//         vector<ll> v(n);
//         map<ll,vector<int>> m;
//         ll sum{};
//         for(int i{} ; i<n ; i++) {
//             cin>>v[i];
//             m[v[i]].push_back(i);;
//             sum+=(v[i]);
//         }
//         if(((2*sum)%n) != 0) {
//             cout<<"0\n";
//             continue;
//         }
//         ll z = ((2*sum)/n);
//         ll ans{};
//         for(int i{} ; i<n ; i++) {
//             ll comp = z-v[i];
//             auto it = m.find(comp);
//             if(it != m.end()) {
//                 ll ind = upper_bound((it->second).begin(),(it->second).end(),i)-(it->second).begin();
//                 ans+=((it->second).size()-ind);
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }