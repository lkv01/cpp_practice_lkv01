// #include <iostream>
// #include <string>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         string s1{};
//         int val{};
//         if(s[0]=='0') {
//             val = 0;
//         } else {
//             val = 1;
//         }
//         for(int i{1} ; i<n ; i++) {
//             if(val==0) {
//                 s1.push_back('+');
//                 val+=(s[i]-'0');
//             } else {
//                 s1.push_back('-');
//                 val-=(s[i]-'0');
//             }
//         }
//         cout<<s1<<"\n";
//     }
// }