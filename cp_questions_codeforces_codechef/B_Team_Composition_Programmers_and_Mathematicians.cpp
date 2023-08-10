// #include <iostream>
// using namespace std;
// # define ll long long
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         long long int a,b;
//         cin>>a>>b;
//         if((a==0) || (b==0)) {
//             cout<<"0\n";
//         }
//         else if(a==b) {
//             cout<<a/2<<"\n";
//         } else if(a>=(3*b)) {
//             cout<<b<<"\n";
//         } else if(b>=(3*a)) {
//             cout<<a<<"\n";
//         } else if(a>b) {
//             if((a+b)<4) {
//                 cout<<"0\n";
//                 break;
//             }
//             long long int z = b/2;
//             ll int lo{},hi{z},n;
//             ll int ans{},y{};
//             bool flag = true;
//             while(lo<=hi) {
//                 n = lo+(hi-lo)/2;
//                 if((b-2*n)==0) {
//                     ans=n;
//                     flag = false;
//                     break;
//                 }
//                 if((a-2*n)<(3*(b-2*n))) {
//                     ans = n;
//                     lo = n+1;
//                 } else if((a-2*n)>(3*(b-2*n))) {
//                     hi = n-1;
//                     y = n;
//                 } else {
//                     ans = n+(b-2*n);
//                     flag = false;
//                     break;
//                 }
//             } if(flag) {
//                 ll int temp = (n)+(b-2*n);
//                 cout<<temp<<"\n";
//             } else {
//                 cout<<ans+y-1<<"\n";
//             }
//         } else if(b>a) {
//             if((a+b)<4) {
//                 cout<<"0\n";
//                 break;
//             }
//             ll int z = a/2;
//             ll int lo{},hi{z},n;
//             ll int ans{},y{};
//             bool flag = true;
//             while(lo<=hi) {
//                 n = lo+(hi-lo)/2;
//                 if((a-2*n)==0) {
//                     ans=n;
//                     flag = false;
//                     break;
//                 }
//                 if((b-2*n)<(3*(a-2*n))) {
//                     ans = n;
//                     lo = n+1;
//                 } else if((b-2*n)>(3*(a-2*n))) {
//                     hi = n-1;
//                     y = n;
//                 } else {
//                     ans = n+(a-2*n);
//                     flag = false;
//                     break;
//                 }
//             } if(flag) {
//                 ll int temp = (n)+(a-2*n);
//                 cout<<temp<<"\n";
//             } else {
//                 cout<<ans+y-1<<"\n";
//             }
//         }
//     }
// }