// #include <iostream>
// #include <map>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         int arr[n] = {};
//         map<int,int> m;
//         for(int i{} ; i<n ; i++) {
//             cin>>arr[i];
//             m[arr[i]]++;
//         }
//         sort(arr,arr+n);
//         if(m.size()==1) {
//             cout<<n*1LL*(n-1)<<"\n";
//         }
//         else cout<<(2*m[arr[0]]*1LL*m[arr[n-1]])<<"\n";
//     }
// }