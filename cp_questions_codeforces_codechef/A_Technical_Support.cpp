// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         stack<char> st;
//         for(int i{} ; i<n ; i++) {
//             if(s[i] == 'Q') {
//                 st.push('Q');
//             } else {
//                 if(!st.empty()) st.pop();
//             }
//         }
//         if(st.empty()) cout<<"Yes\n";
//         else cout<<"No\n";
//     }
//     return 0;
// }