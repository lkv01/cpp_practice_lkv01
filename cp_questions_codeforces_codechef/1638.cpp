// Problem: Grid Paths
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1638
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

using namespace std;
int n,x;

int main() {
	int n;cin>>n;
	
	vector<vector<char>> grid(n,vector<char> (n,0));
	
	
	for(int i{} ; i<n ; i++) {
		for(int j{} ; j<n ; j++) {
			cin>>grid[i][j];
		}
	}
	
	if(grid[0][0]=='*' || grid[n-1][n-1]=='*') {cout<<"0\n";}
	else {
		vector<vector<int>> dp(n,vector<int> (n,0));
		//dp[i][j] ---> no of ways to reach (i,j)
		
		dp[0][0] = 1;
		for(int j{} ; j<n ; j++) {
			if(grid[0][j] == '*') {break;}
			dp[0][j] = 1;
		}
		
		for(int i{} ; i<n ; i++) {
			if(grid[i][0] == '*') {break;}
			dp[i][0] = 1;
		}
		
		for(int i{1} ; i<n ; i++) {
			for(int j{1} ; j<n ; j++) {
				if(grid[i][j]=='.') {
					dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
				}
			}
		}
		
		cout<<dp[n-1][n-1]<<"\n";
	}
}