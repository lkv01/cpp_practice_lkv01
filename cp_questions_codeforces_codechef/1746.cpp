// Problem: Array Description
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1746
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

#define int int64_t
using namespace std;

int32_t main() {
	int ans{1};
	int n,m;cin>>n>>m;
	vector<int> v(n);
	for(int i{} ; i<n ; i++) {cin>>v[i];}
	
	if(n==1 && v[0] == 0) {cout<<m<<"\n";}
	else {
		
		
		bool b = true;
	for(int i{} ; i<n-1 ; i++) {
		if((abs(v[i]-v[i+1]) > 1) && (v[i]!=0) && (v[i+1]!=0)) {b = false;break;}
	}
	
	if(!b) {cout<<"0\n";}
	else {
		vector<vector<int>> dp(n+1,vector<int> (m+20,0));
	
	
		//dp[i][j] ---> no of subarrays with ith index as j
		
		//base case
		for(int i{} ; i<n ; i++) {
			if(v[i] != 0) {dp[i][v[i]] = 1;}
		}
		//0value base case
		for(int i{} ; i<n ; i++) {
			dp[i][0] = 0;
			dp[i][m+1] = 0;
		}
		
		
		int first{},last{n};
		for(int i{} ; i<n ; i++) {
			first = i;
			if(v[i]!=0) {break;}
		}
		for(int i{n-1} ; i>=0 ; i--) {
			last = i;
			if(v[i]!=0) {break;}
		}
		
		
		if((last == 0) && (first == n-1) && n!=1) {
			for(int j{1} ; j<=m ; j++) {dp[0][j] = 1;}
			for(int i{1} ; i<n ; i++) {
				for(int j{1} ; j<=m ; j++) {
					dp[i][j] = ((dp[i-1][j-1]+dp[i-1][j])%mod + dp[i-1][j+1])%mod;
				}
			}
			
			int sum{};
			for(int j{1} ; j<=m ; j++) {sum = (sum + dp[n-1][j])%mod;}
			ans = (ans*sum)%mod;
		}
		else {
			
			for(int i{first-1} ; i>=0 ; i--) {
				for(int j{1} ; j<=m ; j++) {
					dp[i][j] = ((dp[i+1][j-1]+dp[i+1][j])%mod + dp[i+1][j+1])%mod;
				}
			}
			
			int sum{};
			for(int j{1} ; j<=m ; j++) {sum = (sum + dp[0][j])%mod;}
			ans = (ans*sum)%mod;
			
			for(int i{last+1} ; i<n ; i++) {
				for(int j{1} ; j<=m ; j++) {
					dp[i][j] = ((dp[i-1][j-1]+dp[i-1][j])%mod + dp[i-1][j+1])%mod;
				}
			}
			sum = 0;
			for(int j{1} ; j<=m ; j++) {sum = (sum + dp[n-1][j])%mod;}
			ans = (ans*sum)%mod;
			
			for(int i{first+1} ; i<last ; i++) {
				if(v[i] == 0) {
					for(int j{1} ; j<=m ; j++) {
						dp[i][j] = ((dp[i-1][j-1]+dp[i-1][j])%mod + dp[i-1][j+1]%mod)%mod;
						// cout<<dp[i][j]<<" ";
					}
					// cout<<"lkv\n";
				}
			}
				
			for(int i{first+1} ; i<last ; i++) {
				if((v[i] == 0) && (v[i+1] != 0)) {
					int sum{};
					for(int j{v[i+1]-1} ; j<=v[i+1]+1 ; j++) {
						if(j>0) {sum = (sum + dp[i][j])%mod;}
					}
					ans = (ans*sum)%mod;
				}
			}
			
			
		}
		
		
		
		cout<<ans<<"\n";
	}
		
		
	} 
	
	
	
	
}