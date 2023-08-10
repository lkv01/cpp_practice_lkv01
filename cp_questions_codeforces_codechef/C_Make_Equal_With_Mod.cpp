// #include <iostream>
// #include <set>
// #include <algorithm>
// //typedef long long ll;
// using namespace std;
// // ll gcd1(ll a, ll b) {
// //     if(b==0) {
// //         return a;
// //     } else {
// //         return gcd1(b,a%b);
// //     }
// // }

// // ll max1(ll a, ll b) {
// //     if(a>b) {
// //         return a;
// //     } else {
// //         return b;
// //     }
// // }

// bool check(set<int> s) {
//     int x{-2};
//     bool flag = false;
//     for(auto elem:s) {
//         if(elem==(x+1)) {
//             flag = true;
//             break;
//         }
//         x = elem;
//     }
//     if(flag) return true;
//     return false;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         set<int> s;
//         for(int i{} ; i<n ; i++) {
//             int x;
//             cin>>x;
//             s.insert(x);
//         }
//         bool ok0 = false;
//         bool ok1 = false;
        
//         auto it1 = s.find(0);
//         if(it1 != s.end()) ok0 = true;
//         auto it2 = s.find(1);
//         if(it2 != s.end()) ok1 = true;

//         if(!ok1) {
//             cout<<"YES\n";
//         } else {
//             if(ok0) {
//                 cout<<"NO\n";
//             } else {
//                 if(check(s)) {
//                     cout<<"NO\n";
//                 } else {
//                     cout<<"YES\n";
//                 }
//             }
//         }
//     }
// }