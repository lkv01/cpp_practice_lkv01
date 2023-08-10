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

// #define Sort(v) sort(v.begin(),v.end())
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
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         int ans{n+1};
//         map<int,int> m1;
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;
//             if(m1[x]==0) {m1[x]=(i+1);continue;}
//             ans=min(ans,(i+1-m1[x]+1));m1[x]=(i+1);
//         }
//         if(ans>n) {cout<<"-1\n";}
//         else {cout<<ans<<"\n";}
//     }
// }