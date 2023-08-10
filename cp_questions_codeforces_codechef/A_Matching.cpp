/*
        L               K      K     V           V
        L               K    K        V         V
        L               K  K           V       V
        L               KK              V     V
        L               K  K             V   V
        L               K    K            V V
        L L L L L L     K      K           V    
*/

// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <list>
// #include <set>
// #include <map>
// #include <stack>
// #include <queue>
// #include <algorithm>
// #include <cmath>
// typedef long long ll;
// #define vi vector<int>
// #define mi map<int,int>
// #define pii pair<int,int>


#include <bits/stdc++.h>
using namespace std;
int32_t main() {
    // lp_hp_sieve(int n);
    int t;
    cin>>t;
    while(t--) {
        string s;cin>>s;
        int n = s.length();
        vector<int> vec;
        for(int i{} ; i<n ; i++) {
            if(s[i]=='?') {vec.push_back(i);}
        }
        if(s[0]=='0') {cout<<"0\n";continue;}
        if(vec.empty()) {
            if(s[0]=='0') {cout<<"0\n";continue;}
            else {cout<<"1\n";continue;}
        }
        int ans{1};
        for(auto elem:vec) {
            if(elem == 0) {
                ans*=9;
            } else {
                ans*=10;
            }
        }
        cout<<ans<<"\n";
    }
}