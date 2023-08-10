// #include <iostream>
// #include <string>
// #include <set>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         string str;
//         cin>>str;
//         set<char> s;
//         int ans{1};
//         for(size_t i{} ; i<str.length() ; i++) {
//             if(s.size() < 3) {
//                 s.insert(str[i]);
//             } else if(s.size() == 3) {
//                 auto it = s.find(str[i]);
//                 if(it!=s.end()) {
//                     continue;
//                 } else {
//                     s.clear();
//                     ans++;
//                     s.insert(str[i]);
//                 }
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }