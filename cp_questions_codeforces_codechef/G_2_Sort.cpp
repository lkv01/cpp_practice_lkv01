// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,k;
//         cin>>n>>k;
//         k++;
//         int z{1};
//         vector<int> v,vec;
//         int elem;cin>>elem;
//         v.push_back(elem);
//         for(int i{1} ; i<n ; i++) {
//             int x;cin>>x;
//             if(v.back() < (2*x)) {
//                 z++;
//                 v.push_back(x);
//             } else {
//                 vec.push_back(z);
//                 z=1;
//                 v.push_back(x);
//             }
//         }
//         vec.push_back(z);
//         int ans{};
//         for(auto elem:vec) {
//             if(elem >= k) {
//                 ans+=(elem-k+1);
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }