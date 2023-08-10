// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// const int N = 1e5+10;
// int cows,n;
// int v[N];

// bool canPlaceCows(int minDist) {
//     int cow = cows-1;
//     int position=0;
//     for(int i=1 ; i<n ; i++) {
//         if(v[i]-v[position] >= minDist) {
//             cow--;
//             position=i;
//         }
//         if(cow == 0) break;
//     }
//     return (cow == 0);
// }

// int binarySearch(int v[],int lo,int hi) {
//     int ans=0;
//     while(lo<=hi) {
//         int mid = lo+(hi-lo)/2;
//         if(canPlaceCows(mid)) {
//             ans = mid;
//             lo=mid+1;
//         }
//         else {
//             hi=mid-1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         cin>>n>>cows;
//         for(int i=0 ; i<n ; i++) {
//             cin>>v[i];
//         }
//         sort(v,v+n);
//         int ans = binarySearch(v,1,v[n-1]-v[0]);
//         for(int i=0 ; i<n ; i++) {
//             v[i]=0;
//         }
//         cout<<ans<<"\n";
//     }
// }