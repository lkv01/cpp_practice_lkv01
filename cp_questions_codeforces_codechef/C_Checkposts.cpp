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
// const int N = 1e5+10;
// stack<int> st;
// void dfs(int v,vector<int> graph[],vector<bool> &visited) {
//     visited[v] = true;
//     for(auto child:graph[v]) {
//         if(!visited[child]) {
//             dfs(child,graph,visited);
//         }
//     }
//     st.push(v);
// }

// vi cost;
// void dfs1(int v,vector<int> graph[],vector<bool> &visited,int &min_cost,int &no) {
//     visited[v] = true;
//     if(min_cost==cost[v]) {no++;}
//     if(min_cost>cost[v]) {min_cost = cost[v];no = 1;}
//     for(auto child:graph[v]) {
//         if(!visited[child]) {
//             dfs1(child,graph,visited,min_cost,no);
//         }
//     }
// }

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     // int t;
//     // cin>>t;
//     // while(t--) {
        
//     // }
//     int n;cin>>n;
//     cost.push_back(0);
//     for(int i{} ; i<n ; i++) {int x;cin>>x;cost.push_back(x);}
//     int m;cin>>m;
//     vector<int> graph[n+1];
//     vector<bool> visited(n+1);
//     while(m--) {
//         int u,v;cin>>u>>v;
//         graph[u].push_back(v);
//     }
//     //dont call dfs like below--!!!!!
//     // dfs(1,graph,visited);

//     //dfs should always be called in main like below----:)
//     for(int i{1} ; i<=n ; i++) {
//         if(!visited[i]) {
//             dfs(i,graph,visited);
//         }
//     }

//     vector<int> graph1[n+1];
//     vector<bool> visited1(n+1);
//     for(int i{1} ; i<=n ; i++) {
//         for(auto elem:graph[i]) {
//             graph1[elem].push_back(i);
//         }
//     }

//     int ans1{},ans2{1};
//     // stack<int> _s = st;
//     // while(!_s.empty()) {cout<<_s.top()<<" ";_s.pop();}
//     // cout<<"\n";
//     while(!st.empty()) {
//         int z = st.top();
//         st.pop();
//         int min_cost{mod},no{1};
//         if(!visited1[z]) {
//             dfs1(z,graph1,visited1,min_cost,no);
//             ans1+=min_cost;
//             ans2*=no;
//             // cout<<min_cost<<" "<<no<<"\n";
//         }
//     }
//     cout<<ans1<<" "<<ans2<<"\n";
// }