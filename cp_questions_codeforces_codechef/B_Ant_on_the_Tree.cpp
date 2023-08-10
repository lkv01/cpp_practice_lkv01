// // Problem: B. Ant on the Tree
// // Contest: Codeforces - (CR-1+CR-2) Graphs Long Challenge (Practice)
// // URL: https://codeforces.com/group/4sqVhW5GrJ/contest/434778/problem/B
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
// const int N = 310;
// vi graph[N+2];
// vi path[N+2];
// vi val(N+2,0);
// int k{};
// vi from(N+2);
// vi level(N+2);

// void dfs(int v,int par) {
//     for(auto child:graph[v]) {
//         if(child != par) {
//             level[child] = level[v]+1;
//             from[child] = v;
//             dfs(child,v);
//         }
//     }
//     if((graph[v].size()==1) && (v != 1)) {
//         k++;
//     }
// }

// int find_ancestor(int l1,int l2) {
//     vi &path1 = path[l1];
//     vi &path2 = path[l2];
//     int r{1};
//     for(int i{} ; i<min(path1.size(),path2.size()) ; i++) {
//         if(path1[i]==path2[i]) {r = path1[i];}
//         else {break;}
//     }
//     return r;
// }

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int n;
//     cin>>n;
//     for(int i{} ; i<(n-1) ; i++) {
//         int x,y;cin>>x>>y;
//         graph[x].push_back(y);graph[y].push_back(x);
//     }
//     dfs(1,0);
//     vector<int> leaf;
//     while(k--) {
//         int x;cin>>x;leaf.push_back(x);
//     }
    
//     for(int ver{1} ; ver<=n ; ver++) {
//         path[ver].push_back(ver);
//         int v = ver;
//         while(from[v] != 0) {
//             path[ver].push_back(from[v]);
//             v = from[v];
//         }
//     }

//     for(int i{1} ; i<=n ; i++) {
//         Reverse(path[i]);
//     }

//     vi ans;
//     for(int i{} ; i<(int)path[leaf[0]].size() ; i++) {
//         ans.push_back(path[leaf[0]][i]);
//     }
//     int a1{};
//     for(int i{} ; i<(int)(leaf.size()-1) ; i++) {
//         int l1 = leaf[i];int l2 = leaf[i+1];
//         vi &v1 = path[l1];
//         vi &v2 = path[l2];
//         int a = find_ancestor(l1,l2);a1=a;
//         for(int i{(int)v1.size() - 2} ; i>=0 ; i--) {
//             ans.push_back(v1[i]);
//             if(v1[i] == a) {break;}
//         }
//         int j = LowerBound(v2,a) - v2.begin();
//         for(int i{j+1} ; i<(int)v2.size() ; i++) {
//             ans.push_back(v2[i]);
//         }
//     }
//     vi &v1 = path[leaf.back()];
//     for(int i{(int)v1.size() - 2} ; i>=0 ; i--) {
//         ans.push_back(v1[i]);
//         if(v1[i] == a1) {break;}
//     }
//     vi &v2 = path[a1];
//     for(int i{(int)v2.size()-2} ; i>=0 ; i--) {ans.push_back(v2[i]);}
//     if((int)ans.size() > (2*n-1)) {cout<<"-1\n";}
//     else {print(ans);}
// }