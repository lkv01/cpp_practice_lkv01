// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int x{1};
//         int max{1};
//         long long int arr[2] = {};
//         for(int i{} ; i<n-1 ; i++) {
//             if(s[i] == s[i+1]) {
//                 x++;
//                 if(max<=x) max=x;
//             } else {
//                 x=1;
//             }
//         }
//         for(int i{} ; i<n ; i++) {
//             if(s[i]=='0') {
//                 arr[0]++;
//             } else {
//                 arr[1]++;
//             }
//         }
//         long long int z1 = max*max*1LL;
//         if((arr[0]!=0) && (arr[1]!=0)) {
//             long long int z2 = arr[0]*arr[1]*1LL;
//             (z1 >= z2) ? cout<<z1<<"\n" : cout<<z2<<"\n";
//         }
//         else if(arr[0]==0) {
//             long long int y = arr[1]*arr[1]*1LL;
//             cout<< y <<"\n";
//         }
//         else if(arr[1]==0) {
//             long long int y = arr[0]*arr[0]*1LL;
//             cout<< y <<"\n";
//         }
//     }
// }