// Problem: Rectangle Cutting
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1744
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

using namespace std;

// int f(int i,int j, vector<vector<int>> &dp) {
	// if(i==j) {return 0;}
	// if(dp[i][j] != -1) {return dp[i][j];}
	// int z{mod};
	// for(int k{1} ; k<j ; k++) {
		// z = min(z,1+f(i,k,dp)+f(i,j-k,dp));
	// }
	// for(int k{1} ; k<i ; k++) {
		// z = min(z,1+f(k,j,dp)+f(i-k,j,dp));
	// }
	// return dp[i][j] = z;
// }

int main() {
	int n,m;cin>>n>>m;
	
	vector<vector<int>> dp(n+10,vector<int> (m+10,mod));
	//dp[i][j] ---> minimum no. of cuts to break rectangle (i,j);
	
	// cout<<f(n,m,dp)<<"\n";
	
	//equal side base case
	for(int i{1} ; i<=min(n,m) ; i++) {
		dp[i][i] = 0;
	}
	//edge=1 base case
	for(int i{2} ; i<=n ; i++) {
		dp[i][1] = i-1;
	}
	for(int j{2} ; j<=m ; j++) {
		dp[1][j] = j-1;
	}
	
	for(int i{2} ; i<=n ; i++) {
		for(int j{2} ; j<=m ; j++) {
			for(int k{1} ; k<i ; k++) {
				dp[i][j] = min(dp[i][j] , 1+dp[k][j]+dp[i-k][j]);
			}
			for(int k{1} ; k<j ; k++) {
				dp[i][j] = min(dp[i][j] , 1+dp[i][k]+dp[i][j-k]);
			}
		}
	}
	cout<<dp[n][m]<<"\n";
}