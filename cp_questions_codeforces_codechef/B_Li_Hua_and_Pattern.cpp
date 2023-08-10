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
// #include <set>.
// #include <map>
// #include <stack>
// #include <queue>
// #include <algorithm>
// #include <cmath>
// // #define int int64_t
// typedef long long ll;
// #define vi vector<int>
// #define mi map<int,int>
// #define pii pair<int,int>
// using namespace std;

// /* ->priority_queue is by default a Max Heap
//    ->to implement as a min heap use this:-

//     priority_queue <int, vector<int>, greater<int> > pq;
// */


// #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// #define Sort(v) sort(v.begin(),v.end())
// #define Reverse(v) reverse(v.begin(),v.end())
// const int mod = 1e9 + 7;

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

// /*following will help in sorting vector<pii> wrt second element(ascending order)*/
// bool sorta(const pii &a, const pii &b) { return (a.second < b.second); }

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
//     // lp_hp_sieve(int n);
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,k;cin>>n>>k;
//         vector<vector<int>> v(n,vector<int> (n,0));
//         vector<vector<int>> v1(n,vector<int> (n,0));
//         vector<vector<int>> vec(n,vector<int> (n,0));
//         for(int i{} ; i<n ; i++) {
//             for(int j{} ; j<n ; j++) {
//                 cin>>v[i][j];
//             }
//         }
//         // for(int i{0} ; i<n ; i++) {
//         //     for(int j{} ; j<(n-i) ; j++) {
//         //         if(v[i][j] == v[j][i]) {
//         //             continue;
//         //         } else {
//         //             if(k>0) {
//         //                 v[j][i] = v[i][j];k--;
//         //             }
//         //         }
//         //     }
//         // }
//         int cnt{};
//         for(int i{} ; i<(n/2) ; i++) {
//             for(int j{} ; j<(n) ; j++) {
//                 if((v[i][j] != v[n-1-i][n-1-j])) {
//                     v[i][j] = v[n-1-i][n-1-j];cnt++;
//                 }     
//             }
//         }
//         if(cnt>k) {
//             cout<<"NO\n";continue;
//         }
//         int z = k-cnt;
//         if(z%2 != 0) {cout<<"NO\n";continue;}
//         for(int i{} ; i<n ; i++) {
//             for(int j{} ; j<n ; j++) {
//                 vec[i][j] = v[i][j];
//             }
//         }
//         for(int i{0} ; i<n/2 ; i++) {
//             for(int j{} ; j<(n) ; j++) {
//                 swap(v[i][j],v[n-1-i][n-1-j]);
//             }
//         }
//         bool ok = true;
//         for(int i{0} ; i<n ; i++) {
//             for(int j{} ; j<(n) ; j++) {
//                 if(vec[i][j] != v[i][j]) {ok = false;break;}
//             }
//             if(!ok) {break;}
//         }
//         if(ok) {
//             cout<<"YES\n";
//         }
//         else {
//             cout<<"NO\n";
//         }
//     }
// }