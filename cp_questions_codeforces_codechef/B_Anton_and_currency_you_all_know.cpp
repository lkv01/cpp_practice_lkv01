// #include <iostream>
// #include <string>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
//     int temp{};
//     for(int i{} ; i<(int)s.length() ; i++) {
//         int curr = s[i]-'0';
//         if(curr%2 == 0) temp++;
//     }
//     if(temp==0) {
//         cout<<"-1\n";
//     } else {
//         char c = s.back();
//         int last = c-'0';
//         for(int i{} ; i<(int)s.length()-1 ; i++) {
//             int curr = s[i]-'0';
//             if(curr%2 == 0) {
//                 if(temp != 1) {
//                     if(last>curr) {
//                         s.back()=s[i];s[i]=c;break;
//                     }
//                 } else {
//                     s.back()=s[i];s[i]=c;break;
//                 }
//                 temp--;
//             }
//         }
//         cout<<s<<"\n";
//     }
// }