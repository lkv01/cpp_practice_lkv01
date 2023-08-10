// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// using namespace std;
// int main() {
//     int n,d;
//     cin>>n>>d;
//     int a,b;
//     cin>>a>>b;
//     vector<pair<int,int>> v(n);
//     for(int i{} ; i<n ; i++) {
//         int x,y;
//         cin>>x>>y;
//         int z = x*a+y*b;
//         v[i].first=z;
//         v[i].second=i+1;
//     }
//     sort(v.begin(),v.end());
    
//     int ans1{};
//     vector<int> ans2;
//     for(int i{} ; i<n ; i++) {
//         if((d-v[i].first)>=0) {
//             ans1++;
//             d-=v[i].first;
//             ans2.push_back(v[i].second);
//         }
//     }
//     cout<<ans1<<"\n";
//     for(auto elem : ans2) {
//         cout<<elem<<" ";
//     }
//     cout<<"\n";
// }