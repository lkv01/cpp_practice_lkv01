// #include <iostream>
// #include <string>
// #include <map>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         string s;
//         cin>>s;
//         map<char,int> m;
//         for(size_t i{} ; i<s.length() ; i++) {
//             m[s[i]]++;
//         }
//         int x{},y{};
//         for(auto it = m.begin() ; it != m.end() ; it++) {
//             if((it->second)==1) {
//                 x++;
//             } else {
//                 y++;
//             }
//         }
//         cout<<((x/2) + y)<<"\n";
//     }
// }