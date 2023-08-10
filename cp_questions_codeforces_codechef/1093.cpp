// Problem: Two Sets II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1093
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
const int mod = 1e9+7;
#define int int64_t

/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(int x, int y, int p) {
    int res = 1;              // Initialize result
    x = x % p;                // Update x if it is more than or equal to p
    if (x == 0) return 0;     // In case x is divisible by p;
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

/* Function to find modulo inverse of A in O(log M)).
  ->This approach uses Fermat's Little Theorem.
  ->used only when M is prime */
int modInverse(int A,int M) {
    return power(A,M-2,M);
}

using namespace std;

int32_t main() {
	int n;cin>>n;
	vector<int> v(n);
	
	int sum{};
	for(int i{} ; i<n ; i++) {
		v[i] = i+1;sum+=v[i];
	}
	
	if(sum&1) {cout<<"0\n";}
	else {
		
		vector<vector<int>> dp(n+1,vector<int> (sum+1,0));
	
		//dp[i][j] ---> no of ways to make sum j till index i
		
		//0index base case
		dp[0][v[0]]=1;
		//0sum base case
		for(int i{} ; i<n ; i++) {dp[i][0] = 1;}
		
		for(int i{1} ; i<n ; i++) {
			for(int j{1} ; j<=sum ; j++) {
				if(v[i] > j) {
					dp[i][j] = dp[i-1][j]%mod;
				} else {
					dp[i][j] = (dp[i-1][j-v[i]] + dp[i-1][j])%mod;
				}
			}
		}
		
		cout<<(dp[n-1][sum/2]*modInverse(2,mod))%mod<<"\n";
	}
}