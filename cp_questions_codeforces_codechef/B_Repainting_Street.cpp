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
// // #define int int64_t
// typedef long long ll;
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

// int32_t main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,k;cin>>n>>k;
//         vector<int> v(n);
//         map<int,int> m;
//         for(int i{} ; i<n ; i++) {cin>>v[i];m[v[i]]++;}
//         // int max1{},mm{};
//         // for(auto it:m) {
//         //     if((it.second) > mm) {mm=it.second;max1=it.first;}
//         // }
//         int day1{200};
//         for(int max1{1} ; max1<=100 ; max1++) {
//             int day{},i{};
//             for( ; i<n ; ) {
//                 if(v[i]!=max1) {
//                     day++;i+=k;
//                 } else {i++;}
//             }
//             day1 = min(day1,day);
//         }
//         cout<<day1<<"\n";
//     }
// }