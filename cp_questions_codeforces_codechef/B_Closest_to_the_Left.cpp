// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

//  const int N = 1e5+10;
// // int n;
// // int arr[N];




// // const int N = 1e5+10;
// // int n;
// // int arr[N];

// int binarySearch(vector<int> arr,int lo,int hi,int x) {
//     if(x < arr[0]) return 0;
//     int ans{};
//     while(lo<=hi) {
//         int mid = lo+(hi-lo)/2;
//         if(x >= arr[mid]) {
//             ans = mid;
//             lo = mid+1;
//         }
//         else {
//             hi = mid-1;
//         }
//     }
//     return ans+1;
// }

// int main() {
//     int n,k;
//     cin>>n>>k;
//     vector<int> arr(N);
//     for(int i{} ; i<n ; i++) {
//         cin>>arr[i];
//     }
//     while(k--) {
//         int x;
//         cin>>x;
//         int ans = binarySearch(arr,0,n-1,x);
//         cout<<ans<<"\n";
//     }
// }