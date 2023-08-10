// Problem: Longest Flight Route
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1680
// Memory Limit: 512 MB
// Time Limit: 1000 ms

// #include <iostream>
// #include <vector>
// #include <set>
// #include <queue>
// #include <algorithm>
// const int mod = 1e9+7;
// using namespace std;
// // #define int int64_t
// const int N = 1e5+10;
// vector<int> graph[N+1];
// vector<int> graph1[N+1];
// vector<int> val(N+1,-1);
// vector<int> from(N+1);
// 
// int f(int v, vector<int> graph1[], vector<int> &val, vector<int> &from) {
	// if(v == 1) {val[1] = 1;return 1;}
	// if(val[v] != -1) {return val[v];}
	// for(auto par:graph1[v]) {
		// int z = f(par, graph1, val, from);
		// if(z != -1) {
			// if(z+1 > val[v]) {
				// val[v] = z+1;
				// from[v] = par;
			// }
		// }	
	// }
	// return val[v];
// }
// 
// int32_t main() {
	// int n,m;cin>>n>>m;
// 	
	// // vector<int> graph[n+1];
	// // vector<int> graph1[n+1];
	// // vector<int> val(n+1,-1);
	// // vector<int> from(n+1);
// 	
	// while(m--) {
		// int a,b;cin>>a>>b;
		// graph[a].push_back(b);
		// graph1[b].push_back(a);
	// }
// 	
	// int x = f(n,graph1,val,from);
// 	
// 	
	// if(val[1] == -1) {cout<<"IMPOSSIBLE\n";}
	// else {
		// // cout<<n<<"\n";
		// vector<int> ans;
		// ans.push_back(n);
		// int y = from[n];
		// while(y != 1) {
			// ans.push_back(y);
			// // cout<<y<<" ";
			// y = from[y];
		// }
		// ans.push_back(1);
// 		
		// reverse(ans.begin(),ans.end());
// 		
		// cout<<ans.size()<<"\n";
		// for(auto elem:ans) {
			// cout<<elem<<" ";
		// }
		// cout<<"\n";
	// }
// 	
// 	
// }


#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
const int mod = 1e9+7;
using namespace std;
// #define int int64_t
const int N = 1e5+10;



int32_t main() {
	int n,m;cin>>n>>m;
	vector<int> graph[n+1];
	vector<int> dist_arr(n+1,-1);
	vector<int> from(n+1);
	priority_queue<pair<int,int>> pq;
	
	while(m--) {
		int a,b;cin>>a>>b;
		graph[a].push_back(b);
	}
	
	        //{distance,node}
	pq.push({0,1});
	dist_arr[1] = 1;
	
	while(!pq.empty()) {
		int node = pq.top().second;
		pq.pop();
		
		for(auto child:graph[node]) {
			if(dist_arr[node]+1 > dist_arr[child]) {
				dist_arr[child] = dist_arr[node]+1;
				from[child] = node;
				pq.push({dist_arr[child],child});
			}
		}
	}
	
	if(dist_arr[n] == -1) {
		cout<<"IMPOSSIBLE\n";
	} 
	else {
		vector<int> ans;
		ans.push_back(n);
		
		int y = from[n];
		while(y != 1) {
			ans.push_back(y);
			y = from[y];
		}
		ans.push_back(1);
		
		reverse(ans.begin(),ans.end());
		cout<<ans.size()<<"\n";
		for(auto elem:ans) {
			cout<<elem<<" ";
		}
		cout<<"\n";
	}
}