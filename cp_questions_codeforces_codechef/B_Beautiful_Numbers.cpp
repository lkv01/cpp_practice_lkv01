// #include <iostream>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         int p[n+1] = {};
//         int pos[n+1] = {};
//         for(int i{1} ; i<=n ; i++) {
//             cin>>p[i];
//             pos[p[i]] = i;
//         }
//         int lo = pos[1];
//         int hi = pos[1];
//         cout<<"1";
//         for(int i{2} ; i<=n ; i++) {
//             lo = min(lo,pos[i]);
//             hi = max(hi,pos[i]);
//             if(i == hi-lo+1) cout<<"1";
//             else cout<<"0";
//         }
//         cout<<"\n";
//     }
// }