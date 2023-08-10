// // Problem: C. Alyona and the Tree
// // Contest: Codeforces - (CR-1+CR-2) Graphs Long Challenge (Practice)
// // URL: https://codeforces.com/group/4sqVhW5GrJ/contest/434778/problem/C
// // Memory Limit: 256 MB
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
// #define int int64_t
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

// int sf(set<int> &s) {
//     auto it = s.begin();
//     return (*it);
// }

// const int N = (int)1e5+10;
// vi graph[N];
// // vector<bool> visited(N);
// // vector<vector<int>> ccom;
// // vi curr;
// vi val(N,1);
// vi sub(N,1);
// vi dis(N);
// vi mindis(N);
// int ans{};
// int arr[N][N];

// void dfs1(int v,int par) {
//     for(auto child:graph[v]) {
//         if(child != par) {
//             dfs1(child,v);
//             sub[v]+=sub[child];
//         }
//     }
// }
// // 
// // int x{};
// // void dfs2(int v,int par) {
//     // for(auto child:graph[v]) {
//         // if(child != par) {
//             // x+=arr[child][v];
//             // dis[child] = x;
//             // dfs2(child,v);
//             // x-=arr[child][v];
//         // }
//     // }
// // }
// int min1{mod};
// void dfs2(int v,int par) {
//     for(auto child:graph[v]) {
//         if(child != par) {
//             dis[child] = dis[v]+arr[child][v];
//             min1 = min(min1,dis[child]);
//             dfs2(child,v);
//         }
//     }
// }

// set<int>s;
// void dfs3(int v,int par) {
//     for(auto child:graph[v]) {
//         if(child != par) {
//             s.insert(arr[child][v]);
//             int z = sf(s);
//             // if()
//             dfs3(child,v);
//             s.erase(arr[child][v]);
//         }
//     }
// }

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int n;cin>>n;
//     for(int i{1} ; i<=n ; i++) {
//         int x;cin>>x;
//         val[i] = x;
//     }
//     for(int i{2} ; i<=n ; i++) {
//         int p,c;cin>>p>>c;
//         graph[i].push_back(p);graph[p].push_back(i);
//         arr[i][p] = c;arr[p][i] = c;
//     }
// }