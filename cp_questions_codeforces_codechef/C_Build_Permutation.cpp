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
// #include <vector>
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

// const int N = 1e5+10;
// vector<ll> persq;

// int main() {
//     fastio();
//     int t;
//     cin>>t;
//     for(int i{} ; i<=N ; i++) {
//         persq.push_back(i*1LL*i);
//     }
//     while(t--) {
//         int n;cin>>n;
//         vector<int> v;
//         bool flag = true;
//         for(int i{} ; i<n ; i++) {
//             int lo = i;
//             int hi = i+n-1;
//             auto it = lower_bound(persq.begin(),persq.end(),lo);
//             if((*it) <= hi) {
//                 v.push_back((*it)-lo);
//             } else {flag = false;break;}
//         }
//         if(!flag) {
//             cout<<"-1\n";continue;
//         }
//         for(auto elem:v) {
//             cout<<elem<<" ";
//         }
//         cout<<"\n";
//     }
// }