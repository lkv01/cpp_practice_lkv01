// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int solve(int &x) {
//     while(x%2 == 0) {
//         x/=2;
//     }
//     while(x%3 == 0) {
//         x/=3;
//     }
//     return x;
// }
// int main() {
//     int n;cin>>n;
//     vector<int> v;
//     for(int i{} ; i<n ; i++) {
//         int x;cin>>x;
//         v.push_back(x);
//     }
//     int temp = solve(v[0]);
//     bool flag = true;
//     for(int i{1} ; i<n ; i++) {
//         int z = solve(v[i]);
//         if(z!=temp) {
//             flag = false;break;
//         }
//     }
//     if(flag) cout<<"Yes\n";
//     else cout<<"No\n";
// }