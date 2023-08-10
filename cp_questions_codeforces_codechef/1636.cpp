// Problem: Coin Combinations II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1636
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

using namespace std;
vector<int> coins;
// int f(int i, int j, vector<vector<int>> &dp) {
	// if(j==0) {return 1;}
	// if(i==0) {
		// if(j%coins[0] == 0) {return 1;}
		// return 0;
	// }
	// if(dp[i][j] != -1) {return dp[i][j];}
	// if(coins[i]>j) {
		// return dp[i][j] = f(i-1,j,dp)%mod;
	// }
	// return dp[i][j] = (f(i,j-coins[i],dp)+f(i-1,j,dp))%mod;
// }

int main() {
	int n,x;cin>>n>>x;
	coins.resize(n);
	for(int i{} ; i<n ; i++) {cin>>coins[i];}
	
	// vector<vector<int>> dp(n+1,vector<int> (x+1,0));
	vector<int> dp(x+1);
	
	//dp[i][j] ---> no of ways to get sum j till index i;
	
	//base case
	// for(int i{} ; i<n ; i++) {dp[i][0] = 1;}
	dp[0] = 1;
	for(int j{coins[0]} ; j<=x ; j+=coins[0]) {dp[j] = 1;}
	
	
	
	for(int i{1} ; i<n ; i++) {
		for(int j{1} ; j<=x ; j++) {
			if(j >= coins[i]) {
				dp[j] += dp[j-coins[i]];
				dp[j]%=mod;
			}
		}
	}
	
	cout<<dp[x]<<"\n";
	// cout<<f(n-1,x,dp)%mod<<"\n";
}