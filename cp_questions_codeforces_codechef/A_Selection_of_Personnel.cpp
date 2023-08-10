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

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// int32_t main() {
//     fastio();
//     int n;cin>>n;
//     int ans{};
//     ans+=((n*(n-1)*(n-2)*(n-3)*(n-4))/120);
//     ans+=((n*(n-1)*(n-2)*(n-3)*(n-4)*(n-5))/720);

//     map<int,int> m;
//     int nn{n},z{1};
//     deque<int> d;
//     for(int i{nn} ; i>(nn-7) ; i--) {
//         d.push_front(i);
//     }

//     while(m.size()!=6) {
//         bool ok=true;
//         for(int i{7} ; i>1 ;  i--) {
//             if(m[i]==0) {
//                 if(d.back()%i == 0) {
//                     m[i]++;ok=false;
//                     d.push_front(d.back()/i);d.pop_back();break;
//                 }
//             }
//         }
//         if(ok) {d.push_front(d.back());d.pop_back();}
//     }
//     for(auto elem:d) {
//         z*=elem;
//     }
//     cout<<(ans+z)<<"\n";
// }