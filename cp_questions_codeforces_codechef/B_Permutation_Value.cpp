// #include <iostream>
// #include <vector>
// #include <deque>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         vector<int> v;
//         deque<int> d;
//         for(int i{1} ; i<=n ; i++) {
//             if((i&1) != 0) {
//                 v.push_back(i);
//             }
//             else {
//                 d.push_front(i);
//             }
//         }
//         for(auto elem : d) {
//             v.push_back(elem);
//         }
//         for(auto elem : v) {
//             cout<<elem<<" ";
//         }
//         cout<<"\n";
//     }
// }