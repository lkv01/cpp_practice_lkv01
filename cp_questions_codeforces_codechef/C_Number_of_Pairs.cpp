// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,l,r;
//         cin>>n>>l>>r;
//         vector<int> v;
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;
//             v.push_back(x);
//         }
//         sort(v.begin(),v.end());
//         ll ans{};
//         for(int i{} ; i<n ; i++) {
//             int compl1 = l-v[i];
//             int compr = r-v[i];
//             auto itl = lower_bound(v.begin()+i+1,v.end(),compl1);
//             auto itr = upper_bound(v.begin()+i+1,v.end(),compr);
//             int x = itr-itl;
//             if(x>0) {
//                 ans+=(x+0LL);
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }