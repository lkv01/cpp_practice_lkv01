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
//         string s;cin>>s;
//         int n = s.length();
//         string s2;cin>>s2;
//         if(s2.length()>1) {
//             bool flag = true;
//             for(auto elem:s2) {
//                 if(elem=='a') {flag = false;break;}
//             }
//             if(!flag) {cout<<"-1\n";continue;}
//             ll z = (1LL<<n);
//             cout<<z<<"\n";continue;
//         } else {
//             if(s2=="a") {cout<<"1\n";continue;}
//             ll z = (1LL<<n);
//             cout<<z<<"\n";continue;
//         }
//     }
// }