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
//     int n;cin>>n;
//     int m[8];
//     multiset<int> s;
//     for(int i{} ; i<n ; i++) {
//         int x;cin>>x;m[x]++;s.insert(x);
//     }
//     vector<vector<int>> v;

//     bool ok1 = true;
//     while(ok1) {
//         bool ok=false;
//         auto it = s.find(4);
//         auto it1 = s.find(2);
//         auto it2 = s.find(1);
//         if((it!=s.end()) && (it1!=s.end()) && (it2!=s.end())) {
//             s.erase(it);s.erase(it1);s.erase(it2);ok=true;
//         } else {
//             break;
//         }
//         if(ok) {v.push_back({1,2,4});}
//     }
//     ok1 = true;
//     while(ok1) {
//         bool ok=false;
//         auto it = s.find(6);
//         auto it1 = s.find(2);
//         auto it2 = s.find(1);
//         if((it!=s.end()) && (it1!=s.end()) && (it2!=s.end())) {
//             s.erase(it);s.erase(it1);s.erase(it2);ok=true;
//         } else {
//             break;
//         }
//         if(ok) {v.push_back({1,2,6});}
//     }
//     ok1 = true;
//     while(ok1) {
//         bool ok=false;
//         auto it = s.find(6);
//         auto it1 = s.find(3);
//         auto it2 = s.find(1);
//         if((it!=s.end()) && (it1!=s.end()) && (it2!=s.end())) {
//             s.erase(it);s.erase(it1);s.erase(it2);ok=true;
//         } else {
//             break;
//         }
//         if(ok) {v.push_back({1,3,6});}
//     }

//     if(!s.empty()) {
//         cout<<"-1\n";
//     } else {
//         for(auto elem:v) {
//             print(elem);
//         }
//     }
// }