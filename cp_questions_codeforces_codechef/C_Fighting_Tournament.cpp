// // #include <iostream>
// // #include <vector>
// // #include <deque>
// // #include <map>
// // #include <unordered_map>
// // #include <algorithm>
// // using namespace std;
// // int main() {
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int n,q;
// //         cin>>n>>q;
// //         deque<int> d;
// //         unordered_map<int,int> mp;
// //         int maxindex{},maxvalue{};
// //         for(int i{} ; i<n ; i++) {
// //             int x;
// //             cin>>x;
// //             d.push_back(x);
// //             if(maxvalue<x) {
// //                 maxvalue = x;
// //                 maxindex = i;
// //             }
// //             mp[x] = i+1;
// //         }
// //         map<int,vector<int>> m;
// //         for(int i{} ; i<(maxindex+1) ; i++) {
// //             int x1 = d.front();
// //             d.pop_front();
// //             int x2 = d.front();
// //             d.pop_front();
// //             d.push_front(max(x1,x2));
// //             d.push_back(min(x1,x2));
// //             m[mp[d.front()]].push_back(i+1);
// //         }

// //         while(q--) {
// //             int i,k;
// //             cin>>i>>k;
// //             if(i==(maxindex+1)) {
// //                 if(k<maxindex) {
// //                     cout<<"0\n";
// //                     continue;
// //                 } else {
// //                     if(maxindex==0) {
// //                         cout<<(k-maxindex)<<"\n";
// //                     } else {
// //                         cout<<(k-maxindex+1)<<"\n";
// //                     }
// //                     continue;
// //                 }
// //             } else if(i>(maxindex+1)) {
// //                 cout<<"0\n";
// //                 continue;
// //             } else {
// //                 if(m[i].size()==0) {
// //                     cout<<"0\n";
// //                 } else {
// //                     if(k<m[i].front()) {
// //                         cout<<"0\n";
// //                     } else if(k>m[i].back()) {
// //                         cout<<(m[i].size())<<"\n";
// //                     }
// //                     else  {
// //                         auto lo = lower_bound(m[i].begin(),m[i].end(),k);
// //                         cout<<(lo-m[i].begin()+1)<<"\n";
// //                     }
// //                 }
// //             }
// //         }
// //     }
// // }


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
// #include <cmath>
// // #define int int64_t
// typedef long long ll;
// #define vi vector<int>
// #define mi map<int,int>
// using namespace std;

// #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// #define Sort(v) sort(v.begin(),v.end())
// #define Reverse(v) reverse(v.begin(),v.end())
// const ll mod = 1e9 + 7;

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// void print(vector<int> v) {
//     for(auto elem:v) {
//         cout<<elem<<" ";
//     }
//     cout<<"\n";
// }

// /* Iterative Function to calculate (x^y)%p in O(log y) */
// int power(int x, int y, int p) {
//     int res = 1;              // Initialize result
//     x = x % p;                // Update x if it is more than or equal to p
//     if (x == 0) return 0;     // In case x is divisible by p;
//     while (y > 0) {
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res*x) % p;
 
//         // y must be even now
//         y = y>>1; // y = y/2
//         x = (x*x) % p;
//     }
//     return res;
// }

// /* Function to find modulo inverse of A in O(log M)).
//   ->This approach uses Fermat's Little Theorem.
//   ->used only when M is prime */
// int modInverse(int A,int M) {
//     return power(A,M-2,M);
// }

// /*    typecasting 
//     65---char--->'A'              97---char--->'a'
//     65<--int-----'A'              97<--int-----'a'
//     48---char--->'0'
//     48<--int-----'0'
// */

// void swap(int &a,int &b) {
//     a=a^b;
//     b=b^a;
//     a=a^b;
// }

// // //....algorithm....................
// // vector<bool> is_prime(N+1,1);
// // vector<int> hp(N+1,1);
// // vector<int> lp(N+1,1);
// // void lp_hp_sieve(int n) {
// //     is_prime[1] = false;
// //     for(int i{2} ; i<n ; i++) {
// //         if(is_prime[i] == true) {
// //             hp[i] = i;
// //             lp[i] = i;
// //             for(int j{2*i} ; j<n ; j+=i) {
// //                 is_prime[j] = false;
// //                 hp[j] = i;
// //                 if(lp[j] == true) {
// //                     lp[j] = i;
// //                 }
// //             }
// //         }
// //     }
// // }
// // //.................................

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,q;cin>>n>>q;
//         vector<pair<int,int>> v;
//         v.push_back({0,0});

//         int maxx{-1},indd{-1};
//         for(int i{1} ; i<=n ; i++) {
//             int x;cin>>x;
//             v.push_back({x,i});
//             if(x>maxx) {maxx = x;indd = i;}
//         }

//         vi win(n);
//         int max1{},ind{};
//         if(v[1].first > v[2].first) {
//             ind = v[1].second;max1 = v[1].first;
//         } else {
//             ind = v[2].second;max1 = v[2].first;
//         }
//         win[1] = ind;
//         for(int i{2} ; i<n ; i++) {
//             if(v[i+1].first > max1) {
//                 max1 = v[i+1].first;ind = v[i+1].second;
//             }
//             win[i] = ind;
//         }

//         map<int,vector<int>> mp;
//         for(int i{1} ; i<=(n-1) ; i++) {
//             mp[win[i]].push_back(i);
//         }

//         while(q--) {
//             int i,k;cin>>i>>k;
//             int ans = UpperBound(mp[i],k) - mp[i].begin();
//             if(i==indd) {
//                 if(k>mp[i].back()) {
//                     ans+=(k-mp[i].back());
//                 }
//             }
//             cout<<ans<<"\n";
//         }
//         // int max1{-1},ind{};
//         // mi m;
//         // for(int i{} ; i<n ; i++) {
//         //     cin>>v[i];m[v[i]]=i;
//         //     if(v[i]>max1) {max1 = v[i];ind = i+1;}
//         // }
//         // while(q--) {
//         //     int i,k;cin>>i>>k;
//         //     if(i != ind) {
//         //         if(m[v[i-1]]>ind-1) {
//         //             cout<<"0\n";
//         //         } else {
//         //             if(k < m[v[i-1]]) {
//         //                 cout<<"0\n";
//         //             } else {
//         //                 cout<<"lkv\n";
//         //             }
//         //         }
//         //     } else {
//         //         int z = m[v[i-1]];
//         //         if(k<z) {cout<<"0\n";}
//         //         else {cout<<(k-z+1)<<"\n";}
//         //     }
//         // }

//     }
// }