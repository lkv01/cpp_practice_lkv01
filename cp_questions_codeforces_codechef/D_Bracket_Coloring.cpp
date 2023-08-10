// // Problem: D. Bracket Coloring
// // Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// // URL: https://codeforces.com/contest/1837/problem/D
// // Memory Limit: 512 MB
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

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int test;
//     cin>>test;
//     while(test--) {
//         int n;cin>>n;
//         string str;cin>>str;
//         if(n%2 != 0) {cout<<"-1\n";continue;}
//         stack<char> st1;
//         stack<char> st2;
//         // set<string> _set;
//         // int cnt1{},cnt2{};

//         set<int> ind;
//         vector<int> ans;
//         for(int i{} ; i<n ; i++) {
//             if(st1.empty()) {
//                 // cout<<"lkv\n";
//                 if(str[i]=='(') {st1.push('(');}
//                 else {st2.push(')');ind.insert(i);}
//             } else if(!st1.empty()) {
//                 if(str[i]=='(') {st1.push('(');}
//                 else {st1.pop();}
//             }
//             // cout<<st1.size()<<" "<<st2.size()<<"\n";
//         }
//         // cout<<st1.size()<<" "<<st2.size()<<"---------------\n";
//         if(!st1.empty()) {
//             if(st1.size() != st2.size()) {cout<<"-1\n";continue;}
//             for(int i{} ; i<n ; i++) {
//                 if(ind.find(i) != ind.end()) {ans.push_back(2);}
//                 else {ans.push_back(1);}
//             }
//             // print(ans);
//             int cnt = st2.size();
//             for(int i{n-1} ; i>=0 ; i--) {
//                 if(str[i]=='(') {ans[i]=2;cnt--;}
//                 if(cnt==0) {break;}
//             }
//             // cout<<ans.size()<<"\n";
//             set<int> _set;
//             for(auto elem:ans) {
//             	_set.insert(elem);
//             }
//             if(_set.size()==1) {
//             	for(int i{} ; i<n ; i++) {
// 	                ans[i]=1;
// 	            }
//             }
//             cout<<_set.size()<<"\n";
// 			print(ans);
//         } else {
//             if(!st2.empty()) {
//                 cout<<"-1\n";continue;
//             } else {
//             	cout<<1<<"\n";
//             	for(int i{} ; i<n ; i++) {
// 	                ans.push_back(1);
// 	            }
//                 print(ans);
//             }
//         }
//     }
// }