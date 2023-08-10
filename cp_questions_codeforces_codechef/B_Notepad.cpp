// #include <iostream>
// #include <string>
// #include <set>
// #include <map>
// #include <algorithm>
// using namespace std;

// int front(set<int> s) {
//     auto it1 = s.begin();
//     return (*it1);
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         map<char,set<int>> m;
//         bool flag = true;
//         for(int i{} ; i<n ; i++) {
//             bool flag1 = true;
//             if(i<(n-1)) {
//                 if(m[s[i]].size() != 0) {
//                     for(auto elem:m[s[i]]) {
//                         if(((elem+1)!=i)&&(s[elem+1]==s[i+1])) {
//                             flag = false;
//                             flag1 = false;
//                             cout<<"YES\n";
//                             break;
//                         }
//                     }
//                 }
//                 if(flag1 == false) {
//                     break;
//                 }
//             }
//             m[s[i]].insert(i);
//         }
//         if(flag) {
//             cout<<"NO\n";
//         }
//     }
// }