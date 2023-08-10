// #include <iostream>
// #include <map>
// #include <set>
// using namespace std;
// const int N = 1e5+10;
// int arr[N];
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         map<int,multiset<int>> m;
//         for(int i{} ; i<n ; i++) {
//             cin>>arr[i];
//         }
//         for(int i{} ; i<n ; i++) {
//             int x;
//             cin>>x;
//             m[arr[i]].insert(x);
//         }
//         int s0{m[0].size()} , s1{m[1].size()};
//         if(s0 < s1) {
//             int sum0{};
//             int sum1{};
//             //-------------------------
//             auto it1 = m[1].rbegin();
//             while(s0 --) {
//                 sum1+=(*it1);
//                 it1++;
//             }
//             sum1*=2;
//             while(it1 != m[1].rend()) {
//                 sum1+=(*it1);
//             }
//             //-------------------------
//             auto it0 = m[0].rbegin();
//             while(it0 != m[0].rend()) {
//                 sum0+=(*it0);
//             }
//             sum0*=2;
//             //-------------------------
//             cout<<sum1+sum0<<"\n";
//         }

//         if(s0 > s1) {
//             int sum0{};
//             int sum1{};
//             //-------------------------
//             auto it0 = m[0].rbegin();
//             while(s1 --) {
//                 sum0+=(*it0);
//                 it0++;
//             }
//             sum0*=2;
//             while(it0 != m[0].rend()) {
//                 sum0+=(*it0);
//             }
//             //-------------------------
//             auto it1 = m[1].rbegin();
//             while(it1 != m[1].rend()) {
//                 sum1+=(*it1);
//             }
//             sum1*=2;
//             //-------------------------
//             cout<<sum1+sum0<<"\n";
//         }
//         if(s0 == s1) {
//             int sum1{};
//             auto it1 = m[1].begin();
//             while(it1 != m[1].end()) {
//                 sum1+=(*it1);
//             }
//             //--------------------------
//             int sum0{};
//             auto it0 = m[0].begin();
//             while(it0 != m[0].end()) {
//                 sum0+=(*it0);
//             }
//             //---------------------------
//             auto t1=m[1].begin();
//             auto t0=m[0].begin();

//             int z1 = 2*sum0 + 2*sum1 - (*t1);
//             int z0 = 2*sum0 + 2*sum1 - (*t0);
//             if(z1 <= z0) {
//                 cout<<z0<<"\n";
//             } else {
//                 cout<<z1<<"\n";
//             }
//         }
//     }
// }