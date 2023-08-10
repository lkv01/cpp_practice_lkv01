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
//         vector<int> v(n);
//         for(int i{} ; i<n ; i++) {cin>>v[i];}
//         Sort(v);
//         int z{};
//         int p{};
//         int min1{(int)1e9};
//         for(int i{} ; i<(n-1) ; i++) {
//             if((v[i]==0)&&(i<(n-2))) {continue;}
//             if((v[i]==0)&&(i==(n-2))) {z+=1;v[n-1]=0;p=z;min1=min(min1,z);break;}
//             z+=v[i];
//             v[i+1]-=v[i];v[i]=0;
//             int ans{};
//             if(v[i+1]==0) {ans+=n-1-(i+1);}
//             else {ans+=n-(i+1);}
//             min1 = min(min1,ans+z);
//         }
//         if(v[n-1]>0) z+=1;
//         min1=min(min1,z);
//         cout<<min(min1,n)<<"\n";
//     }
// }