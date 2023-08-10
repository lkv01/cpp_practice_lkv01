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
//         int n,k;cin>>n>>k;
//         vector<int> vk(k),a(k);
//         for(int i{} ; i<k ; i++) cin>>vk[i];

//         a[0]=vk[0];
//         bool ok1 = true;
//         for(int i{1} ; i<k ; i++) {
//             if((vk[i]-vk[i-1])<a[i-1]) {ok1= false;break;}
//             else {a[i]=(vk[i]-vk[i-1]);}
//         }
//         if(!ok1) {cout<<"No\n";continue;}
//         if(vk[0]>=0) {
//             cout<<"Yes\n";continue;
//         } else {
//             int z = (n-k+1);
//             if(a[1]>0) {
//                 cout<<"Yes\n";
//             } else {
//                 int zz = abs(a[1])*z;
//                 if(abs(vk[0])>=zz) {
//                     cout<<"Yes\n";
//                 } else {
//                     cout<<"No\n";
//                 }
//             }
//         }
//     }
// }