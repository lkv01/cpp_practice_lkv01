// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// #include <cmath>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         vector<int> v;
//         int z{};
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;v.push_back(x);z|=x;
//         }
//         //int bits = (int)log2(z) + 1;
//         int bits{};
//         for(int i{} ; i<20 ; i++) {
//             if(((z>>i)&1)==1) bits = i+1;
//         }
//         int flag = (1<<bits);flag--;
//         int w{};
//         for(int i{} ; i<(n-1) ; i++) {
//             int temp{};
//             if(v[i]==flag) continue;
//             for(int j{} ; j<bits ; j++) {
//                 if(((v[i]>>j)&1)==0) {temp+=(1<<j);}
//             }
//             w = temp;
//             v[i]^=w;
//             v[i+1]^=w;
//         }
//         set<int> s;
//         for(int i{} ; i<n ; i++) {
//             s.insert(v[i]);
//         }
//         if(s.size()==1) cout<<"YES\n";
//         else cout<<"NO\n";
//     }
// }