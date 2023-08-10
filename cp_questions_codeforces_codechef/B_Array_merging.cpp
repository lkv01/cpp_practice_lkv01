// // Problem: m2. v1ay merging
// // Contest: Codeforces - Codeforces Round 875 (Div. 2)
// // URL: https://codeforces.com/contest/1831/problem/m2
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
// #include <unordered_map>
// #include <stack>
// #include <queue>
// #include <algorithm>
// #include <cmath>
// #define int int64_t
// typedef long long ll;
// #define vi vector<int>
// #define mi map<int,int>
// #define pii pair<int,int>
// using namespace std;

// /* ->priority_queue is by default m1 Max Heap
//    ->to implement as m1 min heap use this:-

//     priority_queue <int, vector<int>, greater<int> > pq;
// */


// #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// #define Sort(v) sort(v.begin(),v.end())
// #define Reverse(v) reverse(v.begin(),v.end())
// const int mod = 1e9 + 7;

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

// /*following will help in sorting vector<pii> wrt second element(ascending order)*/
// bool sorta(const pii &m1, const pii &m2) { return (m1.second < m2.second); }

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

// /* Function to find modulo inverse of m1 in O(log M)).
//   ->This approach uses Fermat's Little Theorem.
//   ->used only when M is prime */
// int modInverse(int m1,int M) {
//     return power(m1,M-2,M);
// }

// /*    typecasting 
//     65---char--->'m1'              97---char--->'m1'
//     65<--int-----'m1'              97<--int-----'m1'
//     48---char--->'0'
//     48<--int-----'0'
// */

// void swap(int &m1,int &m2) {
//     m1=m1^m2;
//     m2=m2^m1;
//     m1=m1^m2;
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

// //check ques "modulo lena hai ya nhi" :)

// // vector<int> weight(N);
// // vector<int> par,rnk;

// // int make_set(int n) {
// // 	par.resize(n+1);
// // 	rnk.resize(n+1);
// // 	for(int i{1} ; i<=n ; i++) {
// // 		par[i] = i;
// // 		rnk[i] = 1;
// // 	}
// // }
 
// // int find_set(int v) {
// // 	if(par[v] == v) {return v;}
// // 	return par[v] = find_set(par[v]);
// // }
 
// // int union_set(int u, int v) {
// // 	u = find_set(u);
// // 	v = find_set(v);
// // 	if(u != v) {
// // 		if(rnk[u] < rnk[v]) {
// // 			swap(u,v);
// // 		}
// // 		// t -= f(rnk[u]);
// // 		// t -= f(rnk[v]);
// // 		par[v] = u;
// // 		rnk[u]+=rnk[v];
// // 		// t += f(rnk[u]);
// // 		// cout<<
// // 	}
// // }


// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int t;
//     cin>>t;
//     while(t--) {
//          int n;
//         cin >> n;
//         vi v1(n),v2(n);
//         for(int i = 0; i < n; i++) {cin>>v1[i];}
//         for (int i = 0; i < n; i++) {cin>>v2[i];}

//         unordered_map<int, int> m1;
//         unordered_map<int, int> m2;
//         int count = 1;

//         for (int i = 0; i < n; i++) {
//             if (i > 0 && v1[i] == v1[i - 1]) {
//                 count++;
//             } else {
//                 m1[v1[i - 1]]=max(count, m1[v1[i - 1]]);
//                 count = 1;
//             }
//         }
//         m1[v1[n - 1]]=max(count, m1[v1[n - 1]]);

//         count = 1;
//         for (int i = 0; i < n; i++) {
//             if (i > 0 && v2[i] == v2[i - 1]) {
//                 count++;
//             } else {
//                 m2[v2[i - 1]]=max(count, m2[v2[i - 1]]);
//                 count = 1;
//             }
//         }
//         m2[v2[n - 1]]=max(count, m2[v2[n - 1]]);

//         int ans = 0;
//         for (int e : v1) {
//             ans=max(ans, m1[e] + m2[e]);
//         }
//         for (int e : v2) {
//             ans=max(ans, m2[e] + m1[e]);
//         }
//         cout << ans <<endl;
            
//     }
// }