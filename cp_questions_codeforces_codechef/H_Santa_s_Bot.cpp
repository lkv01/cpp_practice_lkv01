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
// #define int int64_t
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

// /* Function to find modulo inverse of A in O(log M)). */
// int modInverse(int A,int M) {
//     return power(A,M-2,M);
// }

// const int N = 1e6+10;
// int hsh[N];
// const int M = 998244353;

// int32_t main() {
//     fastio();
//     int n;cin>>n;
//     vector<vector<int>> v;
//     for(int i{}; i<n ; i++) {
//         vector<int> vec;
//         int k;cin>>k;vec.push_back(k);
//         for(int i{} ; i<k ; i++) {int x;cin>>x;hsh[x]++;vec.push_back(x);}
//         v.push_back(vec);
//     }
//     int den{};
//     for(int i{} ; i<n ; i++) {
//         den+=v[i][0];
//     }
//     den*=(n);
//     int num{};
//     for(int i{} ; i<n ; i++) {
//         for(int j{1} ; j<=v[i][0] ; j++) {
//             {num+=(hsh[v[i][j]]);}
//         }
//     }
//     cout<<num<<" "<<den<<"\n";
//     int ans = (((num%M) * (modInverse(den,M)%M))%M);
//     cout<<ans<<"\n";
// }