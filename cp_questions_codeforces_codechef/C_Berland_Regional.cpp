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
//         vector<int> u,s;

//         map<int,ll> m1;
//         for(int i{1} ; i<=n ; i++) {
//             int x;cin>>x;
//             u.push_back(x);
//             m1[i]=x;
//         }

//         map<int,vector<ll>> m2;
//         for(int i{1} ; i<=n ; i++) {
//             int x;cin>>x;
//             s.push_back(x);
//             m2[m1[i]].push_back(x);
//         }
//         for(auto it = m2.begin() ; it != m2.end() ; it++) {
//             vector<ll> &v = (it->second);
//             sort(v.rbegin(),v.rend());
//         }

//         map<int,vector<ll>> mp3;
//         for(auto it = m2.begin() ; it != m2.end() ; it++) {
//             int x = (it->first);
//             vector<ll> v = (it->second);
//             mp3[x].push_back(v.front());
//             for(int i{1} ; i<(int)v.size() ; i++) {
//                 mp3[x].push_back(mp3[x].back() + v[i]);
//             }
//         }

//         // for(int i{1} ; i<=n ; i++) {
//         //     ll ans{0LL};
//         //     for(auto it = mp3.begin() ; it != mp3.end() ; it++) {
//         //         vector<int> v = (it->second);
//         //         if(i<=(int)v.size()) {
//         //             ans+=(v[(i*(v.size()/i)) - 1]);
//         //         }
//         //     }
//         //     cout<<ans<<" ";
//         // }
//         // cout<<"\n";

//         map<int,ll> mp4;
//         for(auto it = mp3.begin() ; it != mp3.end() ; it++) {
//             vector<ll> v = (it->second);
//             for(int i{1} ; i<=(int)v.size() ; i++) {
//                 mp4[i]+=((v[(i*(v.size()/i)) - 1])+0LL);
//             }
//         }

//         for(auto it = mp4.begin() ; it != mp4.end() ; it++) {
//             cout<<(it->second)<<" ";
//         }
//         int y = n-(int)mp4.size();
//         while(y--) {
//             cout<<"0 ";
//         }
//         cout<<"\n";
//     }
// }