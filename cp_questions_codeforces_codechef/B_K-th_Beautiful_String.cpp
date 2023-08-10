// #include <iostream>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         ll k;
//         cin>>n>>k;
//         int m = n-2;
//         int i{1};
//         ll temp{};
//         while(i<=m) {
//             ll z = (i*1LL*(i+1))/2;
//             if(z>=k) {
//                 break;
//             }
//             temp = z;
//             i++;
//         }

//         int x = m-(i-1);
//         for(int i{} ; i<x ; i++) {cout<<"a";}

//         cout<<"b";

//         int z = n-(x+1);
//         int z1 = z-(k-temp);
//         for(int i{} ; i<z1 ; i++) {
//             cout<<"a";
//         }
//         cout<<"b";
//         for(int i{} ; i<(k-temp-1) ; i++) {
//             cout<<"a";
//         }
//         cout<<"\n";
//     }
// }