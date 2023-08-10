// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     string res;
//     res.push_back(s[0]);
//     for(int i{1} ; i<n ; i++) {
//         if(s[i]!=res.back()) {
//             res.push_back(s[i]);
//         } else {
//             if(res.length()%2 == 0) {
//                 res.push_back(s[i]);
//             }
//         }
//     }
//     if(res.length()%2 != 0) {
//         res.pop_back();
//     }
//     cout<<(n-res.length())<<"\n";
//     cout<<res<<"\n";
// }