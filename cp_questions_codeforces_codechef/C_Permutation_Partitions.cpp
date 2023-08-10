// /*
//         L               K      K     V           V
//         L               K    K        V         V
//         L               K  K           V       V
//         L               KK              V     V
//         L               K  K             V   V
//         L               K    K            V V
//         L L L L L L     K      K           V    
// */

// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <list>
// #include <set>
// #include <map>
// #include <stack>
// #include <algorithm>
// #define int int64_t
// typedef long long ll;
// using namespace std;

// #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// #define Sort(v) sort(v.begin(),v.end())
// #define Reverse(v) reverse(v.begin(),v.end())
// const ll mod = 1e9 + 7;
// const int N = 998244353;
// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// int32_t main() {
//     fastio();
//     int n,k;
//     cin>>n>>k;
//     vector<pair<int,int>> v;
//     for(int i{} ; i<n ; i++) {
//         int x;cin>>x;
//         if(x>(n-k)) v.push_back({x,1});
//         else v.push_back({x,0});
//     }
//     int z{};
//     for(int i{} ; i<n ; i++) {
//         if(v[i].second == 1) {z=i;break;}
//     }
//     int ans{1LL},x{1LL};
//     for(int i{z} ; i<n ; i++) {
//         if(v[i].second==1) {ans=(ans*x)%N;x=1;}
//         else {x++;}
//     }
//     int kk{k},nn{n},ans1{};
//     while(kk--) {
//         ans1+=nn;
//         nn--;
//     }
//     cout<<ans1<<" "<<ans<<"\n";
// }