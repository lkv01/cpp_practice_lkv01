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

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,m;cin>>n>>m;
//         for(int i{} ; i<n ; i++) {
//             graph[i].clear();
//             visited[i]=0;
//             level[i]=0;
//         }
//         // visited.clear();level.clear();
//         while(m--) {
//             int x,y;cin>>x>>y;
//             graph[x].push_back(y);
//             graph[y].push_back(x);
//         }
//         queue<int> q;
//         q.push(1);
//         visited[1] = true;
//         level[1] = 0;
//         int cnt0{1},cnt1{};
//         vi v0,v1;
//         v0.push_back(1);
//         while(!q.empty()) {
//             int x = q.front();
//             q.pop();
//             for(auto child:graph[x]) {
//                 if(!visited[child]) {
//                     q.push(child);
//                     visited[child] = true;
//                     level[child] = level[x]+1;
//                     if(level[child]%2 == 0) {cnt0++;v0.push_back(child);}
//                     else {cnt1++;v1.push_back(child);}
//                 } 
//             }
//         }
//         if(cnt0 <= (int) floor(n/2)) {
//             cout<<v0.size()<<"\n";
//             print(v0);
//         } else if(cnt1 <= (int) floor(n/2)) {
//             cout<<v1.size()<<"\n";
//             print(v1);
//         }
//     }
// }