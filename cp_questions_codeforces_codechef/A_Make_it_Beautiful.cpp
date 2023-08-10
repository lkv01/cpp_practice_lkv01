// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         vector<int> a(101);
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;
//             a[x]++;
//         }
//         vector<int> v1{};
//         int sum{};
//         bool flag = true;
//         while(flag) {
//             bool flag1 = false;
//             for(int i{100} ; i>0 ; i--) {
//                 if(a[i]>0) {
//                     v1.push_back(i);
//                     a[i]--;
//                     if(flag1==false) {
//                         if(a[i]>0) {
//                             flag = true;
//                             flag1 = true;
//                         }
//                     }
//                 }
//             }
//             if(flag1==false) break;
//         }
//         bool ok = true;
//         for(int i{} ; i<n ; i++) {
//             if(sum==v1[i]) {
//                 ok = false;
//                 break;
//             }
//             sum+=v1[i];
//         }
//         if(ok == false) {
//             cout<<"NO\n";
//         } else {
//             cout<<"YES\n";
//             for(auto elem:v1) {
//                 cout<<elem<<" ";
//             }
//             cout<<"\n";
//         }
//     }
// }