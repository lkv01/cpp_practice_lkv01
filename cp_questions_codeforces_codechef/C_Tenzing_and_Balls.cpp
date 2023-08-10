// // Problem: C. Tenzing and Balls
// // Contest: Codeforces - CodeTON Round 5 (Div. 1 + Div. 2, Rated, Prizes!)
// // URL: https://codeforces.com/contest/1842/problem/C
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

// /* ->priority_queue is by default a Max Heap
//    ->to implement as a min heap use this:-

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
// bool sorta(const pii &a, const pii &b) { return (a.second < b.second); }

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

// //check ques "modulo lena hai ya nhi" :)



// // int f(int i, vector<int> &v, vector<int> &dp) {
// //     int n = v.size();
// //     // base case
// //     if(i >= n-1) {return 0;}
	
// // 	if(dp[i] != -1) {return dp[i];}
	
// //     int z{};
// //     z = max(z , f(i+1, v, dp));
// //     auto it1 = LowerBound(m[v[i]], i);
// //     auto it = m[v[i]].end();it--;
// //     for( ; it != it1 ; it--) {
// //         int ind = (*it);
// //         z = max(z , ind-i+1 + f(ind+1, v, dp));
// //     }
// //     // for(auto ind:m[v[i]]) {
// //     //     if(ind <= i) {continue;}
// //     //     z = max(z , ind-i+1 + f(ind+1, v, dp));
// //     //     // cout<<i<<" "<<ind<<" ";
// //     // }
// //     // cout<<"\n";
// //     return dp[i] = z;
// // }

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int t;
//     cin>>t;
//     while(t--) {
//         map<int,vector<int>> m;
//         int n;cin>>n;
//         vi v(n);
//         for(int i{} ; i<n ; i++) {
//             cin>>v[i];
//             m[v[i]].push_back(i);
//         }
//         vector<int> dp(n+1, -1);

//         // base case
//         dp[n-1] = 0;dp[n] = 0;

//         for(int i{n-2} ; i>=0 ; i--) {
            
//             dp[i] = max(dp[i] , dp[i+1]);
//             vector<int> &vec = m[v[i]];
//             auto it1 = UpperBound(m[v[i]], i);
//             for(auto it = it1 ; it != vec.end() ; it++) {
//                 int ind = (*it);
//                 dp[i] = max(dp[i] , ind-i+1 + dp[ind+1]);
//             }

//         }

//         cout<<dp[0]<<"\n";
//         // cout<<f(0, v, dp)<<"\n";
//     }
// }