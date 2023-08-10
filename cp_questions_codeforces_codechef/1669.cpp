// Problem: Round Trip
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1669
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <set>
const int mod = 1e9+7;
using namespace std;
// #define int int64_t


bool dfs(int v, int par,vector<int> graph[], vector<bool> &visited, vector<int> &from,int &x) {
	visited[v] = true;
	for(auto child:graph[v]) {
		if(child == par) {continue;}
		from[child] = v;
		if(visited[child]) {
			x=child;return true;
		}
		if(dfs(child,v,graph,visited,from,x)) {
			return true;
		}
	}
	return false;
}



int32_t main() {
	int n,m;cin>>n>>m;
	vector<int> graph[n+1];
	vector<bool> visited(n+1);
	vector<int> from(n+1,0);
	while(m--) {
		int a,b;cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	int x{};
	bool ok = false;
	for(int i{1} ; i<=n ; i++) {
		if(!visited[i]) {
			if(dfs(i,0,graph,visited,from,x)) {
				ok = true;break;
			}
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
		
		cout<<ans.size()<<"\n";
		for(auto elem:ans) {
			cout<<elem<<" ";
		}
		cout<<"\n";
	}
}