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
// #include <cmath>
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
//         double hc,dc,hm,dm;
//         cin>>hc>>dc>>hm>>dm;
//         double k,w,a;cin>>k>>w>>a;
//         if(ceil(hc/dm) >= ceil(hm/dc)) {cout<<"YES\n";continue;}
//         bool ok=true;
//         for(double x{0} ; x<=k ; x++) {
//             double y=k-x;
//             if(ceil((hc+(a*x))/dm) >= ceil(hm/(dc+(w*y)))) {ok=false;break;}
//         }
//         if(!ok) {cout<<"YES\n";}
//         else {cout<<"NO\n";}
//     }
// }