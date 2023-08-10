// #include <iostream>
// #include <string>
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
//         s1.push_back(s[0]);
//         int x{1};

//         int ans{};
//         for(int i{1} ; i<n ; i++) {
//             if((x%2) != 0) {
//                 if(s[i]!=s1.back()) {
//                     s1.push_back(s1.back());
//                     ans++;
//                 } else {
//                     s1.push_back(s[i]);
//                 }
//                 x++;
//             } else {
//                 s1.push_back(s[i]);
//                 x++;
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }