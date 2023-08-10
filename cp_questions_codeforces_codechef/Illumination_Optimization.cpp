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

// //check ques "modulo lena hai ya nhi" :)

// bool cmp(pii a,pii b) {
//     if(a.first != b.first) {
//         if(a.first>b.first) {return false;}
//         return true;
//     } else {
//         if(a.second<b.second) {return false;}
//         return true;
//     }
// }

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int t;
//     cin>>t;
//     int q{1};
//     while(t--) {
//         int l,r,n;cin>>l>>r>>n;
//         vector<pii> vp;
//         vi start,finish;
//         mi m;
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;
//             vp.push_back({max(0,x-r),min(l,x+r)});
//             start.push_back(max(0,x-r));
//             finish.push_back(min(l,x+r));
//             m[max(0,x-r)] = min(l,x+r);
//         }
//         // print(start);print(finish);
//         if(vp[0].first != 0) {cout<<"Case #"<<q<<": IMPOSSIBLE\n";q++;continue;}
//         int z = m[0];
//         bool ok = true;
//         int cnt{1};
//         // cout<<z<<"\n";
//         if(z == l) {cout<<"Case #"<<q<<": 1\n";q++;continue;}
//         while(1) {
//             auto it = UpperBound(start,z);
//             it--;
//             if(m[(*it)] == z) {ok = false;break;}
//             z = m[*it];cnt++;
//             if(z==l) {break;}
//         }
//         if(!ok) {cout<<"Case #"<<q<<": IMPOSSIBLE\n";q++;continue;}
//         cout<<"Case #"<<q<<": "<<cnt<<"\n";
//         q++;

//         // int y{};
//         // int z1{};
//         // for(int i{z1} ; i<=z ; i++) {
//         //     y = m[start[i]];
//         // }
//         // z1 = z;
//         // z = y;
//     }
// }