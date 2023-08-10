/*                                  LKV                                  */

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

// // bool r(int i,int target ,vector<int> &arr,vector<vector<int>> &dp) {
// //     if(target == 0) return true;
// //     if(i==0) return (arr[0]==target);
// //     if(dp[i][target] != -1) return dp[i][target];
// //     bool not_take = r(i-1,target,arr,dp);
// //     bool take = false;
// //     if(target>=arr[i]) take = r(i-1,target-arr[i],arr,dp);
// //     return dp[i][target] = not_take||take;
// // }

// bool r(int n,int sum ,vector<int> &arr)
// {
//     // The value of subset[i][j] will be true if
//     // there is a subset of set[0..j-1] with sum
//     // equal to i
//     bool subset[n + 1][sum + 1];
 
//     // If sum is 0, then answer is true
//     for (int i = 0; i <= n; i++)
//         subset[i][0] = true;
 
//     // If sum is not 0 and set is empty,
//     // then answer is false
//     for (int i = 1; i <= sum; i++)
//         subset[0][i] = false;
 
//     // Fill the subset table in bottom up manner
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= sum; j++) {
//             if (j < arr[i - 1])
//                 subset[i][j] = subset[i - 1][j];
//             if (j >= arr[i - 1])
//                 subset[i][j] = subset[i - 1][j]
//                                || subset[i - 1][j - arr[i - 1]];
//         }
//     }
 
//     /*   // uncomment this code to print table
//      for (int i = 0; i <= n; i++)
//      {
//        for (int j = 0; j <= sum; j++)
//           printf ("%4d", subset[i][j]);
//        cout <<"\n";
//      }*/
 
//     return subset[n][sum];
// }

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int t;
//     cin>>t;
//     while(t--) {
//         // int n;cin>>n;
//         // vector<vector<int>> dp(n+10,vector<int> (k+10,-1));
//     // return r(n-1,k,arr,dp);
//         int n;cin>>n;
//         vi v;
//         // multiset<int> s;
//         int k{};
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;v.push_back(x);s.insert(x);k+=x;
//         }
//         // vector<vector<int>> dp(n+10,vector<int> (k+10,-1));
//         if((n==1) && (v[0]!=1)) {cout<<"NO\n";continue;}
//         if((n==1) && (v[0]==1)) {cout<<"YES\n";continue;}
//         Sort(v);Reverse(v);
//         // if(s.find(1) == s.end()) {cout<<"NO\n";continue;}
//         bool ok = true;
//         while(!v.empty()) {
//             ok &= r(n-1,k,v);v.pop_back();
//         }
//         if(ok) cout<<"YES\n";
//         else {cout<<"NO\n";}
//     }
// }