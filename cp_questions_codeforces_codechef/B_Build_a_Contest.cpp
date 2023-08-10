// #include <iostream>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n,m;
//     cin>>n>>m;
//     map<int,int> mp;
//     for(int i{} ; i<m ; i++) {
//         int x;cin>>x;
//         mp[x]++;
//         if((int)mp.size()==n) {
//             if(mp.size()>1) {
//                 for(auto it = mp.end() ; it != mp.begin() ; ) {
//                     auto it1 = it;
//                     it1--;
//                     (it1->second)--;
//                     if((it1->second) == 0) mp.erase(it1);
//                     else it--;
//                 }
//                 cout<<"1";
//             } else {
//                 cout<<"1";
//             }
            
//         } else {
//             cout<<"0";
//         }
//     }
// }