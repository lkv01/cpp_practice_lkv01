// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int a[n] = {};
//     int b[n] = {};
//     for(int i{} ; i<n ; i++) {
//         cin>>a[i];
//     }
//     for(int i{} ; i<n ; i++) {
//         cin>>b[i];
//     }
//     int d[n] = {};
//     vector<int> pos,neg;
//     int zero{};
//     for(int i{} ; i<n ; i++) {
//         d[i] = a[i]-b[i];
//         if(d[i]>0) {pos.push_back(d[i]);}
//         else if(d[i]==0) {zero++;}
//         else {neg.push_back((-1)*d[i]);}
//     }
//     sort(pos.begin(),pos.end());
//     sort(neg.begin(),neg.end());
//     ll ans{};
//     ll z = pos.size();
//     ans += ((z*1LL*(z-1))/2);
//     ans += (z*1LL*zero);
//     for(size_t i{} ; i<pos.size() ; i++) {
//         ll ind = lower_bound(neg.begin(),neg.end(),pos[i])-neg.begin();
//         ans+=ind;
//     }
//     cout<<ans<<"\n";
// }