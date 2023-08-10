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
//     if(t%2 != 0) {
//         int dp{},dn{};
//         double n,m;
//         n = m = (t+1)/2;
//         while(t--) {
//             double x,y;cin>>x>>y;
//             if(x==n && y==m) {dp++;dn++;continue;}
//             if(((x-n)/(y-m)) == 1) {dp++;}
//             if(((x-n)/(y-m)) == -1) {dn++;}
//         }
//         cout<<((dp*(dp-1)/2)*(1LL) + (dn*(dn-1)/2)*(1LL))<<"\n";
//     } else {
//         int dp{},dn{};
//         double n,m,n1,m1;
//         n = m = (t+1)/2;
//         n1 = n+1;m1 = m;
//         while(t--) {
//             double x,y;cin>>x>>y;
//             if(x==n && y==m) {dp++;continue;}
//             if(x==n1 && y==m1) {dn++;continue;}
//             if(((x-n)/(y-m)) == 1) {dp++;}
//             if(((x-n1)/(y-m1)) == -1) {dn++;}
//         }
//         cout<<((dp*(dp-1)/2)*(1LL) + (dn*(dn-1)/2)*(1LL))<<"\n";
//     }
// }