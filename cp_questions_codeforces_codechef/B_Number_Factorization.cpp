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

// void swap(int a,int b) {
//     a=a^b;
//     b=b^a;
//     a=a^b;
// }

// int32_t main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         mi m,m1;
//         for(int i{2} ; i*i<=n ; i++) {
//             if(n%i == 0) {
//                 while(n%i == 0) {
//                     m[i]++;n/=i;
//                 }
//             }
//         }
//         if(n>1) {m[n]++;}
// //-----------------------------------------------------------------
//         // for(auto it:m) {cout<<it.first<<" "<<it.second<<"\n";}
//         // cout<<"---------\n";
// //----------------------------------------------------------------
//         for(auto it:m) {
//             m1[it.second]=1;
//         }
//         for(auto it:m) {
//             m1[it.second]*=it.first;
//         }

//         int z{};
//         int ans{};
//         int z1{1};
//         for(auto it = m1.end() ; it != m1.begin() ; it--) {
//             auto it1 = it;it1--;
//             (it1->second)*=z1;z1=(it1->second);
//         }

//         // for(auto it:m1) {cout<<it.first<<" "<<it.second<<"\n";}
//         // cout<<"---------\n";
        
//         for(auto it:m1) {
//             ans+=(it.first - z)*(it.second);
//             z=it.first;
//         }
//         cout<<ans<<"\n";
//         // cout<<"----------\n";
//     }
// }