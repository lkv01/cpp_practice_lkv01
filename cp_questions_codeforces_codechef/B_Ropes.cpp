// #include <iostream>
// #include <vector>
// #include <iomanip>
// #include <algorithm>
// using namespace std;
// #define ld long double

// ld eps = 1e-9;

// int main() {
//     int n,k;
//     cin>>n>>k;
//     int arr[n] = {};
//     for(int i{} ; i<n ; i++) {
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     ld lo = 0;
//     ld hi = arr[0];
//     ld ans{};
//     while(hi-lo>=eps) {
//         ld mid = lo+(hi-lo)/2;

//         int var{};
//         for(int i{} ; i<n ; i++) {
//             var+=(arr[i]/mid);
//         }
//         if(var<k) {
//             hi = mid;
//         } else {
//             ans = mid;
//             lo = mid;
//         }
//     }
//     cout<<fixed<<setprecision(5)<<ans<<"\n";
// }