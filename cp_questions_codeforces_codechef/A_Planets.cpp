// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <list>
// #include <set>
// #include <unordered_map>
// #include <stack>
// #include <algorithm>
// using namespace std;
// int a[100];
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,c;
//         cin>>n>>c;
//         unordered_map<int,int> m;
//         for(int i{} ; i<n ; i++) {
//             cin>>a[i];
//             m[a[i]]++;
//         }
//         int sum{};
//         for(auto it = m.begin() ; it != m.end() ; it++) {
//             int x = it->second;
//             if(x < c) sum+=x;
//             else sum+=c;
//         }
//         cout<<sum<<"\n";
//     }
// }