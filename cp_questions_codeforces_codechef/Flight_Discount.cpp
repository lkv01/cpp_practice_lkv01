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
// const int mod = 1e18 + 7;
 
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
//     // int t;
//     // cin>>t;
//     // while(t--) {
        
//     // }
//     int n,m;cin>>n>>m;
//     vector<pair<int,int>> graph[n+1];
//     vector<pair<int,int>> graph1[n+1];
    
//     map<pii,int> mp;
//     while(m--) {
//         int a,b,c;cin>>a>>b>>c;
//         graph[a].push_back({c,b});
//         graph1[b].push_back({c,a});
//         mp.insert({{a,b},c});
//     }
    
//     //minimum distance from 1------------------------------>
//     vector<int> dis(n+1,mod);dis[1] = 0;
//     set<pair<int,int>> s;
//     s.insert({0,1});
//     while(!s.empty()) {
//         auto it = *s.begin();
//         int wt = it.first;
//         int node = it.second;
//         s.erase(it);
//         for(auto child:graph[node]) {
//             int wt_child = child.first;
//             int node_child = child.second;
//             if(wt_child+wt < dis[node_child]) {
//                 if(s.find({dis[node_child],node_child}) != s.end()) {
//                     s.erase({dis[node_child],node_child});
//                 }
//                 dis[node_child] = wt_child+wt;
//                 s.insert({dis[node_child],node_child});
//             }
//         }
//     }

//     //minimum distance from n------------------------------>
//     vector<int> dis1(n+1,mod);dis1[n] = 0;
//     s.insert({0,n});
//     while(!s.empty()) {
//         auto it = *s.begin();
//         int wt = it.first;
//         int node = it.second;
//         s.erase(it);
//         for(auto child:graph1[node]) {
//             int wt_child = child.first;
//             int node_child = child.second;
//             if(wt_child+wt < dis1[node_child]) {
//                 if(s.find({dis1[node_child],node_child}) != s.end()) {
//                     s.erase({dis1[node_child],node_child});
//                 }
//                 dis1[node_child] = wt_child+wt;
//                 s.insert({dis1[node_child],node_child});
//             }
//         }
//     }

//     int min1{mod};
//     for(auto it : mp) {
//         min1 = min(min1,dis[it.first.first]+it.second/2+dis1[it.first.second]);
//     }
//     cout<<min1<<"\n";
// }