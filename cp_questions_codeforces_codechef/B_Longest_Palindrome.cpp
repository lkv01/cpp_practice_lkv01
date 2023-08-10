// // Problem: C. Rotation Matching
// // Contest: Codeforces - Codeforces Round #648 (Div. 2)
// // URL: https://codeforces.com/problemset/problem/1365/C
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
// */

// int32_t main() {
//     fastio();
//     int n,k;cin>>n>>k;
//     map<string,int> m;
//     vector<string> v;
//     string ans1{},ans2{};
//     bool ok=true;
//     string ans3{};
//     for(int i{} ; i<n ; i++) {string s;cin>>s;m[s]++;v.push_back(s);}
//     for(int i{} ; i<n ; i++) {
//         string s1 = v[i];
//         if(m[s1]>0) {
//             m[s1]=0;
//             string s2=s1;
//             reverse(s2.begin(),s2.end());
//             if(m[s2]>0) {
//                 m[s2]=0;
//                 ans1+=s1;
//                 s2+=ans2;ans2=s2;
//             } else {
//                 if((s1==s2) && (ok)) {
//                     ans3=s1;ok=false;
//                 }
//             }
//         }
//     }
//     string ans = (ans1+ans3+ans2);
//     cout<<ans.length()<<"\n";
//     cout<<ans<<"\n";
// }