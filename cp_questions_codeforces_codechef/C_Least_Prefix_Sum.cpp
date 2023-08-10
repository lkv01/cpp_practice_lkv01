// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <list>
// #include <set>
// #include <map>
// #include <stack>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,m;cin>>n>>m;
//         vector<int> v,pre(n);
//         int min1{(int)1e9},ind{};
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;v.push_back(x);
//             if(i==0) pre[i]=x;
//             else pre[i]=x+pre[i-1];
//             if(min1 < pre[i]) {min1=pre[i];ind=i;}
//         }
//         if(pre[ind]=min1) {cout<<"0\n";continue;}

//     }
// }