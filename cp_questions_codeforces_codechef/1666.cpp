// Problem: Building Roads
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1666
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
const int mod = 1e9+7;
using namespace std;
// #define int int64_t

void dfs(int v, vector<int> graph[], vector<bool> &visited) {
	visited[v] = true;
	for(auto child:graph[v]) {
		if(!visited[child]) {
			dfs(child, graph, visited);
		}
	}
}

int32_t main() {
	int n,m;cin>>n>>m;
	vector<int> graph[n+1];
	vector<bool> visited(n+1);
	while(m--) {
		int a,b;cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	vector<int> vec;
	for(int i{1} ; i<=n ; i++) {
		if(!visited[i]) {
			vec.push_back(i);
			dfs(i, graph, visited);
		}
	}
	cout<<vec.size()-1<<"\n";
	for(int i{} ; i<vec.size()-1 ; i++) {
		cout<<vec[i]<<" "<<vec[i+1]<<"\n";
	}
}