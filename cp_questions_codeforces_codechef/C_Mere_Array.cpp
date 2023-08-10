// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         int min1{(int)1e9+7};
//         vector<int> a,b;
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;
//             a.push_back(x);
//             if(min1 > x) min1 = x; 
//         }
//         b = a;
//         sort(b.begin(),b.end());
//         bool flag = true;
//         for(int i{} ; i<n ; i++) {
//             if((a[i] % min1)!=0) {
//                 if(a[i] != b[i]) {
//                     flag = false;
//                     break;
//                 }
//             }
//         }
//         if(flag) cout<<"YES\n";
//         else cout<<"NO\n";
//     }
// }