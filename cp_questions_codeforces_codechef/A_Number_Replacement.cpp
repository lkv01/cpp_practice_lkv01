// #include <iostream>
// #include <string>
// #include <map>
// int arr[50];
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         map<int,char> m;
//         for(int i{} ; i<n ; i++) {
//             cin>>arr[i];
//         }
//         string s;
//         cin>>s;
//         bool flag = true;
//         for(int i{} ; i<n ; i++) {
//             if(m[arr[i]] == '\0') {
//                 m[arr[i]] = s[i];
//             } else {
//                 if(s[i] != m[arr[i]]) {
//                     cout<<"NO\n";
//                     flag = false;
//                     break;
//                 }
//             }
//         }

//         if(flag) {
//             cout<<"YES\n";
//         }
//     }
// }