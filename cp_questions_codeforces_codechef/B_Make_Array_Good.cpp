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
//         vector<pair<int,int>> v;
//         for(int i{} ; i<n ; i++) {
//             int x;
//             cin>>x;
//             v.push_back({x,i+1});
//         }
//         sort(v.begin(),v.end());

//         vector<pair<int,int>> v2;
//         for(int i{1} ; i<n ; i++) {
//             if(((v[i].first)%(v[i-1].first)) != 0) {
//                 if(v[i]>v[i-1]) {
//                     int z = (v[i-1].first)-((v[i].first)%(v[i-1].first));
//                     v2.push_back({(v[i].second),z});
//                     (v[i].first)+=z;
//                 } else {
//                     int z = (v[i-1].first)-(v[i].first);
//                     v2.push_back({(v[i].second),z});
//                     v[i] = v[i-1];
//                 }
//             }
//         }
//         cout<<(v2.size())<<"\n";
//         for(size_t i{} ; i<v2.size() ; i++) {
//             cout<<(v2[i].first)<<" "<<(v2[i].second)<<"\n";
//         }
//     }
// }