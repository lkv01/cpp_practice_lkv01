// // #include <iostream>
// // #include <map>
// // #include <algorithm>
// // typedef long long ll;
// // using namespace std;
// // int main() {
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int n;cin>>n;
// //         int a[n] = {};int b[n] = {};
// //         for(int i{} ; i<n ; i++) cin>>a[i];
// //         for(int i{} ; i<n ; i++) cin>>b[i];

// //         int m;cin>>m;
// //         map<int,int> mp;
// //         for(int i{} ; i<m ; i++) {int x;cin>>x;mp[x]++;}

// //         if(a[0]<b[0]) {cout<<"NO\n";continue;}
// //         if(mp[b[0]]==0) {cout<<"NO\n";continue;}
// //         bool flag = true;
// //         for(int i{1} ; i<n ; i++) {
// //             if(a[i]<b[i]) {flag = false;break;}
// //             if(a[i]==b[i]) continue;
// //             if(a[i]>b[i]) {
// //                 if(b[i]==b[i-1]) {continue;}
// //                 if(b[i]!=b[i-1]) {
// //                     if(mp[b[i-1]]==0) {flag = false;break;}
// //                     if(mp[b[i-1]]>0) {mp[b[i-1]]--;}
// //                 }
// //             }
// //         }
        
// //         if(flag == false) {cout<<"NO\n";}
// //         else {
// //             if(mp[b[n-1]]==0) {cout<<"NO\n";continue;}
// //             if(mp[b[n-1]]>0) {cout<<"YES\n";continue;}
// //         }
// //     }
// // }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         vector<int> a(n),b(n),b1;
//         for(int i{} ; i<n ; i++) cin>>a[i];
//         for(int i{} ; i<n ; i++) cin>>b[i];
//         b1=b;
//         int m;cin>>m;
//         vector<int> x(m);
//         for(int i{} ; i<m ; i++) cin>>x[i];
//         sort(x.rbegin(),x.rend());
// //---------------------------------------------------
//         bool flag = true;
//         for(int i{} ; i<n ; i++) {
//             if(a[i]<b[i]) {flag = false;break;}
//         }
//         if(!flag) {cout<<"NO\n";continue;}
// //-----------------------------------------------------
//         vector<int> z(n);
//         while(x.size()>0) {
//             bool ok = true;
//             auto it = find(b1.begin(),b1.end(),x.back());
//             if(it == b1.end()) {x.pop_back();continue;}
//             int ind = it - b1.begin();
//             if(b1[ind]==a[ind]) {b1[ind]=0;continue;}
//             while((b1[ind]==x.back()) || (b1[ind]==0)) {
//                 if(b1[ind]==0) {
//                     ind++;
//                     if(ind==n) {ok=false;break;}
//                     continue;
//                 }
//                 b1[ind]=0;a[ind]=x.back();
//                 ind++;
//                 if(ind==n) {ok=false;break;}
//             }
//             x.pop_back();
//             if(ok==false) {
//                 if(b1==z) x.clear();
//             }
//         }
        
//         if(a==b) cout<<"YES\n";
//         else cout<<"NO\n";
//     }
// }