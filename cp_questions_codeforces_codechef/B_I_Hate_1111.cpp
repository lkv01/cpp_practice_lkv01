// #include <iostream>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int x;cin>>x;
//         if(x<11) {cout<<"NO\n";continue;}
//         if(x%11 == 0) {cout<<"YES\n";continue;}
//         if(x%111 == 0) {cout<<"YES\n";continue;}
//         //if(11 &111 both present)
//         bool flag = false;
//         while(x>11) {
//             if(x%11 == 0) {flag = true;break;}
//             x-=111;
//         }
//         if(flag) cout<<"YES\n";
//         else cout<<"NO\n";
//     }
// }