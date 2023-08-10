// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         unsigned int x;
//         cin>>x;
//         int z = __builtin_popcount(x);
//         if(x==1) {
//             cout<<3<<"\n";
//         } else {
//             if(z==1) {
//                 cout<<x+1<<"\n";
//             } else {
//                 for(int i{} ; i<32 ; i++) {
//                     if((x&(1<<i)) != 0) {
//                         cout<<(1<<i)<<"\n";
//                         break;
//                     }
//                 }
//             }
//         }
//     }
// }