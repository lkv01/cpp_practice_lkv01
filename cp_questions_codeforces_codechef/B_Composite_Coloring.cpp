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
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         vector<int> vec;
//         set<int> st;
//         vector<int> v(n);
//         for(int i{} ; i<n ; i++) cin>>v[i];
//         map<int,int> m;
//         int x{2};
//         vec.push_back(1);
//         m[1]+=v[0];
//         for(int i{1} ; i<n ; i++) {
//             bool ok=false;
//             for(auto it = m.begin() ; it != m.end() ; it++) {
//                 if(__gcd(v[i],it->second) > 1) {
//                     (it->second)=__gcd(v[i],it->second);
//                     vec.push_back(it->first);st.insert(it->first);
//                     ok=true;break;
//                 }
//             }
//             if(!ok) {
//                 m[x]+=v[i];vec.push_back(x);st.insert(x);x++;
//             }
//         }
//         cout<<st.size()<<"\n";
//         for(auto elem:vec) {
//             cout<<elem<<" ";
//         }
//         cout<<"\n";
//     }
// }