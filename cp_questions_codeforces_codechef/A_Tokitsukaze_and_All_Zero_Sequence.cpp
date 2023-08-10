// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         int arr[101] = {};
//         for(int i{} ; i<n ; i++) {
//             int x;
//             cin>>x;
//             arr[x]++;
//         }
//         bool ok2 = true;
//         for(int i{} ; i<101 ; i++) {
//             if(arr[i]>1) {
//                 ok2 = false;
//             }
//         }
//         if(arr[0]>0) {
//             cout<<(n-arr[0])<<"\n";
//         } else if(ok2 == false) {
//             cout<<n<<"\n";
//         } else {
//             cout<<(n+1)<<"\n";
//         }
//     }
// }