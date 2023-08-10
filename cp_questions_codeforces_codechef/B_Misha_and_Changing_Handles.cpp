// #include <iostream>
// #include <string>
// #include <unordered_map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     unordered_map<string,int> mp1;
//     unordered_map<string,string> mp2;
//     while(t--) {
//         string s1,s2;
//         cin>>s1>>s2;
//         if(mp1[s1]==0) {
//             mp2[s1] = s2;
//         } else {
//             for(auto it = mp2.begin() ; it != mp2.end() ; it++) {
//                 if(it->second == s1) {
//                     it->second = s2;
//                 }
//             }
//         }
//         mp1[s1]++;
//         mp1[s2]++;
//     }
//     cout<<mp2.size()<<"\n";
//     for(auto it = mp2.begin() ; it != mp2.end() ; it++) {
//         cout<<(it->first)<<" "<<(it->second)<<"\n";
//     }
// }