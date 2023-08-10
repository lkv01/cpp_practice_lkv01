// #include <iostream>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         int arr[n] = {};
        
//         for(int i{} ; i<n ; i++) {
//             cin>>arr[i];
//         }
//         int max1 = arr[0];
//         int min1 = arr[n-1];

//         for(int i{} ; i<n ; i++) {
//             max1|=arr[i];
//             min1&=arr[i];
//         }

//         cout<<max1-min1<<"\n";

//     }
// }