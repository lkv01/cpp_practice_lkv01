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
// #include <map>
// #include <algorithm>
// typedef long long ll;
// #define int int64_t
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
//         int n;cin>>n;
//         vector<int> x(n),y(n);
//         for(int i{} ; i<n ; i++) cin>>x[i];
//         for(int i{} ; i<n ; i++) cin>>y[i];
//         vector<int> v(n);
//         for(int i{} ; i<n ; i++) {
//             v[i]= y[i]-x[i];
//         }
//         sort(v.begin(),v.end());
//         reverse(v.begin(),v.end());
//         int i{},j{n-1};
//         int ans{};
//         map<int,int> m;
//         while(v[i] >= 0) {
//             while(j>i) {
//                 if((v[i]+v[j])<0) {j--;continue;}
//                 if((v[i]+v[j])>=0) {
//                     if(m[j]==0) {ans++;m[j]++;;break;}
//                     else {j--;continue;}
//                 }
//                 j--;
//             }
//             i++;
//             if(i==n) break;
//         }
//         cout<<ans<<"\n";
//     }
// }