// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,H,M;
//         cin>>n>>H>>M;
//         int x1 = (60*H)+M;
//         vector<pair<int,int>> v(n); 
//         for(int i{} ; i<n ; i++) {
//             cin>>v[i].first>>v[i].second;
//         }
//         sort(v.begin(),v.end());
//         auto it = v.begin();
//         for( ; it != v.end() ; it++) {
//             if(H > (it->first)) {
//                 continue;
//             } else if(H == (it->first))  {
//                 if(M > (it->second)) {
//                     continue;
//                 } else if(M <= (it->second)) {
//                     break;
//                 }
//             }
//             else {
//                 break;
//             }
//         }
//         if(it!= v.end()) {
//             int x2 = (it->first)*60 + (it->second);
//             int z = x2-x1;
//             cout<<(z/60)<<" "<<(z%60)<<"\n";
//         } else {
//             int x3 = (v[0].first)*60 + (v[0].second);
//             int x4 = (24*60)-(H*60 + M);
//             int z = x3+x4;
//             cout<<(z/60)<<" "<<(z%60)<<"\n";
//         }
//     }
// }