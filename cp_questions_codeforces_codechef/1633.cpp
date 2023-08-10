// Problem: Dice Combinations
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1633
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

using namespace std;

vector<int> dp(1e6+10);

int main() {
	int n;cin>>n;
	
	//dp[i] --->  no of ways to get a sum of i
	
	dp[0] = 1;
	for(int i{1} ; i<=n ; i++) {
		for(int j{i-1} ; (j>=i-6)&&(j>=0) ; j--) {
			dp[i]=(dp[i]+dp[j])%mod;
		}
	}
	
	cout<<dp[n]%mod<<"\n";
}