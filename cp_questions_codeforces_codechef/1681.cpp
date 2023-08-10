// Problem: Game Routes
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1681
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
// #include <queue>
// #include <set>
const int mod = 1e9+7;
using namespace std;
#define int int64_t

int f(int v, vector<int> graph[], vector<int> parent[],vector<int> &dp) {
	if(v==1) {return 1;}
	if(dp[v] != -1) {return dp[v];}
	int z{};
	for(auto par:parent[v]) {
		z=(z+f(par, graph, parent,dp))%mod;
	}
	return dp[v] = z;
}

int32_t main() {
	int n,m;cin>>n>>m;
	vector<int> graph[n+1];
	vector<int> parent[n+1];
	vector<int> dp(n+1,-1);
	while(m--) {
		int a,b;cin>>a>>b;
		graph[a].push_back(b);
		parent[b].push_back(a);
	}
	cout<<f(n,graph,parent,dp)%mod;
}