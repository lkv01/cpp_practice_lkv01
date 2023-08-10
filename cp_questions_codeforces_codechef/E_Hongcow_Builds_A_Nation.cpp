// // Problem: D. Bear and Forgotten Tree 3
// // Contest: Codeforces - (CR-1+CR-2) Graphs Long Challenge (Practice)
// // URL: https://codeforces.com/group/4sqVhW5GrJ/contest/434778/problem/D
// // Memory Limit: 256 MB
// // Time Limit: 2000 ms
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

// const int N = 1010;
// vi graph[N];
// vector<bool> visited(N);
// vector<vector<int>> ccom;
// vi curr;
// void dfs(int v) {
//     visited[v] = true;
//     curr.push_back(v);
//     for(auto child:graph[v]) {
//         if(!visited[child]) {
//             dfs(child);
//         }
//     }
// }

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int ans{};
//     int n,m,k;cin>>n>>m>>k;
//     set<int> s;
//     for(int i{} ; i<k ; i++) {
//         int x;cin>>x;
//         s.insert(x);
//     }
//     while(m--) {
//         int v1,v2;cin>>v1>>v2;
//         graph[v1].push_back(v2);graph[v2].push_back(v1);
//     }
//     int cnt{};
//     for(int i{1} ; i<=n ; i++) {
//         if(!visited[i]) {
//             dfs(i);
//             ccom.push_back(curr);curr.clear();
//             cnt++;
//         }
//     }

//     for(auto v:ccom) {
//         int z{};
//         if(v.size()>1) {
//             for(auto it:v) {
//                 z+=graph[it].size();
//             }
//         }
//         z/=2;
//         int t = v.size();
//         ans+=((t*(t-1))/2)-z;
//     }

//     vi has,not_has;
//     for(auto v:ccom) {
//         bool ok = false;
//         for(auto elem:v) {
//             if(s.find(elem) != s.end()) {
//                 has.push_back(v.size());
//                 s.erase(elem);ok = true;break;
//             }
//         }
//         if(!ok) {
//             not_has.push_back(v.size());
//         }
//     }
    
//     int sum{},ssum{};
//     if(!not_has.empty()) {
//         for(auto it:not_has) {
//             sum+=it;ssum+=(it*it);
//         }
//         ans = ((sum*sum)-ssum)/2;
//     }
//     if(!has.empty()) {
//         Sort(has);
//         int b = has.back();
//         for(auto it:not_has) {
//             ans+=(it*b);
//         }        
//     }
//     cout<<ans<<"\n";
// }