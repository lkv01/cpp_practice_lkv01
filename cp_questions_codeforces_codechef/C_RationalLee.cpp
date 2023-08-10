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
// const int MN = 2e5+7;

// vector<int> v[MN];
// int32_t main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         // int n,k;cin>>n>>k;
//         // vi a(n),w(k);
//         // int count1{};
//         // for(int i{} ; i<n ; i++) cin>>a[i];
//         // for(int i{} ; i<k ; i++) {cin>>w[i];if(w[i]==1) {count1++;}};
//         // Sort(a);Sort(w);
//         // Reverse(a);
//         // int ans{};
//         // for(int i{} ; i<count1 ; i++) {
//         //     ans+=a[i];
//         // }
//         // ans*=2;
//         // for(int j{} ; j<k ; j++) {
//         //     if(w[j]!=1) {ans+=a[count1];count1++;}
//         // }
//         // Sort(a);
//         // int i{};
//         // for(int j{} ; j<k ; j++) {
//         //     if(w[j]!=1) {ans+=a[i];i+=(w[j]-1);}
//         // }
//         // cout<<ans<<"\n";
//         int n, k;
//         cin >> n >> k;
//         for(int i = 0; i <= n; i++)v[i].clear();
//         ll a[n], w[k];
//         for(int i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         for(int i = 0; i < k; i++){
//             cin >> w[i];
//         }
//         sort(w, w+k);
//         sort(a, a+n);
//         for(int i = 0; i < k/2; i++)swap(w[i], w[k-i-1]);
//         int po = 0;
//         for(int i = 0; i < n-k; i++){
//             while(w[po] == v[po].size()+1)po++;
//             v[po].push_back(a[i]);
//         }
//         ll ans = 0;
//         int qf = 1;
//         for(int i = 0; i < k; i++){
//             ans += a[n-i-1];
//             if(v[i].size())ans += v[i][0];
//             else ans += a[n-qf], qf++;
//         }
        
//         cout << ans << '\n';
//     }
// }