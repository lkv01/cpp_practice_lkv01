// #include <iostream>
// #include <string>
// #include <vector>
// #include <map>
// #include <stack>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     map<int,int> mp;
//     vector<int> v;
//     for(int i{1} ; i<=n ; i++) {
//         int x;cin>>x;
//         v.push_back(x);
//         mp[x] = i;
//     }
//     sort(v.rbegin(),v.rend());
//     stack<int> st;
//     string s;cin>>s;
//     for(int i{} ; i<(2*n) ; i++) {
//         if(s[i]=='0') {
//             cout<<mp[v.back()]<<" ";
//             st.push(v.back());
//             v.pop_back();
//         } else {
//             cout<<mp[st.top()]<<" ";
//             st.pop();
//         }
//     }
// }