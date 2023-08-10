// #include <iostream>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     map<int,ll> m;
//     int a[n+1] = {};
//     for(int i{1} ; i<=n ; i++) {
//         cin>>a[i];
//         m[i-a[i]]+=a[i];
//     }
//     ll max1{0LL};
//     for(auto it = m.begin() ; it != m.end() ; it++) {
//         max1 = max(max1,it->second);
//     }
//     cout<<max1<<"\n";
// }