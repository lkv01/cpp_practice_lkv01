// #include <iostream>
// #include <vector>
// #include <algorithm>
// const int N = 1e9;
// using namespace std;
// int main() {
//     int n,k;
//     cin>>n>>k;

//     long long int z = 2*k;
//     int lo{0},hi{k},mid;
//     int bs{},temp{};
//     bool flag = true;
//     while(lo<=hi) {
//         mid = lo+(hi-lo)/2;
//         if((mid*1LL*(mid+1))<z) {
//             lo = mid+1;
//         } else if((mid*1LL*(mid+1))>z) {
//             hi = mid-1;
//             temp = mid;
//         } else {
//             bs = mid;
//             flag = false;
//             break;
//         }
//     }
//     if(flag) {
//         long long int s = (temp*(temp+1))/2;
//         if((s-k) < (n-temp)) {
//             int w = (n-temp);
//             int v = temp+1;
//             int lo{1},hi{w},mid;
//             int ans{};
//             while(lo<=hi) {
//                 mid = lo+(hi-lo)/2;
//                 if(((v*1LL*mid)+(mid*1LL*(mid+1))/2) > w-(s-k)) {
//                     hi = mid-1;
//                 } else if(((v*1LL*mid)+(mid*1LL*(mid+1))/2) < w-(s-k)) {
//                     lo = lo+1;
//                 } else {
//                     ans = mid;
//                     break;
//                 }
//             }
//             cout<<(((ans*1LL*((2*v)+(ans-1)))/2) + (s-k))<<"\n";
//             // cout<<(v*1LL*ans)+((ans*1LL*(ans+1))/2)+(s-k)<<"\n";
//         } else {
//             cout<<(n-temp)<<"\n";
//         }
//     } else {
//         int w = (n-bs);
//         int v = bs+1;
//         int lo{1},hi{w},mid;
//         int ans{};
//         while(lo<=hi) {
//             mid = lo+(hi-lo)/2;
//             if(((v*1LL*mid)+(mid*1LL*(mid+1))/2) > w) {
//                 hi = mid-1;
//             } else if(((v*1LL*mid)+(mid*1LL*(mid+1))/2) < w) {
//                 lo = lo+1;
//             } else {
//                 ans = mid;
//                 break;
//             }
//         }
//         cout<<((ans*1LL*((2*v)+(ans-1)))/2)<<"\n";
//     }
// }