// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         vector<int> v(n);
//         for(int i{} ; i<n ; i++) {
//             cin>>v.at(i);
//         }
//         auto it1 = v.begin();
//         while(it1 != v.end()) {
//             for(auto it2 = it1+1 ; it2 != v.end() ; it2++) {
//                 int z = abs((*it2)-(*it1));
//                 auto it = find(v.begin(),v.end(),z);
//                 if(it != v.end()) {
//                     continue;
//                 } else {
//                     v.push_back(z);
//                 }
//             }
//             it1++;
//         }
//         cout<<v.size()<<"\n";
//     }
// }