// #include <iostream>
// #include <string>
// #include <algorithm>
// #define ll long long
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     string s = "Timur";
//     ll int n1{};
//     for(int i{} ; i<5 ; i++) {
//         n1|=(1LL<<(s[i]-'A'+1));
//     }
//     while(t--) {
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         bool flag = true;
//         if(n>5) {
//             flag = false;
//             cout<<"NO\n";
//         }
//         ll int n2{};
//         for(int i{} ; i<n ; i++) {
//             n2|=(1LL<<(s[i]-'A'+1));
//         }
//         if(flag) {
//             if(n2==n1) cout<<"YES\n";
//             else cout<<"NO\n";
//         }
//     }
// }