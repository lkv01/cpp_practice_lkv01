//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/?

// #include <iostream>
// #include <vector>
// using namespace std;
// const int N = 1e5+10;

// vector<int> graph1[N];          /*ye hamne N vectors banaye hain(notice square bracket)*/
// vector<vector<int>> con_com;
// vector<int> current_con_com;

// //dfs(traversal algo)--------------
// bool visited[N];
// void dfs(int n) {
//     current_con_com.push_back(n);                //modification
//     visited[n] = true;
//     for(int child : graph1[n]) {
//         if(visited[n]) {
//             continue;
//         }
//         dfs(child);
//     }
// }
// //---------------------------------

// int main() {
//     int v,e;
//     cin>>v>>e;
//     //graph representation--------------
//     for(int i{} ; i<e ; i++) {
//         int v1,v2;
//         cin>>v1>>v2;
//         graph1[v1].push_back(v2);
//         graph1[v2].push_back(v1);
//     }
//     //----------------------------------
    
//     for(int i{1} ; i<=e ; i++) {
//         if(visited[i]) {
//             continue;
//         }
//         current_con_com.clear();
//         dfs(i);
//         con_com.push_back(current_con_com);
//     }
//     cout<<con_com.size()<<"\n";
//     for(auto temp : con_com) {
//         for(auto node : temp) {
//             cout<<node<<" ";
//         }
//         cout<<"\n";
//     }
// }