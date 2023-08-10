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
// // #include <vector>
// // #include <deque>
// // #include <set>
// // #include <map>
// // #include <algorithm>
// // typedef long long ll;
// // using namespace std;

// // #define Sort(v) sort(v.begin(),v.end())
// // const ll mod = 1e9 + 7;

// // void yesno(bool b) {if(b) cout << "Yes\n";else cout << "No\n";}
// // void YESNO(bool b) {if(b) cout << "YES\n";else cout << "NO\n";}

// // void fastio() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);  
// //     cout.tie(NULL); 
// // }

// // int main() {
// //     fastio();
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int n;cin>>n;
// //         vector<int> a;
// //         map<int,int> m;
// //         bool flag1 = true;
// //         int max1{};
// //         for(int i{} ; i<n ; i++) {
// //             int x;cin>>x;a.push_back(x);m[x]+=1;
// //             max1=max(max1,x);
// //         }
// //         for(auto it:m) {
// //             if((it.second) > 2) {
// //                 flag1 = false;
// //                 break;
// //             }
// //         }
// //         if(flag1==false) {cout<<"NO\n";continue;}
// // //------------------------------------------------------
// //         set<int> d;
// //         for(int i{1} ; i<max1 ; i++) {
// //             if(m[i]==0) {d.insert(i);}
// //             else continue;
// //         }
// // //--------------------------------------------------------
// //         map<int,pair<int,int>> m2;
// //         map<int,int> temp,temp1;
// //         for(int i{} ; i<n ; i++) {
// //             if(m[a[i]]>1) {
// //                 if(temp[a[i]]==0) {m2[a[i]].first = i;temp[a[i]]++;}
// //                 else {m2[a[i]].second = i;temp1[i]++;}
// //             }
// //         }
// // //--------------------------------------------------------
// //         vector<int> p(n),q(n);
// //         bool ok = true;
// //         for(int i{} ; i<n ; i++) {
// //             if(temp1[i]>0) continue;
// //             if(m[a[i]]==1) {
// //                 p[i]=q[i]=a[i];
// //             } else {
// //                 auto it = lower_bound(d.begin(),d.end(),a[i]);
// //                 if(it==d.begin()) {ok=false;break;}
// //                 else {
// //                     it--;
// //                     p[m2[a[i]].first]=(*it);q[m2[a[i]].first]=a[i];
// //                     p[m2[a[i]].second]=a[i];q[m2[a[i]].second]=(*it);
// //                     d.erase(it);
// //                 }
// //             }
// //         }
// //         if(ok==false) {
// //             cout<<"NO\n";continue;
// //         }
// // //------------------------------------------------------------
// //         cout<<"YES\n";
// //         for(auto elem:p) {
// //             cout<<elem<<" ";
// //         }
// //         cout<<"\n";
// //         for(auto elem:q) {
// //             cout<<elem<<" ";
// //         }
// //         cout<<"\n";
// //     }
// // }


// // Problem: C. Alyona and the Tree
// // Contest: Codeforces - (CR-1+CR-2) Graphs Long Challenge (Practice)
// // URL: https://codeforces.com/group/4sqVhW5GrJ/contest/434778/problem/C
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

// int sf(set<int> &s) {
//     auto it = s.begin();
//     return (*it);
// }


// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int t;cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         vi v(n+1);
//         for(int i{1} ; i<=n ; i++) {
//             cin>>v[i];
//         }
//         set<int> a,b;
//         for(int i{1} ; i<=n ; i++) {a.insert(i);b.insert(i);}
//         vi p(n+1),q(n+1);
//         priority_queue<pair<int,int>> pq;
//         for(int i{1} ; i<=n ; i++) {
//             pq.push({v[i],i});
//         }
//         bool ok = true;
//         while(!pq.empty()) {
//             int val = pq.top().first;
//             int i = pq.top().second;
//             if(a.find(val) != a.end()) {
//                 p[i] = val;a.erase(val);
//                 if(sf(b) <= val) {
//                     q[i] = sf(b);
//                     auto it = b.begin();b.erase(it);
//                 } else {
//                     ok = false;break;
//                 }
//             }
//             else if(b.find(val) != b.end()) {
//                 q[i] = val;b.erase(val);
//                 if(sf(a) <= val) {
//                     p[i] = sf(a);
//                     auto it = a.begin();a.erase(it);
//                 } else {
//                     ok = false;break;
//                 }
//             }
//             pq.pop();
//         }
//         print(p),print(q);
//         if(!ok) {cout<<"NO\n";continue;}
//         cout<<"YES\n";
//         for(int i{1} ; i<=n ; i++) {cout<<p[i]<<" ";}cout<<"\n";
//         for(int i{1} ; i<=n ; i++) {cout<<q[i]<<" ";}cout<<"\n";
//     }
// }