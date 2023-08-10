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
// #define int int64_t
// typedef long long ll;
// using namespace std;

// #define fill(a,b) memset(a, b, sizeof(a))
// #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// #define Sort(v) sort(v.begin(),v.end())
// #define Reverse(v) reverse(v.begin(),v.end())
// const ll mod = 1e9 + 7;

// void yesno(bool b) {if(b) cout << "Yes\n";else cout << "No\n";}
// void YESNO(bool b) {if(b) cout << "YES\n";else cout << "NO\n";}

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// int32_t main() {
//     fastio();
//     int n,d;
//     cin>>n>>d;
//     vector<int> v(n);
//     for(int i{} ; i<n ; i++) cin>>v[i];
//     // int lo{},hi{2},ans{};
//     // if(n<2) {cout<<"0\n";}
//     // else {
//     //     while(hi<n) {
//     //         if((v[hi]-v[lo])<=d) {
//     //             int z = (hi-lo-1);
//     //             ans+=z;
//     //             if((hi==(n-1)) && ((hi-lo)>2)) {
//     //                 if(z>=3) {ans+=(((z)*(z-1)*(z-2))/6);}
//     //                 lo++;
//     //             }
//     //             else hi++;
//     //         }
//     //         else {
//     //             if((hi-lo)>2) {
//     //                 int z = (hi-lo-1);
//     //                 if(z>=3) {ans+=(((z)*(z-1)*(z-2))/6);}
//     //                 lo++;
//     //             }
//     //             else {lo++;hi++;}
//     //         }
//     //     }
//     //     cout<<ans<<"\n";
//     // }
//     int ans{};
//     for(auto it = v.begin() ; it != v.end() ; it++) {
//         int z = (*it)+d;
//         int ind = UpperBound(v,z)-it-1;
//         if(ind>1) {ans+=(((ind)*(ind-1))/2);}
//     }
//     cout<<ans<<"\n";
// }

