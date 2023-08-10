// #include <iostream>
// #include <string>
// #include <vector>
// #include <set>
// #include <map>
// #include <stack>
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
//         map<char,int> st;
//         for(int i{} ; i<n ; i++) {
//             st[s[i]]++;
//         }
//         vector<int> v;
//         //set<char> st2;
//         bool flag = true;

//         stack<char> stk1;
//         for(int i{} ; i<n ; i++) {
//             if(stk1.empty() || s[i]!=stk1.top()) {
//                 stk1.push(s[i]);
//             } else if(s[i]==stk1.top()) {
//                 stk1.pop();
//             }
//         }
//         if(stk1.empty()) {
//             cout<<"0\n";
//             continue;
//         }

//         for(auto it = st.begin() ; it != st.end() ; it++) {

//             stack<char> stk;
//             int z = n-(it->second);
//             int j{},mid{(z+1)/2};
//             for(int i{} ; i<n ; i++) {
//                 if(s[i]==(it->first)) continue;
//                 j++;
//                 if((z%2 != 0) && (j==mid)) continue;
//                 if(stk.empty() || s[i]!=stk.top()) {
//                     stk.push(s[i]);
//                 } else if(s[i]==stk.top()) {
//                     stk.pop();
//                 }
//             }

//             if(stk.empty() || stk.size()==1) {
//                 v.push_back(it->second);
//                 flag = false;
//             }
//         }
//         if(flag) {
//             cout<<"-1\n";
//         } else {
//             sort(v.begin(),v.end());
//             cout<<v.front()<<"\n";
//         }
//     }
// }