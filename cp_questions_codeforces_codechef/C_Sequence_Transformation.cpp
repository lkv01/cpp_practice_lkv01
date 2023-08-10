// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         map<int,int> m;
//         vector<int> v;
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;v.push_back(x);
//         }
//         for(int i{1} ; i<n ; i++) {
//             if(v[i]!=v[i-1]) m[v[i]]++;
//         }
//         for(auto it = m.begin() ; it != m.end() ; it++) {
//             if((it->first) != v.back()) (it->second)++;
//         }
//         auto it1 = m.find(v.front());
//         if(it1 == m.end()) m[v.front()]++;
//         if(m.size()==1) {cout<<"0\n";continue;}
//         int min1{(int)1e9};
//         for(auto it:m) {
//             min1=min(min1,it.second);
//         }
//         cout<<min1<<"\n";
//     }
// }