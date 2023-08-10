// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n,m;
//     cin>>n>>m;
//     vector<int> a(n),b(m);
//     for(int i{} ; i<n ; i++) {
//         cin>>a[i];
//     }
//     sort(a.begin(),a.end());
//     for(int i{} ; i<m ; i++) {
//         cin>>b[i];
//         int x = a.end()-upper_bound(a.begin(),a.end(),b[i]);
//         cout<<(n-x)<<" ";
//     }
// }