// /*
// //         L               K      K     V           V
// //         L               K    K        V         V
// //         L               K  K           V       V
// //         L               KK              V     V
// //         L               K  K             V   V
// //         L               K    K            V V
// //         L L L L L L     K      K           V    
// // */

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

// int32_t main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,a,b;cin>>n>>a>>b;
//         vector<int> as,bs;
//         int an = (int)as.size();int bn = (int)bs.size();
//         as.push_back(a);bs.push_back(b);
//         for(int i{1} ; i<a ; i++) {
//             auto it = find(bs.begin(),bs.end(),i);
//             if(it != bs.end()) {continue;}
//             bs.push_back(i);
//         }
//         for(int i{b+1} ; i<=n ; i++) {
//             auto it = find(as.begin(),as.end(),i);
//             if(it != as.end()) {continue;}
//             as.push_back(i);
//         }
//         int nn{n/2};
//         if((as.size()>nn) || (bs.size() > nn)) {
//             cout<<"-1\n";continue;
//         }
//         set<int> s;
//         for(int i{1} ; i<=n ; i++) {
//             s.insert(i);
//         }
//         for(auto it:as) {
//             s.erase(it);
//         }
//         for(auto it:bs) {
//             s.erase(it);
//         }
//         vi v;
//         for(auto it:s) {v.push_back(it);}
//         for(int i{} ; i<as.size() ; i++) {
//             cout<<as[i]<<" ";
//         }
//         for(int i{} ; i<v.size() ; i++) {
//             cout<<v[i]<<" ";
//         }
//         for(int i{} ; i<bs.size() ; i++) {
//             cout<<bs[i]<<" ";
//         }
//         cout<<"\n";
//     }
// }