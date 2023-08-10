// Problem: Book Shop
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1158
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

using namespace std;

int main() {
	
	//----------------------------------------------------------------------------------------------------------------
	//    ------------------    WITHOUT Space Optimisation -------------------------
	int n,x;cin>>n>>x;
	vector<int> cost(n),pages(n);
	for(int i{} ; i<n ; i++) {cin>>cost[i];}
	for(int i{} ; i<n ; i++) {cin>>pages[i];}
	
	vector<vector<int>> dp(n+1,vector<int> (x+1,0));
	//dp[i][j] ---> maximum total pages with cost<=j which can be made till index i
	
	
	//0cost base case
	for(int i{} ; i<n ; i++) {dp[i][0] = 0;}
	//0index base case
	for(int j{1} ; j<=x;  j++) {
		if(cost[0]<=j) {dp[0][j] = pages[0];}
	}
	
	for(int i{1} ; i<n ; i++) {
		for(int j{1} ; j<=x ; j++) {
			if(cost[i] > j) {
				dp[i][j] = dp[i-1][j];
			} else {
				dp[i][j] = max(pages[i]+dp[i-1][j-cost[i]] , dp[i-1][j]);
			}
		}
	}
	
	cout<<dp[n-1][x]<<"\n";
	
	
	//----------------------------------------------------------------------------------------------------------------
	//    ------------------           WITH Space Optimisation -------------------------
	// int n,x;cin>>n>>x;
	// vector<int> cost(n),pages(n);
	// for(int i{} ; i<n ; i++) {cin>>cost[i];}
	// for(int i{} ; i<n ; i++) {cin>>pages[i];}
// 	
	// vector<int> dp(x+1);
	// //dp[i][j] ---> maximum total pages with cost<=j which can be made till index i
// 	
// 	
	// //0cost base case
	// // for(int i{} ; i<n ; i++) {dp[i][0] = 0;}
	// // dp[0]=0;
	// //0index base case
	// for(int j{1} ; j<=x;  j++) {
		// if(cost[0]<=j) {dp[j] = pages[0];}
	// }
// 	
	// for(int i{0} ; i<n ; i++) {
		// for(int j{1} ; j<=x ; j++) {
			// if(cost[i] <= j) {
				// dp[j] = max(pages[i]+dp[j-cost[i]] , dp[j]);
			// }
		// }
		// // cout<<dp[x]<<" ";
	// }
	// // cout<<"\n";
	// cout<<dp[x]<<"\n";	
}