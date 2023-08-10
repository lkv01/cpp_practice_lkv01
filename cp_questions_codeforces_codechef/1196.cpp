// Problem: Flight Routes
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1196
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
const int mod = 998244353;
using namespace std;
// #define int int64_t



int32_t main() {
	int n,m,k;cin>>n>>m>>k;
	
	vector<pair<int,int>> graph[n+1];
	// map<pair<int,int>,int> mp;
	
	while(m--) {
		int u,v,w;cin>>u>>v>>w;
		graph[u].push_back({v,w});
	}
	
	
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	pq.push({0,1});
	
	priority_queue<int,vector<int>,greater<int>> ans;
	while(ans.size() < k) {
		pair<int,int> p = pq.top();
		pq.pop();
		int dist = p.first;
		int node = p.second;
		
		for(auto child_pair:graph[node]) {
			int child = child_pair.first;
			int edge_wt = child_pair.second;
			
			pq.push({dist+edge_wt,child});
			if(child == n) {
				ans.push(dist+edge_wt);
			}
		}
		// cout<<"lkv\n";break;
	}
	
	while(!ans.empty()) {
		cout<<ans.top()<<" ";ans.pop();
		// cout<<
	}
	cout<<"\n";
}