// Problem: Round Trip II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1678
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// .3
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
const int mod = 1e9+7;
using namespace std;
// #define int int64_t

/*
visited pe jaa rhe hain bs dfs call nhi kar rhe
*/

bool dfs(int v, vector<int> graph[], vector<bool> &visited, vector<bool> &path_visited, int &x, vector<int> &from) {
	visited[v] = true;
	path_visited[v] = true;
	for(auto child:graph[v]) {
		from[child] = v;
		if((visited[child]) && (path_visited[child])) {
			x = child;
			return true;
		}
		if(!visited[child]) {
			bool b = dfs(child, graph, visited, path_visited, x, from);
			if(b) {return true;}
		}
	}
	path_visited[v] = false;
	return false;
}


int32_t main() {
	int n,m;cin>>n>>m;
	vector<int> graph[n+1];
	vector<bool> visited(n+1);
	vector<bool> path_visited(n+1);
	vector<int> from(n+1);
	
	while(m--) {
		int a,b;cin>>a>>b;
		graph[a].push_back(b);
	}
	
	int x{};
	bool ok = false;
	for(int i{1} ; i<=n ; i++) {
		if(!visited[i]) {
			bool bb = dfs(i, graph, visited, path_visited ,x, from);
			if(bb) {ok = true;break;}
		}
	}
	if(!ok) {cout<<"IMPOSSIBLE\n";}
	else {
		int y = from[x];
		vector<int> ans{x};
		while(y != x) {
			ans.push_back(y);
			y = from[y];
		}
		ans.push_back(y);
		
		reverse(ans.begin(),ans.end());
		
		cout<<ans.size()<<"\n";
		for(auto elem:ans) {
			cout<<elem<<" ";
		}
		cout<<"\n";
	}
}