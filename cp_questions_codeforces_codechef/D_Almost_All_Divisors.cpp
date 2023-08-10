// #include <iostream>
// #include <vector>
// #include <algorithm>
// #define ll long long
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         vector<long long int> v(n+1);
//         for(int i{1} ; i<=n ; i++) {
//             cin>>v[i];
//         }
//         sort(v.begin()+1,v.end());
//         ll int z = v[1]*1LL*v[n];
//         bool flag = true;
//         for(int i{1} ; i<=n/2 ; i++) {
//             ll int x = v[i]*1LL*v[n+1-i];
//             if(x==z) {
//                 continue;
//             }
//             else {
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag == false) {
//             cout<<"-1\n";
//         } else {
//             cout<<z<<"\n";
//         }
//     }
// }