// #include <iostream>
// #include <vector>
// using namespace std;
// const int N = 1e5+10;
// vector<int> graph1[N];

// //algo-----------------------------
// int depth[N];
// int height[N];

// void dfs(int n,int parent = 0) {

//     for(int child : graph1[n]) {
//         if(child != parent) {
//             depth[child] = depth[n]+1;
//             dfs(child,n);
//             height[n] = max(height[n] , height[child]+1);
//         }
//     }

// }

// int main() {
//     int v;
//     cin>>v;
//     //graph representation----------------
//     for(int i{} ; i<v-1 ; i++) {
//         int v1,v2;
//         cin>>v1>>v2;
//         graph1[v1].push_back(v2);
//         graph1[v2].push_back(v1);
//     }
//     //-------------------------------------
// }