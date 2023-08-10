// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main() {
//     int n,x,y;
//     cin>>n>>x>>y;
//     string s;
//     cin>>s;
//     reverse(s.begin(),s.end());
//     int ans{};
//     if(s[y] == '0') {
//         s[y] = '1';
//         ans++;
//     }
//     for(int i{} ; i<x ; i++) {
//         if((s[i] == '1')&&(i!=y)) {
//             s[i]='0';
//             ans++;
//         }
//     }
//     cout<<ans<<"\n";
// }