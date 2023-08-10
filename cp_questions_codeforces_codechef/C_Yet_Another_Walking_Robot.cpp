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

// const int N = 1e6;
// // int n;
// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     // int t;
//     // cin>>t;
//     // while(t--) {
//     //     int min1{(int)1e9};
//     //     bool ok = false;
//     //     pair<int,int> p;
//     //     cin>>n;
//     //     string s;cin>>s;
//     //     map<pair<int,int>,int> m;
//     //     m.insert({{0,0},0});
//     //     int i{},j{};
//     //     for(int k{};  k<n ; k++) {
//     //         if(s[k]=='L') {
//     //             j--;
//     //         } else if(s[k]=='R') {
//     //             j++;
//     //         } else if(s[k]=='U') {
//     //             i++;
//     //         } else if(s[k]=='D') {
//     //             i--;
//     //         }

//     //         if(m.find({i,j}) != m.end()) {
//     //             if(k-m[{i,j}]+1<min1) {
//     //                 ok = true;
//     //                 p = {m[{i,j}]+1,k+1};
//     //                 min1 = k-m[{i,j}]+1;
//     //                 m[{i,j}] = k+1;
//     //             }
//     //         } else {
//     //             m.insert({{i,j},k+1});
//     //         }
//     //     }
//     //     if(!ok) {cout<<"-1\n";}
//     //     else {
//     //         cout<<p.first<<" "<<p.second<<"\n";
//     //     }
//     // }

//     int t;
// 	cin >> t;
// 	while (t--) {
// 		int n;
// 		string s;
// 		cin >> n >> s;
// 		int l = -1, r = n;
// 		map<pair<int, int>, int> vis;
// 		pair<int, int> cur = {0, 0};
// 		vis[cur] = 0;
// 		for (int i = 0; i < n; ++i) {
// 			if (s[i] == 'L') --cur.first;
// 			if (s[i] == 'R') ++cur.first;
// 			if (s[i] == 'U') ++cur.second;
// 			if (s[i] == 'D') --cur.second;
// 			if (vis.count(cur)) {
// 				if (i - vis[cur] + 1 < r - l + 1) {
// 					l = vis[cur];
// 					r = i;
// 				}
// 			}
// 			vis[cur] = i + 1;
// 		}
// 		if (l == -1) {
// 			cout << -1 << endl;
// 		} else {
// 			cout << l + 1 << " " << r + 1 << endl;
// 		}
// 	}
// }