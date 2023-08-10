// #include <iostream>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n,m;
//     cin>>n>>m; 
//     int a[n+1] = {};
//     for(int i{1} ; i<=n ; i++) {
//         cin>>a[i];
//     }
//     map<int,int> mp;
//     int v[n+1] = {};
//     for(int i{n} ; i>0 ; i--) {
//         mp[a[i]]++;
//         v[i] = mp.size();        
//     }
//     while(m--) {
//         int x;
//         cin>>x;
//         cout<<v[x]<<"\n";
//     }
// }