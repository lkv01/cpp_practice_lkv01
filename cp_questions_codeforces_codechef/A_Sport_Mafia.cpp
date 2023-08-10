// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int n,k;
//     cin>>n>>k;
//     int lo = 0;
//     int hi = ceil((float)n/2);
//     while(lo<=hi) {
//         int mid = lo+((hi-lo)>>1);
//         int m = n-mid;
//         long long int sum = (m*1LL*(m+1))/2;
//         if((sum - mid) < (long long)k) {
//             hi = mid-1;
//         }
//         else if((sum-mid) > (long long)k) {
//             lo = mid+1;
//         }
//         else {
//             cout<<mid<<"\n";
//             break;
//         }
//     }
// }