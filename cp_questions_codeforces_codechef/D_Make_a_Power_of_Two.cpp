// #include <iostream>
// #include <string>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         string sn = to_string(n);
//         int ans{(int)1e9};
//         for(int i{} ; i<60 ; i++) {
//             ll x = (1LL<<i);
//             string sx = to_string(x);
//             int in{},ix{},common{};
//             while((in<sn.length()) && (ix<sx.length())) {
//                 if(sn[in]==sx[ix]) {in++;ix++;common++;}
//                 else {in++;}
//             }
//             ans=min((int)ans,(int)sn.length()+(int)sx.length()-(int)(2*common));
//         }
//         cout<<ans<<"\n";
//     }
// }