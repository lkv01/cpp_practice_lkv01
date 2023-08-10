// // // #include <iostream>
// // // #include <vector>
// // // #include <map>
// // // #include <algorithm>
// // // typedef long long ll;
// // // const int N = 2e5+10;

// // // using namespace std;

// // // map<ll,ll> m;
// // // vector<int> lp(N,0);

// // // void sieve() {
// // //     vector<int> isPrime(N,1);
// // //     isPrime[0] = isPrime[1] = 0;
// // //     for(int i{2} ; i<N ; i++) {
// // //         if(isPrime[i]==1) {
// // //             lp[i] = i;
// // //             for(int j{2*i} ; j<N ; j+=i) {
// // //                 isPrime[j] = 0;
// // //                 if(lp[j]==0) {
// // //                     lp[j] = i;
// // //                 }
// // //             }
// // //         }
// // //     }
// // // }

// // // int main() {
// // //     sieve();
// // //     int n;
// // //     cin>>n;
// // //     int arr[n] = {};
// // //     for(int i{} ; i<n ; i++) {
// // //         cin>>arr[i];
// // //     }
// // //     for(int i{} ; i<n ; i++) {
// // //         int z = arr[i];
// // //         while(z>1) {
// // //             int w = lp[z];
// // //             while(z%w == 0) {
// // //                 z/=w;
// // //                 m[w]++;
// // //             }
// // //         }
// // //         if(z==1) {m[1]++;}
// // //     }

// // //     int t;
// // //     cin>>t;
// // //     while(t--) {
// // //         int p,q;
// // //         cin>>p>>q;
// // //         ll lcm1 = (p*1LL*q)/(__gcd(p,q));
// // //         cout<<(m[p]+m[q]-m[lcm1])<<"\n";
// // //     }
// // // }


// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // const int N = 2e5+10;
// // // int hsh[N];
// // // int main() {
// // // 	int n;
// // // 	cin>>n;
// // // 	while(n--) {
// // // 		int x;
// // // 		cin>>x;
// // // 		hsh[x]++;
// // // 	}

// // // 	int no_of_multiples[N] = {};

// // // 	for(int i{1} ; i<N ; i++) {
// // // 		for(int j{i} ; j<N ; j+=i) {
// // // 			no_of_multiples[i] += hsh[j];
// // // 		}
// // // 	}

// // // 	int t;
// // // 	cin>>t;
// // // 	while(t--) {
// // // 		int p,q;
// // // 		cin>>p>>q;
// // // 		int ans = no_of_multiples[p] + no_of_multiples[q];
// // // 		long long int lcm = (p * 1ll * q)/__gcd(p,q);
// // // 		if(lcm<N) {
// // // 			ans-= no_of_multiples[lcm];
// // // 		}
// // // 		cout<<ans<<"\n";
// // // 	}
// // // }


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
// // #include <cmath>
// // // #define int int64_t
// // typedef long long ll;
// // #define vi vector<int>
// // #define mi map<int,int>
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

// // void print(vector<int> v) {
// //     for(auto elem:v) {
// //         cout<<elem<<" ";
// //     }
// //     cout<<"\n";
// // }

// // /* Iterative Function to calculate (x^y)%p in O(log y) */
// // int power(int x, int y, int p) {
// //     int res = 1;              // Initialize result
// //     x = x % p;                // Update x if it is more than or equal to p
// //     if (x == 0) return 0;     // In case x is divisible by p;
// //     while (y > 0) {
// //         // If y is odd, multiply x with result
// //         if (y & 1)
// //             res = (res*x) % p;
 
// //         // y must be even now
// //         y = y>>1; // y = y/2
// //         x = (x*x) % p;
// //     }
// //     return res;
// // }

// // /* Function to find modulo inverse of A in O(log M)).
// //   ->This approach uses Fermat's Little Theorem.
// //   ->used only when M is prime */
// // int modInverse(int A,int M) {
// //     return power(A,M-2,M);
// // }

// // /*    typecasting 
// //     65---char--->'A'              97---char--->'a'
// //     65<--int-----'A'              97<--int-----'a'
// //     48---char--->'0'
// //     48<--int-----'0'
// // */

// // void swap(int a,int b) {
// //     a=a^b;
// //     b=b^a;
// //     a=a^b;
// // }
// // const int N = 1e5+10;
// // int32_t main() {
// //     fastio();
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int n;cin>>n;
// //         vi v(n);mi m,m1;
// //         for(int i{} ; i<n ; i++) {cin>>v[i];m[v[i]]++;}
// //         for(int i{2} ; i<N ; i++) {
// //             for(int j{i} ; j<N ; j+=i) {
// //                 m1[i]+=m[j];
// //             }
// //         }
// //         int q;cin>>q;
// //         while(q--) {
// //             int x,y;cin>>x>>y;
// //             int lcm = (x*y)/__gcd(x,y);
// //             cout<<(m1[x]+m1[y]-m1[lcm])<<"\n";
// //         }
// //     }
// // }

// //------------------------------------------------------------------------------------
// //correct code is as follows:-
// /*note1: used hsh array instead of map(above code was giving TLE in some constraints but
//          following code gives AC.)
//   note2: be careful about limits of hsh array because we can get Runtime error.
// */
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
// const int N = 2e5+10;
// int m[N+1];
// int m1[N+1];
// int32_t main() {
//     fastio();
//     int n;cin>>n;
//     for(int i{} ; i<n ; i++) {int x;cin>>x;m[x]++;}
//     for(int i{1} ; i<N ; i++) {
//         for(int j{i} ; j<N ; j+=i) {
//             m1[i]+=m[j];
//         }
//     }
//     int q;cin>>q;
//     while(q--) {
//         int x,y;cin>>x>>y;
//         int lcm = (x*y)/__gcd(x,y);
// 		if(lcm<=N) {cout<<(m1[x]+m1[y]-m1[lcm])<<"\n";continue;}
//         cout<<(m1[x]+m1[y])<<"\n";
//     }
// }