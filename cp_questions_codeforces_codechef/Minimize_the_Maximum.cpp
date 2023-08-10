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
//         vector<int> a(n);
//         for(int i{} ; i<n ; i++) cin>>a[i];
        
//         for(int j{} ; j<(n) ; j++) {
//             bool okb = true;
//             int temp{0};
//             for(int i{j} ; i<n ; i++) {
//                 if(i==(n-1)) {okb = false;temp=i;break;}
//                 if(a[i+1]>a[i]) {continue;}
//                 else {okb = false;temp=i;break;}
//             }
//             if(!okb) {
//                 for(int i{temp} ; i>0 ; i--) {
//                     if((a[i]-a[i-1])>1) {
//                         int z = a[i]+a[i-1];
//                         a[i]=(z/2);
//                         a[i-1]=z-a[i];
//                     } else {break;}
//                 }

//             } else {break;}
//         }
//         Sort(a);
//         cout<<a.back()<<"\n";
//     }
// }