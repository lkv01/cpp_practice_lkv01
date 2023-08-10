// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // const int N = 1e5+10;

// // vector<int> graph1[N];      /*ye hamne N vectors banaye hain(notice square bracket)*/

// // //modifications----------------
// // vector<vector<int>> con_com; 
// // vector<int> current_con_com;
// // //-----------------------------

// // //dfs(graph traversal)-----------------------
// // bool visited[N];
// // void dfs(int n) {
// //     visited[n] = true;
// //     current_con_com.push_back(n);
// //     for(int child : graph1[n]) {
// //         if(!visited[child]) {
// //             dfs(child);
// //         }
// //     }
// // }
// // //-------------------------------------------

// // int main() {
// //     int v,e;
// //     cin>>v>>e;
// //     //graph representation------------------
// //     for(int i{} ; i<e ; i++) {
// //         int v1,v2;
// //         cin>>v1>>v2;
// //         graph1[v1].push_back(v2);
// //         graph1[v2].push_back(v1);
// //     }
// //     //--------------------------------------
// //     for(int i{1} ; i<=v ; i++) {
// //         if(!visited[i]) {
// //             dfs(i);
// //             con_com.push_back(current_con_com);
// //             current_con_com.clear();
// //         }
// //     }
// //     cout<<con_com.size()<<"\n";
// // }


// #include <iostream>
// #include <vector>
// using namespace std;
// const int N = 1e5+10;

// vector<int> graph1[N];       /*ye hamne N vectors banaye hain(notice square bracket)*/
// int val[N];

// int depth[N];
// void dfs1(int vertex,int parent=0) {
//     // depth[vertex] = depth[parent]+1;       <-- (don't do this)
//     for(int child : graph1[vertex]) {
//         if(child != parent) {
//             depth[child] = depth[vertex]+1; //<-- (do this)
//             dfs1(child,vertex);
//         }
//     }
// }

// int height[N];
// void dfs2(int vertex,int parent=0) {
//     for(int child : graph1[vertex]) {
//         if(child != parent) {
//             dfs2(child,vertex);
//             height[vertex] = max(height[vertex],height[child]+1);
//         }
//     }
// }

// int sum_subtree[N];
// void dfs3(int vertex,int parent=0) {
//     sum_subtree[vertex] += val[vertex];
//     for(int child : graph1[vertex]) {
//         if(child != parent) {
//             dfs3(child,vertex);
//             sum_subtree[vertex] += sum_subtree[child];
//         }
//     }
// }

// int even_count[N];
// void dfs4(int vertex,int parent=0) {
//     if((val[vertex] & 1) == 0) even_count[vertex]++;
//     for(int child : graph1[vertex]) {
//         if(child != parent) {
//             dfs4(child,vertex);
//             even_count[vertex] += even_count[child];
//         }
//     }
// }

// void dfs(int vertex,int parent=0) {
//     //----------------------
//     for(int child : graph1[vertex]) {
//         if(child != parent) {
//             //--------------
//             dfs(child,vertex);
//             //--------------
//         }
//     }
//     //----------------------
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
//     dfs1(1);
//     // dfs2(1);
//     // dfs3(1);
//     // dfs4(1);
//     int max=-1;
//     int deepest{};
//     for(int i{1} ; i<N ; i++) {
//         if(max < depth[i]) {
//             max = depth[i];
//             deepest = i;
//         }
//     }
//     for(int i{} ; i<N ; i++) {
//         depth[i]=0;
//     }
//     dfs1(deepest);
//     int max1 = -1;
//     for(int i{1} ; i<N ; i++) {
//         if(max1 < depth[i]) {
//             max1 = depth[i];
//         }
//     }
//     cout<<max1<<"\n";
// }