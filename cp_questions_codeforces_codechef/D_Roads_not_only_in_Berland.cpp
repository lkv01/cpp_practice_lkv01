// // #include <iostream>
// // #include <vector>
// // #include <set>
// // #include <queue>
// // #include <stack>
// // #include <algorithm>
// // const int mod = 998244353;
// // using namespace std;
// // // #define int int64_t
// // 
// // // vector<int> remove;
// // 
// // void dfs(int v, int par, vector<int> graph[], vector<bool> &visited, vector<pair<int,int>> &remove) {
// 	// visited[v] = true;
// 	// for(auto child:graph[v]) {
// 		// if(visited[child] && child!=par) {
// 			// remove.push_back({v,child});
// 		// } else if(!visited[child]) {
// 			// dfs(child, v, graph, visited, remove);
// 		// }
// 	// }
// // }
// // 
// // int32_t main() {
// 	// int n;cin>>n;
// 	// vector<int> graph[n+1];
// 	// vector<bool> visited(n+1);
// 	// int m{n-1};
// 	// while(m--) {
// 		// int u,v;cin>>u>>v;
// 		// graph[u].push_back(v);
// 		// graph[v].push_back(u);
// 	// }
// // 	
// 	// set<int> vec;
// 	// vector<pair<int,int>> remove;
// 	// for(int i{1} ; i<=n ; i++) {
// 		// if(!visited[i]) {
// 			// vec.insert(i);
// 			// dfs(i, 0, graph, visited, remove);
// 		// }
// 	// }
// // 	
// 	// set<pair<int,int>> s;
// 	// for(auto elem:remove) {
// 		// pair<int,int> p = {elem.second,elem.first};
// 		// if((s.find(elem) != s.end()) || (s.find(p) != s.end())) {continue;}
// 		// s.insert(elem);
// 	// }
// 	// cout<<s.size()<<"\n";
// 	// for(auto elem:s) {
// 		// cout<<elem.first<<" "<<elem.second<<" ";
// 		// auto it = vec.begin();
// 		// cout<<(*it)<<" ";
// 		// vec.erase(it);
// 		// auto it1 = vec.begin();
// 		// cout<<(*it1)<<"\n";
// 	// }
// // }

// //-------------METHOD 2 (using DSU) -------------------->

// #include <iostream>
// #include <vector>
// #include <set>
// #include <queue>
// #include <stack>
// #include <algorithm>
// const int mod = 998244353;
// using namespace std;
// // #define int int64_t

// vector<int> par,rnk;

// void make_set(int n) {
// 	par.resize(n+1);
// 	rnk.resize(n+1);
//     for(int i{1} ; i<=n ; i++) {
//         par[i] = i;
//         rnk[i] = 1;
//     }
// }

// int find_set(int v) {
//     if(par[v] == v) {return v;}
//     return par[v] = find_set(par[v]);
// }

// void union_set(int u, int v) {
//     u = find_set(u);
//     v = find_set(v);
//     if(u != v) {
//         if(rnk[u] < rnk[v]) {
//             swap(u,v);
//         }
//         par[v] = u;
//         rnk[u]+=rnk[v];
//     }
// }

// int32_t main() {
// 	int n;cin>>n;
// 	vector<int> graph[n+1];
	
//     make_set(n);

// 	int m{n-1};

//     vector<pair<int,int>> to_remove;
// 	while(m--) {
// 		int u,v;cin>>u>>v;
//         int x = find_set(u);
//         int y = find_set(v);
//         // cout<<x<<" "<<y<<"\n";
//         if(x == y) {to_remove.push_back({u,v});}
//         else {
//             union_set(u,v);
//         }
// 	}

//     vector<int> components_par;
//     for(int v{1} ; v<=n ; v++) {
//         if(v == find_set(v)) {
//             components_par.push_back(v);
//         }
//     }
    
//     cout<<to_remove.size()<<"\n";
//     while(!to_remove.empty()) {
//         pair<int,int> p = to_remove.back();
//         cout<<p.first<<" "<<p.second<<" "<<components_par.back()<<" ";
//         components_par.pop_back();
//         cout<<components_par.back()<<"\n";
//         to_remove.pop_back();
//     }
// }