// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     vector<int> v,v1;
//     int n;
//     cin>>n;
//     for(int i{} ; i<n ; i++) {
//         int x;cin>>x;
//         v.push_back(x);
//     }
//     sort(v.begin(),v.end());
//     v1 = v;
//     int x = v.front();
//     auto it = v.begin();
//     auto it1 = upper_bound(v1.begin(),v1.end(),x);
//     int ans{};
//     while(it1 != v1.end()) {
//         if((*it)<(*it1)) {
//             ans++;
//             it++;
//             it1++;
//         } else {
//             it1++;
//         }
//     }
//     cout<<ans<<"\n";
// }