// Problem: C. Fox And Names
// Contest: Codeforces - Codeforces Round 290 (Div. 2)
// URL: https://codeforces.com/contest/510/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <queue>
#include <set>
using namespace std;
int main() {
	int n;cin>>n;
	vector<int> graph[30];
	vector<int> in_degree(30);
	// vector<bool> visited(30,false);
	vector<string> v(n);
	set<int> nodes;
	for(int i{} ; i<n ; i++) {cin>>v[i];}
	
	//graph making
	bool ok2 = true;
	for(int i{} ; i<n-1 ; i++) {
		bool ok = false;
		for(int j{} ; j<min(v[i].size(),v[i+1].size()) ; j++) {
			if(v[i][j] != v[i+1][j]) {
				ok = true;
				graph[v[i][j]-'a'+1].push_back(v[i+1][j]-'a'+1);
				nodes.insert(v[i][j]-'a'+1);
				nodes.insert(v[i+1][j]-'a'+1);
				in_degree[v[i+1][j]-'a'+1]++;
				break;
			}
		}
		if((!ok) && (v[i].size()>v[i+1].size())) {
			ok2 = false;break;
		}
	}
	if(!ok2) {cout<<"Impossible\n";}
	else {
		queue<int> q;
		for(int i{1} ; i<=26 ; i++) {
			if((in_degree[i]==0) && (nodes.find(i) != nodes.end())) {q.push(i);}
		}
		
		string ans{};
		while(!q.empty()) {
			int z = q.front();
			q.pop();
			ans.push_back('a'+z-1);
			for(auto child:graph[z]) {
				in_degree[child]--;
				if(!in_degree[child]) {q.push(child);}
			}
		}
		// cout<<ans<<"\n";
		if(ans.size()!=nodes.size()) {cout<<"Impossible\n";}
		
		
		else {
			set<char> nod;
			for(auto elem:ans) {nod.insert(elem);}
			for(char c{'a'} ; c<='z' ; c++) {
				if((nod.find(c) == nod.end()) ) {ans.push_back(c);}
			}
			cout<<ans<<"\n";
		}
	}
}