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
// #define int int64_t
// typedef long long ll;
// using namespace std;

// #define Sort(v) sort(v.begin(),v.end())
// const ll mod = 1e9 + 7;

// void yesno(bool b) {if(b) cout << "Yes\n";else cout << "No\n";}
// void YESNO(bool b) {if(b) cout << "YES\n";else cout << "NO\n";}

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// int32_t main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         set<int> s;
//         int a,b;cin>>a>>b;
//         for (int i=1; i<=sqrt(a); i++) {
//             if (a%i == 0) {
//                 if (a/i == i) {s.insert(i);}
//                 else {s.insert(i);s.insert(a/i);}
//             }
//         }
//         for (int i=1; i<=sqrt(b); i++) {
//             if (b%i == 0) {
//                 if (b/i == i) {s.insert(i);}
//                 else {s.insert(i);s.insert(b/i);}
//             }
//         }
//         int min1{(int)1e9};
//         for(auto it = s.begin() ; it != s.end() ; it++) {
//             int x = (*it);
//             int z = ((a*x)/__gcd(a,x)) - (__gcd(b,x));
//             min1 = min(min1,z);
//         }
//         cout<<min1<<"\n";
//     }
// }