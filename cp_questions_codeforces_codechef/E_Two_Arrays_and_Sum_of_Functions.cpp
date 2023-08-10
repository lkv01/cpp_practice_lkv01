// #include <iostream>
// #include <vector>
// #include <algorithm>
// const int N = 998244353;
// #define ll long long
// using namespace std;
// int main() {
//     ll int n;
//     cin>>n;
//     vector<ll int> a(n);
//     vector<ll int> b(n);
//     for(int i{} ; i<n ; i++) {
//         cin>>a[i];
//     }
//     for(int i{} ; i<n ; i++) {
//         cin>>b[i];
//     }
//     sort(b.rbegin(),b.rend());
//     ll int i{},n1{n},n2{1};
//     while(n1>0) {
//         a[i]*=(n1*n2);
//         n1--;
//         n2++;
//         i++;
//     }
//     sort(a.begin(),a.end());
//     ll int ans{};
//     for(int i{} ; i<n ; i++) {
//         ll int z = ((a[i]%N)*b[i])%N;
//         ans=((ans%N)+(z%N))%N;
//     }
//     cout<<ans<<"\n";
// }