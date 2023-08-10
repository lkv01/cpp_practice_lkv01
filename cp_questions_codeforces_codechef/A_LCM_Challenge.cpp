// #include <iostream>
// #include <stack>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// ll gcd1(ll a, ll b) {
//     if(b==0) {
//         return a;
//     } else {
//         return gcd1(b,a%b);
//     }
// }

// ll max1(ll a, ll b) {
//     if(a>b) {
//         return a;
//     } else {
//         return b;
//     }
// }

// int main() {
//     ll n;
//     cin>>n;
//     if(n<=2) {
//         cout<<n<<"\n";
//     } else {
//         if(n%2 != 0) {
//             ll z = n*(n-1)*(n-2);
//             cout<<z<<"\n";
//         } else {
//             ll z = n*1LL*(n-1);
//             ll max2{};
//             for(ll i{n-2} ; i>0 ; i--) {
//                 ll gc = gcd1(z,i);
//                 ll z1 = (z*1LL*i)/gc;
//                 if(max2 < z1) {
//                     max2 = z1;
//                 }
//             }
//             cout<<max2<<"\n";
//         }
//     }
// }