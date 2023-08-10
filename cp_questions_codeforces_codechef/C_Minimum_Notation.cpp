// #include <iostream>
// #include <string>
// #include <set>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         string s;
//         cin>>s;
//         multiset<int> ms;
//         int minval{10},minindex{0};
//         for(size_t i{0} ; i<s.length() ; i++) {
//             if(minval >= (s[i]-'0')) {
//                 minval = (s[i]-'0');
//                 minindex = i;
//             }
//         }
//         int c = count(s.begin(),s.end(),minval);
//         while(c--) {
//             ms.insert(minval);
//         }
//         if(minindex<((int)s.length()-1)) {
//             for(int i{minindex+1} ; (size_t)i<s.length() ; i++) {
//                 ms.insert(s[i]-'0');
//             }
//         }
//         for(int i{} ; i<minindex ; i++) {
//             if((s[i]-'0')!=minval) {
//                 if((s[i]-'0') == 9) {
//                     ms.insert(s[i]-'0');
//                 } else {
//                     ms.insert(s[i]-'0'+1);
//                 }
//             }
//         }
//         for(auto elem:ms) {
//             cout<<elem;
//         }
//         cout<<"\n";
//     }
// }


// #include <iostream>
// #include <string>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         string s;
//         cin>>s;
//         char min1 = '9';
//         int n = s.length();
//         for(int i{n-1} ; i>=0 ; i--) {
//             if(s[i]<=min1) {
//                 min1 = s[i];
//             } else {
//                 s[i] = min(((char)(s[i]+1)),(char)'9');
//             }
//         }
//         sort(s.begin(),s.end());
//         cout<<s<<"\n";
//     }
// }