// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// #define ll long long
// void swap(int &a,int &b) {
//     a = (a^b);
//     b = (b^a);
//     a = (a^b);
// }
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         vector<pair<int,int>> vec(n); 
//         for(int i{} ; i<n ; i++) {
//             int a,b;
//             cin>>a>>b;
//             if(a<b) swap(a,b);
//             vec[i] = {a,b};
//         }
//         sort(vec.rbegin(),vec.rend());
//         ll ans{};
//         for(int i{} ; i<n ; i++) {
//             ans+=vec[i].second;
//         }
//         ans*=2;
//         ans+=((vec[0].first)+(vec[n-1].first));
//         for(int i{} ; i<n-1 ; i++) {
//             ans+=((vec[i].first)-(vec[i+1].first));
//         }
//         cout<<ans<<"\n";
//     }
// }