// Problem: Coin Combinations I
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1635
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

using namespace std;

vector<int> dp(1e6+10);

int main() {
	int n,x;cin>>n>>x;
	vector<int> coins(n);
	for(int i{} ; i<n ; i++) {cin>>coins[i];}
	//dp[i] ---> no of ways to get sum i
	
	dp[0] = 1;
	
	for(int i{} ; i<=x ; i++) {
		for(auto elem:coins) {
			if(i>=elem) {
				dp[i]=(dp[i]+dp[i-elem])%mod;
			}
		}
	}
	
	cout<<dp[x]%mod<<"\n";
}