// #include <iostream>
// #include <vector>
// using namespace std;
// const int N = 1e5+10;
// int n;
// int arr[N];
// bool binarySearch(int arr[],int lo,int hi,int x) {
//     while(lo<=hi) {
//         int mid = lo+(hi-lo)/2;
//         if(x > arr[mid]) lo=mid+1;
//         else if(x < arr[mid]) hi=mid-1;
//         else return true;
//     }
//     return false;
// }

// int main() {
//     int k;
//     cin>>n>>k;
    
//     for(int i{} ; i<n ; i++) {
//         cin>>arr[i];
//     }
//     while(k--) {
//         int x;
//         cin>>x;
//         bool ans = binarySearch(arr,0,n,x);
//         if(ans) cout<<"YES\n";
//         else cout<<"NO\n";
//     }
// }