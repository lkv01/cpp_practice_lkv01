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
// #include <vector>
// #include <algorithm>
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
//         int n,m;cin>>n>>m;
//         vector<int> v;
//         for(int i{} ; i<m ; i++) {int x;cin>>x;v.push_back(x);}
//         Sort(v);
//         vector<int> diff;
//         for(int i{1} ; i<m ; i++) {
//             diff.push_back(v[i]-v[i-1]-1);
//         }
//         diff.push_back(n-v.back()+v.front()-1);
//         int ans{};
//         sort(diff.rbegin(),diff.rend());
//         for(int i{} ; i<(int)diff.size() ; i++) {
//             if((diff[i]-(4*i)) == 1) {ans+=(diff[i]-(4*i));}
//             else {ans+=(max(diff[i]-((4*i)+1),0LL));}
//         }
//         cout<<(n-ans)<<"\n";
//     }
// }