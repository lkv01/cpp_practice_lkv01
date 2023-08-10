// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         char c;
//         string s;
//         cin>>n>>c;
//         cin>>s;
//         int gg{};
//         for(int i{} ; i<n ; i++) {
//             if(s[i]=='g') {
//                 gg = i+1;
//                 break;
//             }
//         }
//         int rx{};
//         vector<int> v;
//         for(int i{} ; i<n ; i++) {
//             if(s[i]==c) {
//                 rx=i+1;
//             } if((s[i]=='g')&&(rx>0)) {
//                 v.push_back(i+1-rx);
//                 rx=0;
//             }
//         }
//         if(rx>0) {
//             v.push_back((n-rx)+gg);
//         }
//         sort(v.begin(),v.end());
//         cout<<v.back()<<"\n";
//     }
// }




// #include <iostream>
// #include <string>
// #include <vector>
// #include <stack>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         char c;
//         string s;
//         cin>>n>>c;
//         cin>>s;
//         stack<int> st;
//         vector<int> v;
//         int gg{};
//         for(int i{} ; i<n ; i++) {
//             if(s[i]=='g') {
//                 gg=i+1;
//                 break;
//             }
//         }
//         for(int i{} ; i<n ; i++) {
//             if(s[i]==c) {
//                 st.push(i+1);
//             }
//             if((s[i]=='g') && (!st.empty())) {
//                 while(!st.empty()) {
//                     v.push_back((i+1)-st.top());
//                     st.pop();
//                 }
//             }
//         }
//         if(!st.empty()) {
//             while(!st.empty()) {
//                 v.push_back(n-st.top()+gg);
//                 st.pop();
//             }
//         }
//         sort(v.begin(),v.end());
//         cout<<v.back()<<"\n";
//     }
// }