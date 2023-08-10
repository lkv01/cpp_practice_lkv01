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
//         int ans{1},z{1};
//         cout<<ans<<" ";
//         bool flag = true;
//         for(int i{1} ; i<(n-1) ; i++) {
//             if(s[i]==s[i-1]) {
//                 cout<<ans<<" ";
//                 z++;
//                 flag = false;
//             } else {
//                 if(flag == false) {
//                     ans+=z;
//                     z=1;
//                     cout<<ans<<" ";
//                     flag = true;
//                 } else {
//                     ans++;
//                     cout<<ans<<" ";
//                 }
//             }
//         }
//         cout<<"\n";
//     }
// }