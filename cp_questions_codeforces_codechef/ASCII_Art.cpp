// // Problem: ASCII Art
// // Contest: Google Coding Competitions - Round A - Coding Competitions Farewell Rounds
// // URL: https://codingcompetitions.withgoogle.com/codejam/round/0000000000c95b94/0000000000cad9c2
// // Memory Limit: 1024 MB
// // Time Limit: 20000 ms
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

// bool isGreaterEqual(ll N, ll X)
// {
//     return (N * 1LL * (N + 1) / 2) <= X;
// }

// ll minimumPossible(ll X)
// {
 
//     ll low = 1, high = X, res = 0;
 
//     // Binary Search
//     while (low <= high) {
//         ll mid = low + (high - low) / 2;
 
//         // Checks if sum of first 'mid' natural
//         // numbers is greater than equal to X
//         if (isGreaterEqual(mid, X)) {
//             // Update res
//             res = mid;
//             // Update high
//             // high = mid - 1;
//             low = mid + 1;
//         }
//         else
//             // Update low
//             high = mid - 1;
//             // low = mid + 1;
//     }
//     return res;
// }

// int32_t main() {
//     fastio();
//     ll t;
//     cin>>t;
//     ll q{1};
//     while(t--) {
//         ll n;cin>>n;
//         ll z = n/26;
//         ll y = minimumPossible(z);
//         cout<<y<<"\n";
//         ll c = 26*((y*(y+1))/2);
//         cout<<y<<"\n";
//         n-=c;
//         y++;
//         n = (ll)ceil((1.0000*n)/y);
//         // int w = 
//         // cout<<n/100;
//         if(n==0) {cout<<"Case #"<<q<<": Z\n";q++;continue;}
//         n--;
//         char ch = 'A';
//         cout<<"Case #"<<q<<": "<<(char)('A'+n)<<"\n";q++;
//     }
// }