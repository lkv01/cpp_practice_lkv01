// Problem: Eko
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/EKO/
// Memory Limit: 1536 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int n,m;
vector<int> v;

bool f(int height) {
	int sum = 0;
	for(int i{} ; i<n ; i++) {
		if(v[i]>height) {
			sum+=(v[i]-height);
		}
	}
	if(sum >= m) {return true;}
	return false;
}

int32_t main() {
	cin>>n>>m;
	int max1{};
	for(int i{} ; i<n ; i++) {int x;cin>>x;v.push_back(x);max1 = max(max1,x);}
	int lo{},hi{max1};
	int ans{};
	while(lo<=hi) {
		int mid = lo+(hi-lo)/2;
		if(f(mid)) {
			ans = mid;
			lo = mid+1;
		} else {
			hi = mid-1;
		}
	}
	cout<<ans<<"\n";
}