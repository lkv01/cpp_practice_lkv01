// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         string s;
//         cin>>s;
//         string g{"Yes"};
//         int i{};
//         if(s[0]=='Y') {
//             i=0;
//         } else if(s[0]=='e') {
//             i=1;
//         } else if(s[0]=='s') {
//             i=2;
//         }
//         else cout<<"NO\n";
//         bool flag = true;
//         for(size_t j{} ; j<s.length() ; j++) {
//             if((s[j]!=g[i])) {
//                 if(j==0) {
//                     flag = false;
//                     break;
//                 }
//                 flag = false;
//                 cout<<"NO\n";
//                 break;
//             } else {
//                 if(i<2) {
//                     i++;
//                 } else {
//                     i=0;
//                 }
//             }
//         }
//         if(flag) {
//             cout<<"YES\n";
//         }
//     }
// }