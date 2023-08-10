// #include <iostream>
// #include <algorithm>
// const long long int N = 1e18;
// using namespace std;

// bool check(long long int k,long long int n) {
//     long long int n1=n;
//     long long int x{};
//     while(n1>0) {
//         long long int m = min(k,n1);
//         n1-=m;
//         x+=m;
//         n1-= n1/10;
//     }
//     if(2*x>=n) return true;
//     else return false;
// }

// int main() {
//     int n;
//     cin>>n;
//     long long int ans{};
//     long long int lo{},hi{n};
//     long long int mid;
//     while(lo<=hi) {
//         mid = lo+(hi-lo)/2;
//         if(check(mid,n)) {
//             ans = mid;
//             hi = mid-1;
//         } else {
//             lo = mid+1;
//         }
//     }
//     cout<<ans<<"\n";
// }