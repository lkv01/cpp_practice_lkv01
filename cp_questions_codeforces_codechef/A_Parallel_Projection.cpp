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

// int32_t main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         int w,d,h;
//         cin>>w>>d>>h;
//         int a,b,f,g;
//         cin>>a>>b>>f>>g;
//         int ans{(int)1e9};
//         int z1 = a+f;
//         int z2 = abs(b-g);
//         ans=min(ans,z1+z2);
//         z1=(2*w)-z1;
//         ans=min(ans,z1+z2);
//         z1=0;z2=0;
//         z1 = b+g;
//         z2 = abs(a-f);
//         ans=min(ans,z1+z2);
//         z1=(2*d)-z1;
//         ans=min(ans,z1+z2);
//         cout<<(ans+h)<<"\n";
//     }
// }