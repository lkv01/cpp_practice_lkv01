// #include <iostream>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         int a[n] = {};
//         for(int i{} ; i<n ; i++) {
//             cin>>a[i];
//         }
//         if(n==1) {
//             cout<<"0\n";
//             continue;
//         }
//         int lo{},hi{n-1},ans{};
//         int x = a[lo];
//         int y = a[hi];
//         while(lo<hi) {
//             if(x==y) {
//                 ans=((lo+1)+(n-hi));
//                 lo++;
//                 x+=a[lo];
//                 hi--;
//                 y+=a[hi];
//             }
//             else if(x<y) {
//                 lo++;
//                 x+=a[lo];
//             } else {
//                 hi--;
//                 y+=a[hi];
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }