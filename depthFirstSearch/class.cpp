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
// // #define int int64_t
// typedef long long ll;
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

// //******dfs algorith(graph traversal algorithm)...................
// // having time complexity O(v+e)----------------------------
// const int N = 1e5+10;
// vector<int> finish_time(N);
// vector<int> vis_time(N);
// vector<int> graph1[N];
// vector<int> indegree(N);
// vector<int>  prob
// bool visited[N];
// int i{1};
// vector<int> gcd(N);
// void dfs(int vertex) {
//     visited[vertex] = true;
//     vis_time[vertex]=i;i++;
//     for(int child : graph1[vertex]) {
//         if(!visited[child]) {
//             dfs(child);
//             gcd[vertex]=__gcd(gcd[vertex],gcd[child]);
//         }
//     }
//     finish_time[vertex]=i;i++;
// }
// //*****************************************************************

// void dfs(int vertex) {
//     visited[vertex]=terminate
// }

// int32_t main() {
//     fastio();
//     int n;cin>>n;
//     for(int i{} ; i<n ; i++) {
//         int x,y;cin>>x>>y;
//         graph1[x].push_back(y);
//         indegree[y]++;
//     }
//     queue<int> q;
//     for(int i{} ; i<n ; i++) {
//         if(indegree[i]==0) {q.push(i);}
//     }

// }