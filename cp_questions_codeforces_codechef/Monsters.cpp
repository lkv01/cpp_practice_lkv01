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

// // const int N = 2e5+10;
// // vector<int> graph[N];
// // vector<bool> visited(N);
// // vi level(N);
// // vi how(N);

// int n,m;
// bool in_range(int i,int j) {
//     if(i<0 || j<0 || i>=n || j>=m) {return false;}
//     return true;
// }
// char v[1000][1000];
// vector<vector<int>> lm (1000,vector<int> (1000,mod));
// vector<vector<int>> la (1000,vector<int> (1000,mod));
// vector<vector<int>> from (1000,vector<int> (1000,mod));

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     // int t;
//     // cin>>t;
//     // while(t--) {

//     // }
//     cin>>n>>m;
//     queue<pair<int,int>> mq,aq;
//     for(int i{} ; i<n ; i++) {
//         for(int j{} ; j<m ; j++) {
//             cin>>v[i][j];
//             if(v[i][j] == 'M') {mq.push({i,j});lm[i][j] = 0;}
//             if(v[i][j] == 'A')  {aq.push({i,j});la[i][j] = 0;}
//         }
//     }

//     int dx[4] = {-1,0,0,1};
//     int dy[4] = {0,-1,1,0};

//     while(!mq.empty()) {
//         int x = mq.front().first;
//         int y = mq.front().second;
//         mq.pop();
//         for(int i{} ; i<4 ; i++) {
//             int nx = x+dx[i];
//             int ny = y+dy[i];
//             if((lm[nx][ny] > (lm[x][y]+1)) && in_range(nx,ny) && (v[nx][ny]!='#')) {
//                 lm[nx][ny] = (lm[x][y]+1);
//                 mq.push({nx,ny});
//             }
//         }
//     }

//     while(!aq.empty()) {
//         int x = aq.front().first;
//         int y = aq.front().second;
//         aq.pop();
//         for(int i{} ; i<4 ; i++) {
//             int nx = x+dx[i];
//             int ny = y+dy[i];
//             if((la[nx][ny] > (la[x][y]+1)) && in_range(nx,ny) && (v[nx][ny]!='#')) {
//                 la[nx][ny] = (la[x][y]+1);
//                 aq.push({nx,ny});
//             }
//         }
//     }

//     vector<pair<int,int>> vec;
//     for(int j{} ; j<m ; j++) {
//         if(v[0][j]=='.') {if(lm[0][j] != mod) vec.push_back({0,j});}
//         if(v[n-1][j]=='.') {if(lm[n-1][j] != mod) vec.push_back({n-1,j});}
//     }
//     for(int i{} ; i<n ; i++) {
//         if(v[i][0]=='.') {if(la[i][0] != mod) vec.push_back({i,0});}
//         if(v[i][m-1]=='.') {if(la[i][m-1] != mod) vec.push_back({i,m-1});}
//     }

//     if(vec.empty()) {cout<<"IMPOSSIBLE\n";}
//     else {
//         bool ok = false;
//         for(auto p:vec) {
//             vi v;

//         }

//         if(!ok) {cout<<"IMPOSSIBLE\n";}
//         else {
//             cout<<"YES\n";
//         }
//     }
// }