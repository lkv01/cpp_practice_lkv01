// #include <iostream>
// #include <string>
// #include <map>
// #include <algorithm>
// using namespace std;

// int price(string w) {
//     int pri{};
//     for(size_t i{} ; i<w.length() ; i++) {
//         pri+=(w[i]-'a'+1);
//     }
//     return pri;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         // string W;
//         // cin>>W;
//         // int p;
//         // cin>>p;
//         // string s = W;
//         // int w = price(s);
//         // while(w>p) {
//         //     string s1 = s;
//         //     sort(s1.begin(),s1.end());
//         //     int j = s.find(s1.back());
//         //     string s2{};
//         //     for(size_t i{} ; i<s1.length() ; i++) {
//         //         if((int)i==j) continue;
//         //         else s2.push_back(s[i]);
//         //     }
//         //     s=s2;
//         //     w=price(s);
//         // }
//         // cout<<s<<"\n";
//         string W;
//         cin>>W;
//         int p;
//         cin>>p;
//         string s = W;
//         sort(s.begin(),s.end());
//         int sum{};
//         map<char,int> m;
//         for(size_t i{} ; i<s.length() ; i++) {
//             sum+=(s[i]-'a'+1);
//             if(sum<=p) m[s[i]]++;
//             else break;
//         }
//         string ans{};
//         for(size_t i{} ; i<W.length() ; i++) {
//             if(m[W[i]]>0) {
//                 ans.push_back(W[i]);
//                 m[W[i]]--;
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }