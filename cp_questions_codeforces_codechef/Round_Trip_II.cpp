// // Problem: Round Trip II
// // Contest: CSES - CSES Problem Set
// // URL: https://cses.fi/problemset/task/1678/
// // Memory Limit: 512 MB
// // Time Limit: 1000 ms
// // 
// // Powered by CP Editor (https://cpeditor.org)

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
// #include <queue>
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

// const int N = 2e5+10;
// vector<int> graph[N];
// vector<bool> visited(N);
// vi level(N);
// vi how(N);

// int x{};
// bool dfs(int v,int i) {
//     visited[v] = true;
//     if(graph[v].empty()) {return false;}
//     for(auto child:graph[v]) {
//         how[child] = v;
//         if(child==i) {
//             x = child;
//             return true;
//         } else {
//             // visited[child] = true;
//             bool b = dfs(child,i);
//             if(b) {return true;}
//         }
//     }
//     return false;
// }

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     // int t;
//     // cin>>t;
//     // while(t--) {
//     // }
//     int n,m;cin>>n>>m;
//     while(m--) {
//         int x,y;cin>>x>>y;
//         graph[x].push_back(y);
//     }
//     bool ok = false;
//     for(int i{1} ; i<=n ; i++) {
//         if(!visited[i]) {
//             if(dfs(i,i)) {ok = true;break;}
//         }
//     }
//     if(!ok) {cout<<"IMPOSSIBLE\n";}
//     // cout<<"lkv\n";
//     else {
//         vi ans{};
//         ans.push_back(x);
//         int y = how[x];
//         while(y != x) {
//             ans.push_back(y);
//             y = how[y];
//         }
//         ans.push_back(x);Reverse(ans);
//         cout<<ans.size()<<"\n";
//         print(ans);
//     }
// }