// #include <iostream>
// #include <map>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         int N = n;
//         map<int,int> m1;
//         map<int,int> m2;
//         bool flag = true;
//         while(N--) {
//             int a,b;
//             cin>>a>>b;
//             bool ok1 = true;
//             bool ok2 = true;
//             if((m1[a]>0) || (m1[b]>0)) {
//                 ok1 = false;
//             }
//             if((m2[a]>0) || (m2[b]>0)) {
//                 ok2 = false;
//             }
//             if((ok1==true) && (ok2==true)) {
//                 m1[a]++;
//                 m1[b]++;
//             } else if((ok1==false) && (ok2==true)) {
//                 m2[a]++;
//                 m2[b]++;
//             } else if((ok1==true) && (ok2==false)) {
//                 m1[a]++;
//                 m1[b]++;
//             } else if((ok1==false) && (ok2==false)) {
//                 cout<<"NO\n";
//                 flag = false; 
//                 break;
//             }
//         }
//         if(flag) cout<<"YES\n";
//     }
// }