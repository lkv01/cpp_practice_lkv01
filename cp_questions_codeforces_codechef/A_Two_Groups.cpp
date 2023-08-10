// #include <iostream>
// #include <cmath>
// using namespace std;
// const int N = 1e5+10;
// int arr[N];
// long long int max(long long int a,long long int b) {
//     if(a>b) return a;
//     else return b;
// }
// long long int min(long long int a,long long int b) {
//     if(a<b) return a;
//     else return b;
// }
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         long long int sumpos{};
//         long long int sumneg{};
//         for(int i{}; i<n ; i++) {
//             cin>>arr[i];
//             if(arr[i] >= 0) sumpos+=arr[i];
//             else sumneg+=(arr[i]);
//         }
//         sumneg=abs(sumneg);
//         cout<<max(sumneg,sumpos)-min(sumneg,sumpos)<<"\n";
//     }
//     return 0;
// }