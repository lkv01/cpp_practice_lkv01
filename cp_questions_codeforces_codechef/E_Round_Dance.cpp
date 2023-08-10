// #include <iostream>
// #include <vector>
// #include <set>
// #include <queue>
// #include <stack>
// #include <algorithm>
// const int mod = 998244353;
// using namespace std;
// // #define int int64_t

// void dfs(int v, int par, int i, bool &end0, bool &end1, set<int> graph[], vector<int> &visited) {
//     visited[v] = 1;
//     for(auto child:graph[v]) {
//         if(visited[child] && child!=par) {
//             if(child==i) {
//                 end0 = true;end1 = false;
//             } else {
//                 end0 = false;end1 = true;
//             }
//             return;
//         } else {
//             dfs(child, par, i, end0, end1, graph, visited);
//         }
//     }
// }

// int32_t main() {
//     int test;cin>>test;
//     while(test--) {
//         int n;cin>>n;
//         set<int> graph[n+1];
//         vector<int> visited(n+1);
//         for(int i{1} ; i<=n ; i++) {
//             int x;cin>>x;
//             graph[i].insert(x);
//             graph[x].insert(i);
//         }

//         int e0{},e1{},e2{};
//         for(int i{1} ; i<=n ; i++) {
//             if(!visited[i]) {
//                 bool end0 = false;
//                 bool end1 = false;
//                 dfs(i, 0, i, end0, end1, graph, visited);
//                 if(!end0 && !end1) {
//                     e2++;
//                 } else if(end0 && !end1) {
//                     e0++;
//                 } else if(!end0 && end1) {
//                     e1++;
//                 }
                
//             }
//         }
//         cout<<e0<<" "<<e1<<" "<<e2<<"\n";
//         cout<<e0+e1+e2<<"\n";

//     }

// }