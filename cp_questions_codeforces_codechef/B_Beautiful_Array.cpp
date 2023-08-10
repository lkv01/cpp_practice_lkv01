// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         long long int n,k,b;
//         long long int s;
//         cin>>n>>k>>b>>s;
//         long long int arr[n] = {};
//         if((s==0) && (b==0)) {
//             for(int i{} ; i<n ; i++) {
//                 cout<<"0 ";
//             }
//             cout<<"\n";
//         } else if((s==0) && (b>0)) {
//             cout<<"-1\n";
//         } else if((s>0) && (b==0)) {
//             if(s>(n*(k-1)*1LL)) {
//                 cout<<"-1\n";
//             } else {
//                 long long int sd = s/n;
//                 long long int sr = s%n;
//                 for(int i{} ; i<n ; i++) {
//                     arr[i]+=sd;
//                 }
//                 // arr[n-1]+=sr;
//                 for(int i{} ; i<sr ; i++) {
//                     arr[i]++;
//                 }
//                 for(int i{} ; i<n ; i++) {
//                     cout<<arr[i]<<" ";
//                 }
//                 cout<<"\n";
//             }
//         } else {
//             if((s<=(k*b*1LL)) || (s>=(2*k*b*1LL))) {
//                 cout<<"-1\n";
//             } else {
//                 long long int zd = b/n;
//                 long long int zr = b%n;
//                 for(int i{} ; i<n ; i++) {
//                     arr[i]=zd;
//                 }
//                 arr[n-1]+=zr;
//                 long long int x{};
//                 for(int i{} ; i<n ; i++) {
//                     arr[i]*=k;
//                     x+=arr[i];
//                 }
//                 long long int sub = s-x;

//                 long long int subd = sub/n;
//                 long long int subr = sub%n;
//                 for(int i{} ; i<n ; i++) {
//                     arr[i]+=subd;
//                 }
//                 arr[n-1]+=subr;
//                 for(int i{} ; i<n ; i++) {
//                     cout<<arr[i]<<" ";
//                 }
//                 cout<<"\n";
//             }
//         }
//     }
// }