// #include <iostream>
// #include <vector>
// #include <set>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int temp{};
//         int n;cin>>n;
//         set<int> s,st,st2;
//         map<int,int> m;
//         vector<vector<int>> v;
//         for(int i{} ; i<n ; i++) {
//             int k;cin>>k;
//             vector<int> v1;
//             while(k--) {
//                 int x;cin>>x;v1.push_back(x);s.insert(x);m[x]++;
//                 if(m[x]<2) temp++;
//                 else temp--;
//             }
//             v.push_back(v1);
//         }

//         if(temp>0) {
//             cout<<"No\n";continue;
//         }

//         bool ok1 = false;
//         for(int i{} ; i<(n-1) ; i++) {
//             for(auto elem : v[i]) {
//                 st.insert(elem);
//             }
//             if(st.size()==s.size()) {
//                 ok1 = true;break;
//             }
//         }
//         bool ok2 = false;
//         for(int i{n-1} ; i>0 ; i--) {
//             for(auto elem : v[i]) {
//                 st2.insert(elem);
//             }
//             if(st2.size()==s.size()) {
//                 ok2 = true;break;
//             }
//         }
//         if(ok1 || ok2) cout<<"Yes\n";
//         else cout<<"No\n";
//     }
// }

// #include <iostream>
// #include <vector>
// #include <set>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         map<int,vector<int>> m;
//         int n;cin>>n;
//         for(int i{} ; i<n ; i++) {
//             int k;cin>>k;
//             while(k--) {int x;cin>>x;m[x].push_back(i);}
//         }
//         set<int> s;
//         for(auto it:m) {
//             if(it.second.size()==1) {
//                 s.insert(it.second.front());
//             }
//         }
//         if(s.size()==n) cout<<"No\n";
//         else cout<<"Yes\n";
//     }
// }