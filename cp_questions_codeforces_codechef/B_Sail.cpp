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
//     int t,a,b,c,d;
//     cin>>t>>a>>b>>c>>d;
//     string s;cin>>s;
//     map<char,int> m;
//     if(a<c) {m['E']+=(c-a);}
//     else if(a>c) {m['W']+=(a-c);}
//     if(b<d) {m['N']+=(d-b);}
//     else if(b>d) {m['S']+=(b-d);}
//     int max1{};bool ok1=true;
//     for(auto it = m.begin() ; it != m.end() ; it++) {
//         bool ok=false;
//         int i{};
//         for( ; i<t ; i++) {
//             if(s[i]==(it->first)) {
//                 (it->second)--;
//                 if((it->second)==0) {ok=true;break;}
//             }
//         }
//         if(!ok) {ok1=false;break;}
//         else {
//             max1=max(max1,(i+1));
//         }
//     }
//     if(!ok1) {cout<<"-1\n";}
//     else {cout<<max1<<"\n";}
// }