// /*
//         L               K      K     V           V
//         L               K    K        V         V
//         L               K  K           V       V
//         L               KK              V     V
//         L               K  K             V   V
//         L               K    K            V V
//         L L L L L L     K      K           V    
// */

// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <list>
// #include <set>
// #include <map>
// #include <stack>
// #include <algorithm>
// typedef long long ll;
// using namespace std;

// #define Sort(v) sort(v.begin(),v.end())
// const ll mod = 1e9 + 7;

// void yesno(bool b) {if(b) cout << "Yes\n";else cout << "No\n";}
// void YESNO(bool b) {if(b) cout << "YES\n";else cout << "NO\n";}

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// int main() {
//     fastio();
//     ll n;cin>>n;
//     ll s;cin>>s;
//     ll lo{};
//     vector<ll> v(n),pre(n);
//     for(ll i{} ; i<n ; i++) {
//         cin>>v[i];
//     }
//     // for(ll i{} ; i<n ; i++) {
//     //     if(i==0) {pre[i]=v[i];}
//     //     else {pre[i]=pre[i-1]+v[i];}
//     // }
//     // ll hi{};
//     // for(ll i{} ; i<n ; i++) {
//     //     if(pre[i]<=s) {hi=i;}
//     //     else {break;} 
//     // }
//     // ll ans{};
//     // while((hi<n) && (lo<=hi)) {
//     //     if((pre[hi]-pre[lo]+v[lo]) <= s) {
//     //         ans=max(ans,hi-lo+1);
//     //         hi++;
//     //     } else {
//     //         lo++;
//     //     }
//     // }
//     // cout<<ans<<"\n";
// }