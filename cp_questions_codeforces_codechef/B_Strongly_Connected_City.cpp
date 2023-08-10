// #include <iostream>
// #include <vector>
// #include <set>
// #include <queue>
// #include <stack>
// #include <algorithm>
// const int mod = 998244353;
// using namespace std;
// // #define int int64_t
// int n,m;


// stack<pair<int,int>> st;

// void dfs(int i, int j, vector<vector<int>> &r, vector<vector<int>> &l, vector<vector<int>> &u, vector<vector<int>> &d, vector<vector<int>> &visited) {
//     if(i<=0 || j<=0 || i>n || j>m || visited[i][j]) {return;}
//     visited[i][j] = 1;
//     if(r[i][j]) {dfs(i,j+1,r,l,u,d,visited);}
//     if(l[i][j]) {dfs(i,j-1,r,l,u,d,visited);}
//     if(u[i][j]) {dfs(i-1,j,r,l,u,d,visited);}
//     if(d[i][j]) {dfs(i+1,j,r,l,u,d,visited);}
//     st.push({i,j});
// }

// int32_t main() {
//     cin>>n>>m;
//     vector<vector<int>> r(n+2,vector<int> (m+2,0));
// 	vector<vector<int>> l(n+2,vector<int> (m+2,0));
// 	vector<vector<int>> u(n+2,vector<int> (m+2,0));
// 	vector<vector<int>> d(n+2,vector<int> (m+2,0));
// 	vector<vector<int>> visited(n+2,vector<int> (m+2,0));
	
//     string s{"#"},t{"#"};
//     string s1,t1;cin>>s1>>t1;
//     s.append(s1);t.append(t1);
    

//     vector<vector<int>> r1(n+2,vector<int> (m+2,0));
// 	vector<vector<int>> l1(n+2,vector<int> (m+2,0));
// 	vector<vector<int>> u1(n+2,vector<int> (m+2,0));
// 	vector<vector<int>> d1(n+2,vector<int> (m+2,0));
// 	vector<vector<int>> visited1(n+2,vector<int> (m+2,0));

//     for(int i{1} ; i<=n ; i++) {
//         if(s[i] == '<') {
//             for(int j{1} ; j<=m ; j++) {
//                 l[i][j] = 1;
//                 r1[i][j] = 1;
//             }
//         } else {
//             for(int j{1} ; j<=m ; j++) {
//                 r[i][j] = 1;
//                 l1[i][j] = 1;
//             }
//         }
//     }
//     for(int j{1} ; j<=m ; j++) {
//         if(t[j] == '^') {
//             for(int i{1} ; i<=n ; i++) {
//                 u[i][j] = 1;
//                 d1[i][j] = 1;
//             }
//         } else {
//             for(int i{1} ; i<=n ; i++) {
//                 d[i][j] = 1;
//                 u1[i][j] = 1;
//             }
//         }
//     }

//     for(int i{1} ; i<=n ; i++) {
//         for(int j{1} ; j<=m ; j++) {
//             if(!visited[i][j]) {
//                 dfs(i,j,r,l,u,d,visited);
//             }
//         }
//     }

//     int cnt{};
//     while(!st.empty()) {
//         pair<int,int> p = st.top();
//         int i = st.top().first;
//         int j = st.top().second;
//         st.pop();
//         if(!visited1[i][j]) {
//             cnt++;
//             dfs(i,j,r1,l1,u1,d1,visited1);
//         }
//     }

//     if(cnt == 1) {cout<<"YES\n";}
//     else {cout<<"NO\n";}
// }