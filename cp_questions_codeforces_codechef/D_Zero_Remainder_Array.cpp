// #include <iostream>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,k;cin>>n>>k;
//         int a[n] = {};
//         map<int,int> m;
//         for(int i{} ; i<n ; i++) {
//             cin>>a[i];
//             int z = a[i]%k;
//             if(z==0) continue;
//             m[a[i]+k-z]++;
//         }
//         int x{1};
//         while(m.size()>0) {
//             auto itx = m.find(x);
//             if(itx != m.end()) {
//                 m[x]--;x++;
//                 if(m[x]==0) m.erase(itx);
//             } else {
//                 auto it = m.end();it--;
//                 int z = (it->first);
//                 if(x<z) {x++;continue;}
//                 if(x>z) {
//                     map<int,int> mp;
//                     for(auto it = m.begin() ; it != m.end() ; it++) {
//                         mp[(it->first)+k]+=(it->second);
//                     }
//                     m=mp;
//                 }
//             }
//         }
//         cout<<x<<"\n";
//     }
// }

/*
        L               K       K     V           V
        L               K    K         V         V
        L               K  K            V       V
        L               KK               V     V
        L               K  K              V   V
        L               K    K             V V
        L L L L L L     K       K           V    
*/