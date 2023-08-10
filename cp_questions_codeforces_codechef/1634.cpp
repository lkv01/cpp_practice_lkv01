// Problem: Minimizing Coins
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1634
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

using namespace std;
int n,x;
vector<int> coins;

//f(i,j) ---> minimum no of coins to get sum j in i coins

// int f(int i, int j, vector<vector<int>> &dp) {
	// if(j==0) {return 0;}
	// if(i==0) {
		// if(j%coins[0] == 0) {return j/coins[0];}
		// return mod;
	// }
	// if(dp[i][j] != -1) {return dp[i][j];}
	// if(coins[i]>j) {
		// return dp[i][j] = f(i-1,j,dp);
	// }
	// return dp[i][j] = min(1+f(i,j-coins[i],dp),f(i-1,j,dp));
// }

int main() {
	cin>>n>>x;
	coins.resize(n);
	for(int i{} ; i<n ; i++) {cin>>coins[i];}
	
	// vector<vector<int>> dp(n+1,vector<int> (x+1,mod));
// 	
	// // cout<<f(n-1,x,dp)<<"\n";
// 	
	// //dp[i][j] --->  minimum no of coins
// 	
	// //0sum base case
	// for(int i{} ; i<n ; i++) {dp[i][0] = 0;}
	// //0index base case
	// for(int j{coins[0]} ; j<=x ; j+=coins[0]) {
		// dp[0][j] = j/coins[0];
	// }
// 	
	// for(int i{1} ; i<n ; i++) {
		// for(int j{1} ; j<=x ; j++) {
			// if(coins[i] > j) {
				// dp[i][j] = dp[i-1][j];
			// } else {
				// dp[i][j] = min(1+dp[i][j-coins[i]] , dp[i-1][j]);
			// }
		// }
	// }
// 	
	// cout<<dp[n-1][x]<<"\n";
	
	
	//-------------------------------------------------------------------------------->
	//         ------------------- OPTIMISING SPACE ------------------->
	
	vector<int> dp(x+1,mod);
	// cout<<f(n-1,x,dp)<<"\n";
	
	
	//0sum base case
	// for(int i{} ; i<n ; i++) {dp[i][0] = 0;}
	dp[0] = 0;
	//0index base case
	for(int j{coins[0]} ; j<=x ; j+=coins[0]) {
		// dp[0][j] = j/coins[0];
		dp[j] = j/coins[0];
	}
	
	for(int i{1} ; i<n ; i++) {
		for(int j{1} ; j<=x ; j++) {
			if(coins[i] <= j) {
				dp[j] = min(1+dp[j-coins[i]] , dp[j]);
			}
		}
	}
	
	if(dp[x] == mod) {cout<<"-1\n";}
	else {
		cout<<dp[x]<<"\n";
	}
}