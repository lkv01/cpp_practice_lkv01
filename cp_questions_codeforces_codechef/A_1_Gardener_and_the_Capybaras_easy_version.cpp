// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <list>
// #include <set>
// #include <map>
// #include <stack>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// // #define int int64_t
// // #define vi vector<int>
// // #define pi pair<int>
// // #define f first
// // #define s second
// // #define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--) {
//         string s;cin>>s;
//         map<char,int> m;
//         for(int i{} ; i<s.length() ; i++) {
//             m[s[i]]++;
//         }
//         if(m.size()==1) {
//             string s1{},s2{},s3{};
//             s1+=s[0];
//             s2+=s[1];
//             for(int i{2} ; i<s.length() ; i++) {
//                 s3+=s[i];
//             }
//             cout<<s1<<" "<<s2<<" "<<s3<<"\n";
//             continue;
//         }

//         if(s.front() == 'a') {
//             string s1{},s2{},s3{};
//             s1+='a';
//             for(int i{1} ; i<s.length() ; i++) {
//                 if(s3.length()>0) {
//                     s3+=s[i];
//                 } else {
//                     if((s[i]=='a') && (s2.length()==0)) {
//                         s1+='a';
//                     } else if((s[i]=='b') && ((s2.length()==0) || (s2.back()=='b'))) {
//                         s2+='b';
//                     } else {
//                         s3+=s[i];
//                     }
//                 }
//             }
//             bool flag = true;
//             if(s3.length()==0) {
//                 flag = false;
//                 if(s2.length()>1) {
//                     s3+=s2.back();s2.pop_back();
//                     cout<<s1<<" "<<s2<<" "<<s3<<"\n";
//                 }
//                 else {
//                     s3+=s1.back();s1.pop_back();
//                     cout<<s1<<" "<<s3<<" "<<s2<<"\n";
//                 }
//             }
//             if(flag) {
//                 cout<<s1<<" "<<s2<<" "<<s3<<"\n";
//             }
//         } else {
//             string s1{},s2{},s3{};
//             s1+='b';
//             for(int i{1} ; i<s.length() ; i++) {
//                 if(s3.length()>0) {
//                     s3+=s[i];
//                 } else {
//                     if((s[i]=='b') && (s2.length()==0)) {
//                         s1+='b';
//                     } else if((s[i]=='a') && ((s2.length()==0) || (s2.back()=='a'))) {
//                         s2+='a';
//                     } else {
//                         s3+=s[i];
//                     }
//                 }
//             }
//             bool flag = true;
//             if(s3.length()==0) {
//                 flag = false;
//                 if(s2.length()>1) {
//                     s3+=s2.front();s2.pop_back();
//                     cout<<s1<<" "<<s3<<" "<<s2<<"\n";
//                 }
//                 else {
//                     s3+=s1.front();s1.pop_back();
//                     cout<<s3<<" "<<s1<<" "<<s2<<"\n";
//                 }
//             }
//             if(flag) {
//                 cout<<s1<<" "<<s2<<" "<<s3<<"\n";
//             }
//         }
//     }
	
// }