// #include <iostream>
// #include <string>
// #include <stack>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
    
//     if(n%2 != 0) {
//         cout<<"No\n";
//     } else {
//         stack<char> st;
//         bool flag = true;
//         for(int i{} ; i<n ; i++) {

//             if(st.empty() || s[i]=='(') {
//                 st.push(s[i]);
//             } else if(s[i]==')') { 
//                 if(st.top()==')') {
//                     cout<<"No\n";
//                     flag = false;
//                     break;
//                 } else {
//                     st.pop();
//                 }
//             }
//         }
//         if(flag) {
//             if(st.size()<=2) {
//                 if(st.empty()) {
//                     cout<<"Yes\n";
//                 } else {
//                     char c1 = st.top();
//                     st.pop();
//                     char c2 = st.top();
//                     if((c1=='(') && (c2=='(')) {
//                         cout<<"No\n";
//                     } else {
//                         cout<<"Yes\n";
//                     }
//                 }                
//             } else {
//                 cout<<"No\n";
//             }
//         }        
//     }
    
// }