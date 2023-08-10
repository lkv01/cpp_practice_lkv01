// Problem: Building Teams
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1668
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

bool dfs(int v, vector<int> graph[], vector<bool> &visited ,vector<int> &ans) {
	visited[v] = true;
	for(auto child:graph[v]) {
		if(visited[child] && ans[child]==ans[v]) {return false;}
		if(!visited[child]) {
			ans[child] = 3-ans[v];
			bool b = dfs(child,graph,visited,ans);
			if(!b) {return false;}
		} 
	}
	return true;
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
	
	vector<int> ans(n+1);
	bool ok = true;
	for(int i{1} ; i<=n ; i++) {
		if(!visited[i]) {
			ans[i]=1;
			bool bb = dfs(i,graph,visited,ans);
			if(!bb) {
				ok = false;break;
			}
		}
	}
	if(!ok) {cout<<"IMPOSSIBLE\n";}
	else {
		for(int i{1} ; i<ans.size() ; i++) {
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
	}
}