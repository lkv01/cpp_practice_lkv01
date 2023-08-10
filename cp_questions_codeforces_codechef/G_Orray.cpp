// #include <iostream>
// #include <vector>
// #include <list>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         list<int> l;
//         int max{};
//         for(int i{} ; i<n ; i++) {
//             int x{};
//             l.push_back(x);
//             if(max < x) max = x;
//         }
//         vector<int> pre(n);
//         pre[0]=max;
//         auto it1 = find(l.begin(),l.end(),max);
//         l.erase(it1);
//         int Orr{};
//         for(int i{1} ; i<=n ; i++) {
//             int temp_orr{Orr};
//             if(l.size()>0) {
//                 for(auto it = l.begin() ; it!=l.end();it++) {
//                     if(temp_orr < ((pre[i-1])|(*it))) {
//                         pre[i] = (*it);
//                         temp_orr = ((pre[i-1])|(*it));
//                     }
//                 }
//                 auto it2 = find(l.begin(),l.end(),pre[i]);
//                 l.erase(it2);
//             }
//             Orr = temp_orr;
//         }
//         for(auto elem:pre) {
//             cout<<elem<<" ";
//         }
//         cout<<"\n";
//     }
// }