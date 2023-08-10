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

// void swap(ll &a,ll &b) {
//     a=a^b;
//     b=b^a;
//     a=a^b;
// }

// int main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         vector<int> a(n),b(n);
//         for(int i{} ; i<n ; i++) cin>>a[i];
//         for(int i{} ; i<n ; i++) cin>>b[i];
//         vector<pair<int,int>> v;
//         for(int i{} ; i<(n-1) ; i++) {
//             for(int j{i+1} ; j<n ; j++) {
//                 if((a[i]>a[j]) || (b[i]>b[j])) {
//                     swap(a[i],a[j]);swap(b[i],b[j]);
//                     v.push_back({i+1,j+1});
//                 }
//             }
//         }
//         vector<int> aa,bb;
//         aa=a;bb=b;
//         Sort(aa);
//         Sort(bb);
//         if((aa==a) && (bb==b)) {
//             cout<<v.size()<<"\n";
//             for(int i{} ; i<(int)v.size() ; i++) {
//                 cout<<v[i].first<<" "<<v[i].second<<"\n";
//             }
//         } else {cout<<"-1\n";}
//     }
// }