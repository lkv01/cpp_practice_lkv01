// #include <iostream>
// #include <vector>
// using namespace std;
// const int N = 1e5+10;

// vector<int> graph1[N];

// vector<int> path[N];
// void dfs(int vertex,int parent=0) {
//     for(int child : graph1[vertex]) {
//         if(child != parent) {
//             path[child] = path[vertex];
//             path[child].push_back(child);
//             dfs(child,vertex);
//         }
//     }
// }

// int min(int a,int b) {
//     if(a<=b) return a;
//     else return b;
// }

// int main() {
//     //graph representation----------------
//     int v;
//     cin>>v;
//     for(int i{} ; i<v-1 ; i++) {
//         int v1,v2;
//         cin>>v1>>v2;
//         graph1[v1].push_back(v2);
//         graph1[v2].push_back(v1);
//     }
//     //------------------------------------
//     int v1,v2;
//     cin>>v1>>v2;
//     path[1] = {1};
//     dfs(1);
//     int lca{};
//     for(size_t i{} ; i<min(path[v1].size(),path[v2].size()) ; i++) {
//         if(path[v1].at(i) == path[v2].at(i)) lca = path[v1].at(i);
//     }
//     cout<<lca<<"\n";
// }