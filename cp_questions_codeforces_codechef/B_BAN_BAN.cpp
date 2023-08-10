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
//         int m = 3*n;
//         if((n&1)==0) {
//             cout<<n/2<<"\n";
//             for(int i{1} ; (3*i<m) ; i++) {
//                 cout<<(3*i)<<" "<<(3*i + 1)<<"\n";
//             }
//         }
//         else {
//             cout<<(n/2 + 1)<<"\n";
//             for(int i{1} ; (3*i<m) ; i++) {
//                 cout<<(3*i)<<" "<<(3*i + 1)<<"\n";
//             }
//             cout<<(m-1)<<" "<<(m)<<"\n";
//         }
//     }
//     return 0;
// }