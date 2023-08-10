// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,k;cin>>n>>k;
//         vector<int> a;
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;
//             a.push_back(x);
//         }
//         int ans{};
//         for(int i{30} ; i>=0 ; i--) {
//             int cnt{};
//             bool flag = true;
//             for(int j{} ; j<n ; j++) {
//                 if(((a[j]>>i)&1)==0) {
//                     cnt++;flag = false;
//                 }
//             }
//             if(flag) {
//                 ans+=(1<<i);continue;
//             }
//             if(cnt<=k) {
//                 k-=cnt;
//                 ans+=(1<<i);
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }