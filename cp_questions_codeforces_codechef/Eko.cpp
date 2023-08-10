// #include <iostream>
// using namespace std;
// const int N = 1e5+10;
// int arr[N];
// int n;
// long long int m;

// long long int summation(int height) {
//     long long int ans=0;
//     for(int i=0 ; i<n ; i++) {
//         if(arr[i]>height) ans+=(arr[i]-height);
//     }
//     return ans;
// }

// int binarySearch(int arr[],int lo,int hi) {
//     int ans=0;
//     while(lo<=hi) {
//         int mid = lo+(hi-lo)/2;
//         if(summation(mid) > m) {
//             ans = mid;
//             lo=mid+1;
//         }
//         else if(summation(mid) < m) {
//             hi=mid-1;
//         }
//         else {
//             return mid;
//         }
//     }
//     return ans;
// }

// int main() {
//     cin>>n>>m;
//     int max=0;
//     for(int i=0 ; i<n ; i++) {
//         cin>>arr[i];
//         if(max<arr[i]) max = arr[i];
//     }
//     int ans = binarySearch(arr ,0 ,max);
//     cout<<ans<<"\n";
// }