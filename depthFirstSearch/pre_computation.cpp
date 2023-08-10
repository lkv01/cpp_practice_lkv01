
// //subtree ke operations uupar aate hue hote hain..

// #include <iostream>
// #include <vector>
// using namespace std;
// const int N = 1e5+10;

// vector<int> graph1[N];

// // int sum{};
// // int cnt{};
// // bool flag = false;
// // void dfs(int n,int parent,int v) {
// //     if(n == v) {
// //         sum += v;
// //         if((n & 1) == 0) cnt++;
// //         flag = true;
// //     }
// //     if(flag == false) {
// //         for(int child : graph1[n]) {
// //             if(child != parent) {
// //                 dfs(child,n,v);
// //             }
// //         }
// //     }
// //     else {
// //         for(int child : graph1[n]) {
// //             if(child != parent) {
// //                 sum += child;
// //                 if((child & 1) == 0) cnt++;
// //                 dfs(child,n,v);
// //             }
// //         }
// //     }
    
// // }

// int val[N];

// int sum_subtree[N];
// int even_count[N];
// void dfs(int vertex,int parent = 0) {
//     sum_subtree[vertex] += val[vertex];
//     if((val[vertex] & 1) == 0) even_count[vertex]++;
//     for(int child : graph1[vertex]) {
//         if(child != parent) {
//             dfs(child,vertex);
//             sum_subtree[vertex] += sum_subtree[child];
//             even_count[vertex] += even_count[child];
//         }
//     }
// }

// int main() {
//     //tree representation-------------------
//     int n;
//     cin>>n;
//     for(int i{} ; i<n-1 ; i++) {
//         int v1,v2;
//         cin>>v1>>v2;
//         graph1[v1].push_back(v2);
//         graph1[v2].push_back(v1);
//     }
//     //--------------------------------------
//     int q;
//     cin>>q;
//     dfs(1);
//     while(q--) {
//         int v;
//         cin>>v;
//         cout<<sum_subtree[v]<<" "<<even_count[v]<<"\n";
//     }
// }