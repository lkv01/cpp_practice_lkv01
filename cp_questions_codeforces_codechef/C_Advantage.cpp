// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         vector<int> v1;
//         vector<int> v2;
//         for(int i{} ; i<n ; i++) {
//             int x;
//             cin>>x;
//             v1.push_back(x);
//             v2.push_back(x);
//         }
//         sort(v1.begin(),v1.end());
//         for(int i{} ; i<n ; i++) {
//             int x = v2[i]-v1[n-1];
//             if(x == 0) {
//                 cout<<v2[i]-v1[n-2]<<" ";
//             }
//             else cout<<x<<" ";
//         }
//         cout<<"\n";
//     }
// }