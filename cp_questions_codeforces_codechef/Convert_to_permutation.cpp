// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         vector<int> v;
//         for(int i{} ; i<n ; i++) {
//             int x;
//             cin>>x;
//             v.push_back(x);
//         }
//         sort(v.begin(),v.end());
//         int z{n};
//         int ans{};
//         bool flag = true;
//         int i{n-1};
//         while(i>=0) {
//             if(v.back()>z) {
//                 cout<<"-1\n";
//                 flag = false;
//                 break;
//             } else {
//                 ans+=(z-v.back());
//                 v.pop_back();
//                 z--;
//             }
//             i--;
//         }
//         if(flag) cout<<ans<<"\n";
//     }
// }