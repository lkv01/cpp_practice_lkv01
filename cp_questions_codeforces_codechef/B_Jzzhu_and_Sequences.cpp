// #include <iostream>
// #include <algorithm>
// typedef long long ll;
// const int N = 1e9+7;
// using namespace std;
// int main() {
//     int x,y;cin>>x>>y;
//     int n;cin>>n;
//     if(n==1) {
//         if(x>=0) {
//             cout<<(x%N)<<"\n";
//         } else {
//             x*=-1;
//             if(x==N) cout<<"0\n";
//             else {
//                 int z = (x%N);
//                 cout<<N-z<<"\n";
//             }
//         }
//     } else if(n==2) {
//         if(y>=0) {
//             cout<<(y%N)<<"\n";
//         } else {
//             y*=-1;
//             if(y==N) cout<<"0\n";
//             else {
//                 int z = (y%N);
//                 cout<<N-z<<"\n";
//             }
//         }
//     } else {
//         int a[7] = {};
//         a[1] = y-x;
//         a[2] = -x;
//         for(int i{3} ; i<=6 ; i++) {
//             a[i]=a[i-1]-a[i-2];
//         }
//         int m = n-2;
//         int w = m%6;
//         if(w==0) w+=6;
//         if(a[w]>=0) {
//             cout<<(a[w]%N)<<"\n";
//         } else {
//             a[w]*=-1;
//             if(a[w]==N) cout<<"0\n";
//             else {
//                 int z = (a[w]%N);
//                 cout<<N-z<<"\n";
//             }
//         }
//     }
// }