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
//     int n,m;cin>>n>>m;
//     map<string,int> m1,m2;
//     for(int i{} ; i<n ; i++) {
//         string s;cin>>s;m1[s]++;
//     }
//     for(int i{} ; i<m ; i++) {
//         string s;cin>>s;m2[s]++;
//     }

//     //-----------------------------------------------------
//     map<string,int> m3;
//     bool ok = true;
//     for(auto it = m1.begin() ; it != m1.end() ; it++) {
//         string s1 = (it->first);
//         auto it1 = m2.find(s1);
//         if(it1 != m2.end()) {
//             m3[s1]++;ok=false;break;
//         }
//     }
//     if(ok==true) {
//         auto it = m1.begin();
//         m3[it->first]++;
//     }
//     //-----------------------------------------------------
//     int cnt{};
//     for(int k{} ; k<(n+m) ; k++) {
//         if(cnt%2 != 0) {
//             bool ok1 = true;
//             for(auto it = m1.begin() ; it != m1.end() ; it++) {
//                 string s2 = (it->first);
//                 auto it2 = m3.find(s2);
//                 if(it2 != m3.end()) {m3[s2]++;ok1 = false;break;}
//             }
//             if(ok1) {cout<<"NO\n";break;}
//             cnt++;
//         } else {
//             bool ok2 = true;
//             for(auto it = m2.begin() ; it != m2.end() ; it++) {
//                 string s2 = (it->first);
//                 auto it2 = m3.find(s2);
//                 if(it2 != m3.end()) {m3[s2]++;ok2 = false;break;}
//             }
//             if(ok2) {cout<<"YES\n";break;}
//             cnt++;
//         }
//     }
// }