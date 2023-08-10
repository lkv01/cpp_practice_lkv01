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

// int32_t main() {
//     fastio();
//     int n,w;cin>>n>>w;
//     vector<int> v(n),pre(n);
//     for(int i{} ; i<n ; i++) cin>>v[i];
//     pre[0]=v[0];
//     int max1{(int)-1e9},min1{(int)1e9};
//     for(int i{1} ; i<n ; i++) {pre[i]=pre[i-1]+v[i];}
//     for(int i{} ; i<n ; i++) {
//         max1 = max(max1,pre[i]);
//         min1 = min(min1,pre[i]);
//     }
//     int x{},y{w}; 
//     if(max1>=0) y = w-max1;
//     if(min1<0) x = (-1)*min1;
//     int z = y-x+1;
//     if(z<0) z=0;
//     cout<<z<<"\n";
// }