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

// int main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         int a[n] = {};
//         for(int i{} ; i<n ; i++) cin>>a[i];
//         if(n<3) {cout<<"YES\n";continue;}
//         if(n%2 == 0) {
//             bool ok = true;
//             for(int i{n-3} ; i>0 ; i-=2) {
//                 if(max(a[i],a[i-1]) <= min(a[i+1],a[i+2])) {continue;}
//                 else {ok=false;break;}
//             }
//             if(ok) {cout<<"YES\n";}
//             else {cout<<"NO\n";}
//         }
//         else {
//             bool ok = true;
//             for(int i{n-3} ; i>1 ; i-=2) {
//                 if(max(a[i],a[i-1]) <= min(a[i+1],a[i+2])) {continue;}
//                 else {ok=false;break;}
//             }
//             if(a[0] > min(a[1],a[2])) {ok=false;}
//             if(ok) {cout<<"YES\n";}
//             else {cout<<"NO\n";}
//         }
//     }
// }