// Problem: Money Sums
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1745
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

using namespace std;

int main() {
	int n;cin>>n;
	vector<int> v(n);
	
	int sum{};
	for(int i{} ; i<n ; i++) {
		cin>>v[i];sum+=v[i];
	}
	
	vector<vector<int>> dp(n+1,vector<int> (sum+1,0));
	
	//dp[i][j] ---> no of ways to make sum j till index i
	
	//0index base case
	dp[0][v[0]]=1;
	//0sum base case
	for(int i{} ; i<n ; i++) {dp[i][0] = 1;}
	
	set<int> s;
	for(int i{1} ; i<n ; i++) {
		for(int j{1} ; j<=sum ; j++) {
			if(v[i] > j) {
				dp[i][j] = dp[i-1][j];
			} else {
				dp[i][j] = dp[i-1][j-v[i]] + dp[i-1][j];
			}
		}
	}
	
	s.insert(v[0]);
	for(int i{1} ; i<n ; i++) {
		for(int j{1} ; j<=sum ; j++) {
			if(dp[i][j] != 0) {s.insert(j);}
		}
	}
	
	cout<<s.size()<<"\n";
	for(auto elem:s) {cout<<elem<<" ";}
	cout<<"\n";
}