// Problem: Removing Digits
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1637
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;

using namespace std;
int n,x;
vector<int> coins;

int main() {
	int n;cin>>n;
	
	vector<int> dp(n+1,mod);
	//dp[i] ---> minimum no of steps to break i;
	
	//single digit base case
	for(int i{1} ; i<=min(9,n) ; i++) {dp[i] = 1;}
	
	for(int i{10} ; i<=n ; i++) {
		int z = i;
		while(z>0) {
			int rem = z%10;
			dp[i] = min(dp[i],1+dp[i-rem]);
			z/=10;
		}
	}
	
	cout<<dp[n]<<"\n";
}