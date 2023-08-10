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

// #define fill(a,b) memset(a, b, sizeof(a))
// #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// #define Sort(v) sort(v.begin(),v.end())
// #define Reverse(v) reverse(v.begin(),v.end())
// const ll mod = 1e9 + 7;

// void yesno(bool b) {if(b) cout << "Yes\n";else cout << "No\n";}
// void YESNO(bool b) {if(b) cout << "YES\n";else cout << "NO\n";}

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// int main() {
//     fastio();
//     int n,k;cin>>n>>k;
//     vector<int> v,pre;
//     map<int,int> m;
//     for(int i{} ; i<n ; i++) {int x;cin>>x;v.push_back(x);m[x]++;}
//     Sort(v);
//     pre.push_back(v[0]);
//     for(int i{1} ; i<n ; i++) {pre.push_back(pre.back()+v[i]);}
//     set<int> s;
//     s.insert(m[v[0]]);
//     for()
// }