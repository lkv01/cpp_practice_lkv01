// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <list>
// #include <set>
// #include <map>
// #include <stack>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         string s,s1{};
//         cin>>s;
//         for(int i{n-1} ; i>=0 ; ) {
//             if(s[i] == '0') {
//                 int z = 10*(int(s[i-2])-48)+(int(s[i-1])-48);
//                 s1.push_back(char(97+z-1));
//                 i-=3;
//             } else {
//                 int z = int(s[i]-48);
//                 s1.push_back(char(97+z-1));
//                 i--;
//             }
//         }
//         reverse(s1.begin(),s1.end());
//         cout<<s1<<"\n";
//     }
// }