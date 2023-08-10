// #include <iostream>
// using namespace std;
// const int M = 1e9+7;
// int main() {
//     int a,b;
//     cin>>a>>b;
//     long long int ans = 1;
//     while(b>0) {
//         if(b&1) {
//             ans = (1ll * ans*a)%M;
//         }
//         a = (1ll * a*a)%M;
//         b>>=1;
//     }
//     cout<<ans<<"\n";
//     //----------------------------------------->
//     while(b>0) {
//         if(b&1) {
//             ans = (1ll * ans*a);
//         }
//         a = (1ll * a*a)%M;
//         b>>=1;
//     }
//     cout<<(ans%M)<<"\n";
// //------------------------------------>
//     while(b>0) {
//         if(b&1) {
//             ans = (1ll * ans*a)%M;
//         }
//         a = (1ll * a*a)%M;
//         b>>=1;
//     }
//     cout<<ans<<"\n";
//     return 0;
// }