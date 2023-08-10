// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// const int N = 1e5+10;
// int arr[N];
// int main() {
//     int n;
//     cin>>n;
//     for(int i{} ; i<n ; i++) {
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     int q;
//     cin>>q;
//     while(q--) {
//         int l,r;
//         cin>>l>>r;
//         auto it1 = lower_bound(arr,arr+n,l);
//         auto it2 = upper_bound(arr,arr+n,r);
//         int ans = it2-it1;
//         cout<<ans<<" ";
//     }
// }