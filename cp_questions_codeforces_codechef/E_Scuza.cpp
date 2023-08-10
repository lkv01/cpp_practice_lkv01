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
//         int n,q;cin>>n>>q;
//         vector<int> a(n),pre(n),max1(n);
//         for(int i{} ; i<n ; i++) cin>>a[i];
//         pre[0]=a[0];
//         for(int i{1} ; i<n ; i++) pre[i]=pre[i-1]+a[i];
//         max1[0]=a[0];
//         for(int i{1} ; i<n ; i++) max1[i]=max(max1[i-1],a[i]);
//         while(q--) {
//             int k;cin>>k;
//             auto it = upper_bound(max1.begin(),max1.end(),k);
//             if(it != max1.end()) {
//                 int ind = it-max1.begin();
//                 if(ind==0) {cout<<"0 ";}
//                 else {cout<<pre[ind-1]<<" ";}
//             } else {
//                 cout<<pre[n-1]<<" ";
//             }
//         }
//         cout<<"\n";
//     }
// }