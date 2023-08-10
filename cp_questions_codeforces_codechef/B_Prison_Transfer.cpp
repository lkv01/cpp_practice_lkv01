// #include <iostream>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n,t,c;
//     cin>>n>>t>>c;
//     int a[n] = {};
//     for(int i{} ; i<n ; i++) {
//         cin>>a[i];
//     }
//     //int nn{n},lo{1},ans{};
//     //bool flag = false;
//     // while(nn) {
//     //     if((flag == false) && (nn>1)) {
//     //         int cc{c};
//     //         while(cc--) {
//     //             if(a[lo]<=t) {
//     //                 lo++;
//     //                 nn--;
//     //                 flag = true;
//     //             } else {
//     //                 flag = false;
//     //                 break;
//     //             }
//     //         }
//     //         if(flag == true) ans++;
//     //     }
//     //     else if((flag == false) && (nn<=1)) {
//     //         break;
//     //     }
//     //     else {
//     //         if(a[lo] <= t) {
//     //             ans++;
//     //             lo++;
//     //             nn--;
//     //             flag = true;
//     //         } else {
//     //             lo++;
//     //             nn--;
//     //             flag = false;                
//     //         }
//     //     }
//     // }
//     int x{},ans{};
//     for(int i{} ; i<n ; i++) {
//         if(a[i]<=t) {
//             x++;
//         } else {
//             if(x>=c) {
//                 ans+=(x-c+1);
//             }
//             x=0;
//         }
//     }
//     if(x>=c) {
//         ans+=(x-c+1);
//     }
//     cout<<ans<<"\n";
// }