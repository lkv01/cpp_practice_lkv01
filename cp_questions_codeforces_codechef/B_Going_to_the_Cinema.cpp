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
// #include <set>
// #include <map>
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
//         vector<int> v(n);
//         for(int i{} ; i<n ; i++) cin>>v[i];
//         Sort(v);
//         map<int,int> m1,m2;
//         set<int> s;
//         for(int i{} ; i<n ; i++) {
//             m1[v[i]]=(i+1);s.insert(v[i]);m2[i+1]=v[i];
//         }
//         set<int> st;
//         for(auto it = m1.begin() ; it != m1.end() ; it++) {
//             st.insert(it->second);
//         }
//         int ans{};
//         for(auto it = st.begin() ; it != st.end() ; it++) {
//             int z = (*it);
//             if(z==n) {
//                 if(z > m2[z]) {ans++;}
//                 else {continue;}
//             }
//             else if((z > m2[z]) && (z < m2[z+1])) {
//                 ans++;
//             }
//         }
        
//         // set<int> st;
//         // int ans{};
//         // for(auto it1 = s.end() ; it1 != s.begin() ; it1--) {
//         //     auto it = it1;it--;
//         //     int z = (*it);
//         //     if(m1[m2[z]] > z) {
//         //         // st.insert(m1[m2[z]]);
//         //         for(auto itx = it1 ; itx != s.end() ; it++) {
//         //             if((*itx)<m1[m2[z]]) {

//         //             }
//         //         }
//         //         ans++;
//         //     } else if(m1[m2[z]] <= z) {
//         //         continue;
//         //     }
//         // }
//         auto its = s.find(0);
//         if(its!=s.end()) {
//             // cout<<st.size()<<"\n";
//             cout<<ans<<"\n";
//         } else {
//             // cout<<(s.size()+1)<<"\n";
//             cout<<(ans+1)<<"\n";
//         }
//     }
// }