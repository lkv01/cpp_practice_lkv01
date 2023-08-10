// Problem: Projects
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1140
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

#define int int64_t

using namespace std;


// vector<pair<int,int>> vp;
vector<int> v;
map<int,vector<int>> m;
map<pair<int,int>,int> reward;
map<int,int> next1;
map<int,int> dp;

//f(i) ---> maximum reward from "element" i
int f(int i) {
	//base case
	if(dp.find(i) != dp.end()) {return dp[i];}
	int z{};
	
	// for(auto j:m[i]) {
		// // int j = (*it);
		// auto it1 = upper_bound(v.begin(),v.end(),i);
		// if(it1 != v.end()) {
			// int ind1 = it1 - v.begin();
			// z = max(z , f(v[ind1]));
		// }
		// auto it2 = upper_bound(v.begin(),v.end(),j);
		// if(it2 != v.end()) {
			// int ind = it2 - v.begin();
			// z = max(z , reward[{i,j}] + f(v[ind]));
		// } else {
			// z = max(z , reward[{i,j}]);
		// }
		// // cout<<z<<" ";
	// }
	
	for(auto j:m[i]) {
		// int j = (*it);
		// auto it1 = upper_bound(v.begin(),v.end(),i);
		if(i != v.back()) {
			z = max(z , f(next1[i]));
		} else {
			z = 0;
		}
		// if(it1 != v.end()) {
			// int ind1 = it1 - v.begin();
			// z = max(z , f(v[ind1]));
		// }
		auto it2 = upper_bound(v.begin(),v.end(),j);
		if(j != v.back()) {
			z = max(z , reward[{i,j}] + f(next1[j]));
		} else {
			z = max(z , reward[{i,j}]);
		}
		// if(it2 != v.end()) {
			// int ind = it2 - v.begin();
			// z = max(z , reward[{i,j}] + f(v[ind]));
		// } else {
			// z = max(z , reward[{i,j}]);
		// }
		// cout<<z<<" ";
	}
	
	return dp[i] = z;
	// return z;
}

int32_t main() {
	int n;cin>>n;
	vector<int> finish;
	for(int i{} ; i<n ; i++) {
		int a,b,p;cin>>a>>b>>p;
		m[a].push_back(b);
		if(reward.find({a,b}) != reward.end()) {
			if(reward[{a,b}] < p) {reward[{a,b}] = p;}
		} else {
			reward[{a,b}] = (p);
			// vp.push_back({a,b});
			v.push_back(a);
			finish.push_back(b);
		}
		
	}
	sort(v.begin() , v.end());
	
	for(int i{} ; i<v.size()-1 ; i++) {
		next1[v[i]] = v[i+1];
	}
	for(auto elem:finish) {
		auto it = upper_bound(v.begin(),v.end(),elem);
		if(it != v.end()) {
			next1[elem] = (*it);
		}
	}
	
	int max1{};
	for(auto elem:v) {
		max1 = max(max1,f(elem));
	}
	// cout<<f(v.front())<<"\n";
	cout<<max1<<"\n";
}