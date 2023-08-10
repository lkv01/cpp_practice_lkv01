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
// // #include <queue>
// // #include <algorithm>
// // #include <cmath>
// // // #define int int64_t
// // typedef long long ll;
// // #define vi vector<int>
// // #define mi map<int,int>
// // #define pii pair<int,int>
// // using namespace std;

// // /* ->priority_queue is by default a Max Heap
// //    ->to implement as a min heap use this:-

// //     priority_queue <int, vector<int>, greater<int> > pq;
// // */


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

// // void swap(int &a,int &b) {
// //     a=a^b;
// //     b=b^a;
// //     a=a^b;
// // }

// // // //....algorithm....................
// // // vector<bool> is_prime(N+1,1);
// // // vector<int> hp(N+1,1);
// // // vector<int> lp(N+1,1);
// // // void lp_hp_sieve(int n) {
// // //     is_prime[1] = false;
// // //     for(int i{2} ; i<n ; i++) {
// // //         if(is_prime[i] == true) {
// // //             hp[i] = i;
// // //             lp[i] = i;
// // //             for(int j{2*i} ; j<n ; j+=i) {
// // //                 is_prime[j] = false;
// // //                 hp[j] = i;
// // //                 if(lp[j] == true) {
// // //                     lp[j] = i;
// // //                 }
// // //             }
// // //         }
// // //     }
// // // }
// // // //.................................

// // const int N = 4e5+10;
// // vi graph[N];
// // vi level1(N);
// // vi hsh(N);
// // int val{},max1{-1};
// // void dfs(int v,int par) {
// //     for(auto child:graph[v]) {
// //         if(child != par) {
// //             level1[child] = level1[v]+1;
// //             hsh[level1[child]]++;
// //             if(level1[child] > max1) {val = child;max1 = level1[child];}
// //             dfs(child,v);
// //         }
// //     }
// // }

// // vi from(N);
// // void dfs2(int v,int par) {
// //     for(auto child:graph[v]) {
// //         if(child != par) {
// //             from[child] = v;
// //             dfs2(child,v);
// //         }
// //     }
// // }

// // int32_t main() {
// //     fastio();
// //     // lp_hp_sieve(int n);
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int n,k;cin>>n>>k;
// //         //-------------------------------------------
// //         for(int i{} ; i<=n ; i++) {
// //             graph[i].clear();
// //             level1[i]=0;
// //             from[i]=0;
// //             hsh[i]=0;
// //         }
// //         val = 0;max1 = 0;
// //         //-------------------------------------------
// //         for(int i{} ; i<(n-1) ; i++) {
// //             int x,y;cin>>x>>y;
// //             graph[x].push_back(y);graph[y].push_back(x);
// //         }
// //         //finding diameter
// //         dfs(1,0);int v1 = val;
// //         dfs(val,0);int v2 = val;
// //         cout<<v1<<" "<<v2<<"\n";
// //         // cout<<"lkv\n";
// //         dfs2(v1,0);
// //         vi vec;
// //         while(from[v2] != 0) {
// //             vec.push_back(v2);
// //             v2 = from[v2];
// //         }
// //         vec.push_back(v1);
// //         print(vec);

// //         for(int i{} ; i<=n ; i++) {level1[i]=0;hsh[i]=0;}

// //         int m = vec.size();
// //         if(m%2 != 0) {
// //             level1[vec[m/2]] = 0;
// //             dfs(vec[m/2],0);
// //         } else {
// //             level1[vec[m/2]] = 0;level1[vec[(m/2) - 1]] = 0;
// //             dfs(vec[m/2],vec[(m/2)-1]);
// //             dfs(vec[(m/2)-1],vec[m/2]);
// //         }

// //     }
// // }


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

// const int N = 4e5+10;
// set<int> graph[N];
// vi degree(N);
// vi val(N,-1);

// int sf(set<int> &s) {
//     auto it = s.begin();
//     return (*it);
// }

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,k;cin>>n>>k;

//         // -------------------------------------------
//         for(int i{} ; i<=n ; i++) {
//             graph[i].clear();
//             degree[i]=0;
//             val[i]=-1;
//         }
//         //-------------------------------------------

//         for(int i{} ; i<(n-1) ; i++) {
//             int x,y;cin>>x>>y;
//             graph[x].insert(y);graph[y].insert(x);
//             degree[x]++;degree[y]++;
//         }
        
//         queue<int> q;
//         for(int i{1} ; i<=n ; i++) {
//             if((degree[i]==1)||(degree[i]==0)) {q.push(i);}
//         }
//         // cout<<q.size()<<"---------\n";
//         set<int> s;
//         for(int i{1} ; i<=n ; i++) {s.insert(i);}
//         while(k--) {
//             int qs = q.size();
//             while(qs--) {
//                 int qf = q.front();
//                 q.pop();val[qf]=0;
//                 degree[qf]--;
//                 graph[qf].erase(qf);
//                 degree[sf(graph[qf])]--;
//                 if((degree[sf(graph[qf])]==1)||(degree[sf(graph[qf])]==0)) {q.push(sf(graph[qf]));}

//                 // if(degree[graph[qf].front()] == 0) {s.erase(graph[qf].front());}
//             }
//         }
//         int ans{};
//         for(int i{1} ; i<=n ; i++) {
//             if(val[i]==-1) {ans++;}
//         }
//         cout<<ans<<"\n";
//     }
// }