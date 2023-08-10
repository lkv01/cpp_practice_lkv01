// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         vector<ll> v(n+2);
//         for(int i{} ; i<(n+2) ; i++) {
//             cin>>v[i];
//         }
//         sort(v.begin(),v.end());
//         ll sum{};
//         for(int i{} ; i<n ; i++) {
//             sum+=(v[i]);
//         }
//         if(v[n]==sum) {
//             for(int i{} ; i<n ; i++) {
//                 cout<<v[i]<<" ";
//             }
//             cout<<"\n";
//             continue;
//         } else {
//             sum+=v[n];
//             if(v[n+1] >= sum) {
//                 cout<<"-1\n";
//                 continue;
//             } else {
//                 vector<int> vec;
//                 int ii{};
//                 bool flag = true;
//                 for(int i{} ; i<(n+1) ; i++) {
//                     if((sum-v[i]) == v[n+1]) {
//                         ii=i;
//                         flag = false;
//                         break;
//                     }
//                 }
//                 if(flag) {
//                     cout<<"-1\n";
//                     continue;
//                 }
//                 for(int i{} ; i<(n+1) ; i++) {
//                     if(i==ii) continue;
//                     cout<<v[i]<<" ";
//                 }
//                 cout<<"\n";
//             }
//         }
//     }
// }