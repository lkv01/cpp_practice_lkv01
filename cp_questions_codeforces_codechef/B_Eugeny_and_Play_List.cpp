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
//     int n,m;
//     cin>>n>>m;
//     vector<int> v;
//     int ans{};
//     for(int i{} ; i<n ; i++) {
//         int x,y;cin>>x>>y;
//         ans+=(x*y);
//         v.push_back(ans);
        
//     }
//     while(m--) {
//         int x;cin>>x;
//         int ind = LowerBound(v,x)-v.begin()+1;
//         cout<<ind<<"\n";
//     }
// }