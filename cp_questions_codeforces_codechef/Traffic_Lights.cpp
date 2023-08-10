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
//     int x,n;cin>>x>>n;
//     vi v(n),ans,v1;
//     int max1{},pre{};
//     for(int i{} ; i<n ; i++) {cin>>v[i];}
//     v1=v;
//     // // set<int> s;
//     // multiset<int> s,diff;
//     // s.insert(0);s.insert(x);diff.insert(x);
//     // // int max1{-1};
//     // for(int i{} ; i<n ; i++) {
//     //     // auto it = lower_bound(s.begin(),s.end(),v[i]);
//     //     auto it = s.lower_bound(v[i]);
//     //     int z = (*it);it--;int y = (*it);
//     //     auto it2 = diff.find(z-y);diff.erase(it2);
//     //     s.insert(v[i]);diff.insert(z-v[i]);diff.insert(v[i]-y);
//     //     auto it3 = diff.end();it3--;
//     //     cout<<(*it3)<<" ";
//     // }
//     // cout<<"\n";

//     Sort(v);
//     max1 = max(max1,v[0]);
//     for(int i{1} ; i<n ; i++) {max1 = max(max1,v[i]-v[i-1]);}
//     max1 = max(max1,x-v[n-1]);

//     ans.push_back(max1);
//     v.push_back(0);v.push_back(x);Sort(v);
//     for(int i{n-1} ; i>0 ; i--) {
//         auto it = LowerBound(v,v1[i]);
//         auto it1 = it;it1++;
//         auto it2 = it;it2--;
//         max1 = max(max1,);
//         ans.push_back(max1);
//     }
//     Reverse(ans);
//     print(ans);
// }