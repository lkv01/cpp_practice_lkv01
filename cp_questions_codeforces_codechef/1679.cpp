// Problem: Course Schedule
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1679
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main() {
	int n,m;cin>>n>>m;
	vector<int> graph[n+1];
	// vector<bool> visited(n+1,false);
	vector<int> in_degree(n+1);
	while(m--) {
		int a,b;cin>>a>>b;
		graph[a].push_back(b);
		in_degree[b]++;
	}
	queue<int> q;
	for(int i{1} ; i<=n ; i++) {
		if(in_degree[i]==0) {
			q.push(i);
			// visited[i] = true;
		}
	}
	vector<int> ans;
	while(!q.empty()) {
		int z = q.front();
		q.pop();
		ans.push_back(z);
		for(auto child:graph[z]) {
			in_degree[child]--;
			if(!in_degree[child]) {q.push(child);}
		}
	}
	
	if(ans.size() != n) {cout<<"IMPOSSIBLE\n";}
	
	else {
		for(auto elem:ans) {
			cout<<elem<<" ";
		}
		cout<<"\n";
	}
}