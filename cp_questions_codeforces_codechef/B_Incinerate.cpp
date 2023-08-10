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
//         int n,k;cin>>n>>k;
//         int h1[n] = {};
//         int p1[n] = {};
//         for(int i{} ; i<n ; i++) cin>>h1[i];
//         for(int i{} ; i<n ; i++) cin>>p1[i];

// //---------------------------------------------------------------------
//         vector<pair<int,int>> v;
//         for(int i{} ; i<n ; i++) {v.push_back({h1[i],p1[i]});}
//         Sort(v);
//         vector<int> h(n),p(n);
//         for(int i{} ; i<n ; i++) {h[i]=v[i].first;p[i]=v[i].second;}
//         for(int i{n-2} ; i>=0 ; i--) {p[i]=min(p[i],p[i+1]);}
// //---------------------------------------------------------------------

//         int ind{},temp{k};
//         bool ok1 = true;bool ok2 = true;
//         while((ind<n) && (k>0)) {
//             ind = upper_bound(h.begin(),h.end(),temp) - h.begin();
//             if(ind==n) {ok1=false;break;}
//             k-=p[ind];
//             if(k<=0) {ok2=false;break;}
//             temp+=k;
//         }
//         if(ok1==false) {cout<<"YES\n";continue;}
//         if(ok2==false) {cout<<"NO\n";continue;}
//     }
// }