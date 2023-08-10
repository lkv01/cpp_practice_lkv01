// // Problem: A. Manu and Game
// // Contest: Codeforces - Adapt-a-Code
// // URL: https://codeforces.com/group/rKSKMJeEq4/contest/435725/problem/A
// // Memory Limit: 256 MB
// // Time Limit: 1000 ms
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
// #define int int64_t
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
//     int t;
//     cin>>t;
//     while(t--) {
//         // int n,m;cin>>n>>m;
//         string n,mm;cin>>n>>mm;
//         int z = n.back()-'0';
//         // int z = n%10;
//         if((z == 0) || (z == 1) ||(z == 5)||(z == 6)) {
//             cout<<z<<"\n";continue;
//         }
//         int m = mm.back()-'0';
//         if(z==2) {
//             if(m%4 == 1) {cout<<"2";cout<<"\n";continue;}
//             if(m%4 == 2) {cout<<"4";cout<<"\n";continue;}
//             if(m%4 == 3) {cout<<"8";cout<<"\n";continue;}
//             if(m%4 == 0) {cout<<"6";cout<<"\n";continue;}
//         }
//         if(z==3) {
//             if(m%4 == 1) {cout<<"3";cout<<"\n";continue;}
//             if(m%4 == 2) {cout<<"9";cout<<"\n";continue;}
//             if(m%4 == 3) {cout<<"7";cout<<"\n";continue;}
//             if(m%4 == 0) {cout<<"1";cout<<"\n";continue;}
//         }
//         if(z==7) {
//             if(m%4 == 1) {cout<<"7";cout<<"\n";continue;}
//             if(m%4 == 2) {cout<<"9";cout<<"\n";continue;}
//             if(m%4 == 3) {cout<<"3";cout<<"\n";continue;}
//             if(m%4 == 0) {cout<<"1";cout<<"\n";continue;}
//         }
//         if(z==8) {
//             if(m%4 == 1) {cout<<"8";cout<<"\n";continue;}
//             if(m%4 == 2) {cout<<"4";cout<<"\n";continue;}
//             if(m%4 == 3) {cout<<"2";cout<<"\n";continue;}
//             if(m%4 == 0) {cout<<"6";cout<<"\n";continue;}
//         }
//         if(z==4) {
//             if(m%2 == 1) {cout<<"4";cout<<"\n";continue;}
//             if(m%2 == 0) {cout<<"6";cout<<"\n";continue;}
//         }
//         if(z==9) {
//             if(m%2 == 1) {cout<<"9";cout<<"\n";continue;}
//             if(m%2 == 0) {cout<<"1";cout<<"\n";continue;}
//         }
//         cout<<"\n";
//     }
// }