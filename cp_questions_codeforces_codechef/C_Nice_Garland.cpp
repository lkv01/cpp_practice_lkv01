// #include <iostream>
// #include <string>
// #include <vector>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     vector<char> v{'R','G','B'};
//     int n;cin>>n;
//     string s;cin>>s;
//     string ans{};

//     if(n==1) {
//         cout<<"0\n"<<s<<"\n";
//     } else if(n==2) {
//         if(s[0]!=s[1]) {
//             cout<<"0\n"<<ans<<"\n";
//         } else {
//             ans.push_back(s[0]);
//             for(int i{} ; i<3 ; i++) {
//                 if(v[i] != s[0]) {
//                     ans.push_back(v[i]);break;
//                 }
//             }
//             cout<<"1\n"<<ans<<"\n";
//         }
//     } else if(n==3) {
//         map<char,int> m;
//         int cnt{};
//         for(auto elem:s) {
//             if(m[elem]==0) {
//                 ans+=elem;m[elem]++;
//             } else {
//                 cnt++;
//                 for(auto z:v) {
//                     if(m[z]==0) {
//                         ans+=z;m[z]++;break;
//                     }
//                 }
//             }
//         }
//         cout<<cnt<<"\n"<<ans<<"\n";
//     }
//     else {
//         map<char,int> m,mp;
//         int cnt{};
//         for(int i{} ; i<s.length() ; i++) {
//             if(i<3) {
//                 if(mp[s[i]]==0) {
//                     ans+=s[i];mp[s[i]]++;m[s[i]]=i;
//                 } else {
//                     cnt++;
//                     for(auto z:v) {
//                         if(mp[z]==0) {
//                             ans+=z;mp[z]++,m[z]=i;break;
//                         }
//                     }
//                 }
//             } else {
//                 if((i-m[s[i]])<3) {
//                     cnt++;ans+=ans[i-3];m[ans.back()]=i;
//                 } else {
//                     ans+=s[i];m[ans.back()]=i;
//                 }
//             }
//         }
//         cout<<cnt<<"\n"<<ans<<"\n";
//     }
    
// }