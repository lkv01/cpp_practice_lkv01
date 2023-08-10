// #include <iostream>
// using namespace std;
// const int M = 1e9+7;
// int binMultiply(int a,int b,int m);

// //to find a^b
// int binExp(int a,int b,int m) {
//     int ans = 1;
//     while(b>0) {
//         if(b&1) {
//             ans = (1ll * ans * a)%m;
//         }
//         a = (1ll * a*a)%m;
//         b>>=1;
//     }
//     return ans;
// }
// //..................................
// int binExp2(int a,int b,int m) {
//     int ans = 1;
//     while(b>0) {
//         if(b&1) {
//             ans = binMultiply(ans,a,M);
//         }
//         a = binMultiply(a,a,M);
//         b>>=1;
//     }
//     return ans;
// }
// //to find a*b
// int binMultiply(int a, int b, int m) {
//     int ans = 0;
//     while(b>0) {
//         if(b&1) {
//             ans = (ans+a)%m;
//         }
//         a = (a+a)%m;
//         b>>=1;
//     }
//     return ans;
// }

// int main() {
//     int a,b;
//     cin>>a>>b;
//     cout<<binExp(a,b,M)<<"\n";
//     cout<<binExp2(a,b,M)<<"\n";
//     return 0;
// }