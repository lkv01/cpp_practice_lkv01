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
//         string s,t;cin>>s>>t;
//         int x{},y{};
//         int n = s.length();int m = t.length();
//         if(n>m) {cout<<"NO\n";continue;}
//         vector<pair<char,int>> v1,v2;
//         for(int i{} ; i<n ; i++) {
//             if(v1.empty()) {v1.push_back({s[i],1});continue;}
//             if(s[i]==v1.back().first) {
//                 int z = v1.back().second;z++;
//                 v1.pop_back();v1.push_back({s[i],z});
//                 continue;
//             }
//             v1.push_back({s[i],1});
//         }
//         for(int i{} ; i<m ; i++) {
//             if(v2.empty()) {v2.push_back({t[i],1});continue;}
//             if(t[i]==v2.back().first) {
//                 int z = v2.back().second;z++;
//                 v2.pop_back();v2.push_back({t[i],z});
//                 continue;
//             }
//             v2.push_back({t[i],1});
//         }
//         int n1 = v1.size();int n2 = v2.size();
//         bool ok = true;
//         if(n1 != n2) {cout<<"NO\n";continue;}
//         while(x<n1) {
//             if(v1[x].first != v2[x].first) {
//                 cout<<"NO\n";ok = false;break;
//             }
//             if(v1[x]>v2[x]) {cout<<"NO\n";ok = false;break;}
//             x++;
//         }
//         if(ok) {cout<<"YES\n";ok = false;}
//     }
// } 