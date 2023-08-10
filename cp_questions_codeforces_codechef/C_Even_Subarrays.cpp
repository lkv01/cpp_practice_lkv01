// // /*
// //         L               K      K     V           V
// //         L               K    K        V         V
// //         L               K  K           V       V
// //         L               KK              V     V
// //         L               K  K             V   V
// //         L               K    K            V V
// //         L L L L L L     K      K           V    
// // */

// // #include <iostream>
// // #include <string>
// // #include <vector>
// // #include <deque>
// // #include <list>
// // #include <set>
// // #include <map>
// // #include <stack>
// // #include <algorithm>
// // typedef long long ll;
// // using namespace std;

// // #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// // #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// // #define Sort(v) sort(v.begin(),v.end())
// // #define Reverse(v) reverse(v.begin(),v.end())
// // const ll mod = 1e9 + 7;

// // void fastio() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);  
// //     cout.tie(NULL); 
// // }

// // const int N = 4e5+10;


// // int main() {
// //     fastio();
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int n;cin>>n;
// //         vector<int> sq,a(n),pre(n),hsh(2*n);
// //         for(int i{} ; (i*i)<(2*n) ; i++) {
// //             sq.push_back(i*i);
// //         }
// //         for(int i{} ; i<n ; i++) {cin>>a[i];}
// //         pre[0]=a[0];
// //         for(int i{1} ; i<n ; i++) {pre[i] = pre[i-1]^a[i];}
// //         int cnt{};
// //         hsh[0]++;
// //         for(int i{} ; i<n ; i++) {
// //             for(auto elem:sq) {
// //                 if(pre[i]==elem)cnt++;
// //                 int z =pre[i]^elem;
// //                 if(z<2*n) {cnt+=hsh[z];}
// //                 hsh[pre[i]]++;
// //             }
// //         }
// //         cout<<(((n*(n+1))/2)-cnt)<<"\n";
// //     }
// // }

// // Problem: B. Ant on the Tree
// // Contest: Codeforces - (CR-1+CR-2) Graphs Long Challenge (Practice)
// // URL: https://codeforces.com/group/4sqVhW5GrJ/contest/434778/problem/B
// // Memory Limit: 256 MB
// // Time Limit: 2000 ms
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
// #include <queue>
// #include <algorithm>
// #include <cmath>
// // #define int int64_t
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

// void print(vector<int> v) {
//     for(auto elem:v) {
//         cout<<elem<<" ";
//     }
//     cout<<"\n";
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
//     int t;cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         vi psq;
//         for(int i{} ; i*i<=(2*n) ; i++) {
//             psq.push_back(i*i);
//         }
//         vi v(n);
//         for(int i{} ; i<n ; i++) {cin>>v[i];}

//         vi hsh(2*n);
//         hsh[0]++;
//         int x{};
//         int cnt{};
//         for(int i{} ; i<n ; i++) {
//             x^=v[i];
//             for(int j{} ; j<psq.size() ; j++) {
//                 if(((psq[j]^x)<2*n) && (hsh[psq[j]^x]>0)) {
//                     cnt+=hsh[psq[j]^x];
//                     // cout<<psq[j]<<" "<<x<<" "<<(psq[j]^x)<<"\n";
//                 }
//             }
//             // cout<<"\n";
            
//             hsh[x]++;
//             // cout<<x<<" "<<cnt<<"\n";
//         }
//         cout<<(n*(n+1))/2 - cnt<<"\n";
//     }
// }