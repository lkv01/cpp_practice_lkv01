// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// using namespace std;
// int main() {
//     int n,m;
//     cin>>n>>m;

//     vector<int> arr(n+1);
//     for(int i{1} ; i<=n ; i++) {
//         cin>>arr[i];
//     }
//     vector<set<int>> dt(n+1);
//     vector<set<int>> td(n+1);

//     while(m--) {
//         int d,t;
//         cin>>d>>t;
//         dt[d].insert(t);
//         td[t].insert(d);
//     }
//     int day{};
//     int cash{};
//     bool flag = true;
//     while(flag) {
//         day++;
//         cash++;
//         int z = dt[day].size();
//         if(z > 0) {
//             int min{100000},minelem{};
//             for(auto elem:dt[day]) {
//                 if((arr[elem]>0) && (min > td[elem].size())) {
//                     min = td[elem].size();
//                     minelem = elem;
//                 }
//                 td[elem].erase(day);
//             }
//             if(arr[minelem]>0) {
//                 arr[minelem]--;
//                 cash--;
//             }
//         } else {
//             int sum{};
//             for(int i{1} ; i<=n ; i++) {
//                 sum+=arr[i];
//             }
//             if(cash==(2*sum)) break;
//             else continue;
//         }
//     }
//     cout<<day<<"\n";
// }