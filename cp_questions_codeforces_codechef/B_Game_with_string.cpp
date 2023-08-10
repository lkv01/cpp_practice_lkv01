// #include <iostream>
// #include <string>
// #include <stack>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
//     stack<char> st;
//     int cnt{};
//     for(size_t i{} ; i<s.length() ; i++) {
//         if(st.empty() || (s[i]!=st.top())) {
//             st.push(s[i]);
//         } else if(s[i]==st.top()) {
//             st.pop();
//             cnt++;
//         }
//     }
//     if(cnt%2 != 0) cout<<"Yes\n";
//     else cout<<"No\n";
// }