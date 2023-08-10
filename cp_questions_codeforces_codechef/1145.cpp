// Problem: Increasing Subsequence
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1145
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
	
	for(int i{} ; i<n ; i++) {
		cin>>v[i];
	}
	
	vector<int> dp(n+1);
	
	//dp[i] ---> length of LIS ending at index i
	
	//base case
	for(int i{} ; i<n ; i++) {
		dp[i] = 1;
	}
	
	for(int i{1} ; i<n ; i++) {
		for(int j{} ; j<i ; j++) {
			if(v[j] < v[i]) {
				dp[i] = max(dp[i],dp[j]+1);
			}
		}
	}
	
	int max1{};
	for(auto elem:dp) {max1 = max(max1,elem);}
	cout<<max1<<"\n";
}