// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,k;
//         cin>>n>>k;
//         map<int,vector<int>> m;
//         for(int i{} ; i<n ; i++) {
//             int x;
//             cin>>x;
//             m[x].push_back(i);
//         }
//         while(k--) {
//             int a,b;
//             cin>>a>>b;
//             bool ok = true;
//             if((m[a].size() == 0) || (m[b].size() == 0)) {
//                 ok = false;
//             } else {
//                 auto it1 = m[a].begin();
//                 auto it2 = m[b].end();
//                 it2--;
//                 if((*it1)<(*it2)) cout<<"YES\n";
//                 else cout<<"NO\n";
//             }
//             if(!ok) {
//                 cout<<"NO\n";
//             }
//         }
//     }
// }