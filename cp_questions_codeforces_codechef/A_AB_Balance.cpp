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
//     int t;
//     cin>>t;
//     while(t--) {
//         string s;
//         cin>>s;
//         int n = s.length();
//         if(n==1) {cout<<s<<"\n";continue;}
//         int cnt{};
//         for(int i{1} ; i<n ; i++) {
//             if(s[i]!=s[i-1]) {
//                 // cout<<i<<" ";
//                 cnt++;
//             }
//         }
//         // cout<<"\n";
//         if(cnt%2 == 0) {cout<<s<<"\n";continue;}
//         int k1{};
//         for(int i{1} ; i<n ; i++) {
//             if(s[i]!=s[i-1]) {
//                 k1=i;
//                 break;
//             }
//         }
//         string s1{s};
//         for(int i{0} ; i<k1 ; i++) {
//             if(s[i]=='a') {s1[i]='b';}
//             else if(s[i]=='b') {s1[i]='a';}
//         }

//         int k2{};
//         for(int i{n-2} ; i>=0 ; i--) {
//             if(s[i]!=s[i+1]) {
//                 k2=i;
//                 break;
//             }
//         }
//         string s2{s};
//         for(int i{k2+1} ; i<n ; i++) {
//             if(s[i]=='a') {s2[i]='b';}
//             else if(s[i]=='b') {s2[i]='a';}
//         }
//         if(k1<(n-k2-1)) {cout<<s1<<"\n";}
//         else {cout<<s2<<"\n";}
//     }
// }