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
//     int t;
//     cin>>t;
//     while(t--) {
//         ll n;cin>>n;
//         ll a[2*n] = {};
//         for(ll i{} ; i<(2*n) ; i++) cin>>a[i];
//         ll ind{},ans{},cnt{};
//         for(ll i{} ; i<(2*n) ; i++) {
//             if(a[i]<=n) {
//                 ans+=(i-ind);cnt++;ind++;
//             }
//             if(cnt==n) break;
//         }
//         cout<<ans<<"\n";
//     }
// }