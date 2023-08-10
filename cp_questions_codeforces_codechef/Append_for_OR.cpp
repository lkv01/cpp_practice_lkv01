// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <cmath>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,y;cin>>n>>y;
//         int x{};
//         for(int i{} ; i<n ; i++) {
//             int z;cin>>z;x|=z;
//         }
//         int bitsy = (int)log2(y)+1;
//         int bitsn = (int)log2(n)+1;
//         // if(bitsn>bitsy) {
//         //     cout<<"-1\n";continue;
//         // }
//         int ans{};
//         bool flag = true;
//         for(int i{} ; i<max(bitsn,bitsy) ; i++) {
//             if((((x>>i)&1)==1) && (((y>>i)&1)==0)) {flag=false;break;}
//             if((((x>>i)&1)==0) && (((y>>i)&1)==1)) {ans+=(1<<i);}
//         }
//         if(flag==false) {cout<<"-1\n";continue;}
//         if((x|ans)!=y) {
//             cout<<"-1\n";continue;
//         } else {
//             cout<<ans<<"\n";continue;
//         }
//     }
// }