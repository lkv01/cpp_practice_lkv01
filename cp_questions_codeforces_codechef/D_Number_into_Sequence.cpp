// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         ll n;cin>>n;
//         ll nn{n},max1{0LL},temp{};
//         map<ll,int> m;
//         vector<ll> v,ans;
//         for(ll i{2} ; i*i<=nn ; i++) {
//             while(nn%i == 0) {m[i]++;v.push_back(i);nn/=i;}
//         }
//         if(nn>1) {m[nn]++;v.push_back(nn);}
//         for(auto it:m) {
//             if(max1<(it.second)) {max1=it.second;temp=it.first;}
//         }
//         max1--;
//         while(max1--) {
//             ans.push_back(temp);
//         }
//         ll back{temp};
//         for(int i{} ; i<(int)v.size() ; i++) {
//             if(v[i]!=temp) back*=v[i];
//         }
//         ans.push_back(back);
//         cout<<(int)ans.size()<<"\n";
//         for(auto elem:ans) {
//             cout<<elem<<" ";
//         }
//         cout<<"\n";
//     }
// }