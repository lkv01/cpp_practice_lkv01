// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int m;
//     cin>>m;
//     string s;
//     cin>>s;
//     int n = (1<<m);
//     deque<int> odd;
//     deque<int> even;
//     for(int i{1} ; i<=n ; i+=2) {
//         odd.push_back(i);
//     }
//     for(int i{2} ; i<=n ; i+=2) {
//         even.push_back(i);
//     }
//     for(int i{0} ; i<m ; i++) {
//         if(s[i]=='0') {
//             even.pop_back();
//         } else {
//             odd.pop_front();
//         }
//     }
//     int z = odd.front();
//     z-=2;
//     while(even.front() < z) {
//         even.pop_front();
//     }
//     int s1 = odd.size();
//     int s2 = even.size();
//     vector<int> v;
//     for(int i{} ; i<s1 ; i++) {
//         v.push_back(odd.front());
//         odd.pop_front();
//     }
//     for(int i{} ; i<s2 ; i++) {
//         v.push_back(even.front());
//         even.pop_front();
//     }
//     sort(v.begin(),v.end());
//     int vs = v.size();
//     if(v.size() >= 1) {
//         for(int i{} ; i<(vs-1) ; i++) {
//             cout<<v[i]<<" ";
//         }
//         cout<<v[vs-1];
//     }
// }