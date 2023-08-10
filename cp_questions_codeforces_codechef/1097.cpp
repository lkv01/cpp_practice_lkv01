// Problem: Removal Game
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1097
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;
using namespace std;
#define int int64_t
vector<int> v;

//f(i,j) ---> maximum score that can be made between i and j



int f(int i, int j, vector<vector<int>> &dp) {
	//base cases
	if(dp[i][j] != -1) {return dp[i][j];}
	if(i>j) {return 0;}
	if(i==j) {return v[i];}
	if(j-i == 1) {return max(v[j],v[i]);}
	return dp[i][j] = max(v[i]+min(f(i+2,j,dp),f(i+1,j-1,dp)) , v[j]+min(f(i,j-2,dp),f(i+1,j-1,dp)));
}

int32_t main() {
	int n;cin>>n;
	v.resize(n);
	
	for(int i{} ; i<n ; i++) {
		cin>>v[i];
	}
	vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
	cout<<f(0,n-1,dp)<<"\n";
}