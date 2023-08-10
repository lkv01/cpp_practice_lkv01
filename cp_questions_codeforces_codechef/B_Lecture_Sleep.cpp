// #include <iostream>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n,k;
//     cin>>n>>k;
//     int a[n] = {};
//     int t[n] = {};
//     int p[n] = {};
//     for(int i{} ; i<n ; i++) {
//         cin>>a[i];
//     }
//     for(int i{} ; i<n ; i++) {
//         cin>>t[i];
//     }
//     int sum0{};
//     for(int i{} ; i<n ; i++) {
//         if(t[i]==0) {
//             p[i]=a[i];
//         } else {
//             p[i]=0;
//             sum0+=a[i];
//         }
//     }
//     int sum2{},sum1{};
//     for(int i{} ; i<k ; i++) {
//         sum2+=p[i];
//     }
//     int sum = sum2;
//     for(int i{} ; i<(n-k) ; i++) {
//         sum-=p[i];
//         sum+=p[k+i];
//         if(sum1<sum) {
//             sum1 = sum;
//         }
//     }
//     if(sum1 < sum2) {
//         sum1 = sum2;
//     }
//     cout<<sum0+sum1<<"\n";
// }