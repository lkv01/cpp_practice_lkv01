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

// void swap(int &a,int &b) {
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
//         int a[n] = {};
//         int b[n] = {};
//         for(int i{} ; i<n ; i++) cin>>a[i];
//         for(int i{} ; i<n ; i++) cin>>b[i];
//         if(n==1) {
//             cout<<"0\n";continue;
//         }
//         set<int> s;
//         int ans{(int)1e9};
//         // map<int,pair<int,int>> m;
//         // m.insert({abs(a[0]-a[1]),{a[0],a[1]}});
//         // m.insert({abs(a[0]-b[1]),{a[0],b[1]}});
//         // m.insert({abs(b[0]-a[1]),{b[0],a[1]}});
//         // m.insert({abs(b[0]-b[1]),{b[0],b[1]}});
        
//         // auto it = m.begin();
//         // s.insert((it->second).first);
//         // s.insert((it->second).second);
//         //-----------------------------------------------------------------
//         s.insert(a[0]);s.insert(a[1]);
        
//         int min1{},max1{};
//         auto it1 = s.begin();min1=(*it1);
//         if(s.size()==1) {max1=min1;}
//         else {it1++;max1=(*it1);}
//         int diff1{max1-min1};

//         for(int i{2} ; i<n ; i++) {
//             if((a[i]==max1) || (a[i]==min1) || (b[i]==max1) || (b[i]==min1)) {
//                 continue;
//             }
//             if(min(a[i],b[i]) > max1) {
//                 max1 = min(a[i],b[i]);
//                 diff1 = max1-min1;
//             } else if(max(a[i],b[i]) < min1) {
//                 min1 = max(a[i],b[i]);
//                 diff1 = max1-min1;
//             } else if((max(a[i],b[i]) > max1) && (min(a[i],b[i]) < min1)) {
//                 int z2 = max(a[i],b[i]) - max1;
//                 int z1 = min1 - min(a[i],b[i]);
//                 if(z1 < z2) {
//                     min1 = min(a[i],b[i]);
//                     diff1+=z1;
//                 } else {
//                     max1 = max(a[i],b[i]);
//                     diff1+=z2;
//                 }
//             }
//             else {
//                 continue;
//             }
//         }
//         ans=min(ans,diff1);
//         //-----------------------------------------------------------
//         s.clear();min1=0;max1=0;diff1=0;
//         s.insert(a[0]);s.insert(b[1]);
        
//         auto it2 = s.begin();min1=(*it2);
//         if(s.size()==1) {max1=min1;}
//         else {it2++;max1=(*it2);}
//         diff1=max1-min1;

//         for(int i{2} ; i<n ; i++) {
//             if((a[i]==max1) || (a[i]==min1) || (b[i]==max1) || (b[i]==min1)) {
//                 continue;
//             }
//             if(min(a[i],b[i]) > max1) {
//                 max1 = min(a[i],b[i]);
//                 diff1 = max1-min1;
//             } else if(max(a[i],b[i]) < min1) {
//                 min1 = max(a[i],b[i]);
//                 diff1 = max1-min1;
//             } else if((max(a[i],b[i]) > max1) && (min(a[i],b[i]) < min1)) {
//                 int z2 = max(a[i],b[i]) - max1;
//                 int z1 = min1 - min(a[i],b[i]);
//                 if(z1 < z2) {
//                     min1 = min(a[i],b[i]);
//                     diff1+=z1;
//                 } else {
//                     max1 = max(a[i],b[i]);
//                     diff1+=z2;
//                 }
//             } 
//             else {
//                 continue;
//             }
//         }
//         ans=min(ans,diff1);
//         //-----------------------------------------------------------
//         s.clear();min1=0;max1=0;diff1=0;
//         s.insert(b[0]);s.insert(a[1]);
        
//         auto it3 = s.begin();min1=(*it3);
//         if(s.size()==1) {max1=min1;}
//         else {it3++;max1=(*it3);}
//         diff1=max1-min1;

//         for(int i{2} ; i<n ; i++) {
//             if((a[i]==max1) || (a[i]==min1) || (b[i]==max1) || (b[i]==min1)) {
//                 continue;
//             }
//             if(min(a[i],b[i]) > max1) {
//                 max1 = min(a[i],b[i]);
//                 diff1 = max1-min1;
//             } else if(max(a[i],b[i]) < min1) {
//                 min1 = max(a[i],b[i]);
//                 diff1 = max1-min1;
//             } else if((max(a[i],b[i]) > max1) && (min(a[i],b[i]) < min1)) {
//                 int z2 = max(a[i],b[i]) - max1;
//                 int z1 = min1 - min(a[i],b[i]);
//                 if(z1 < z2) {
//                     min1 = min(a[i],b[i]);
//                     diff1+=z1;
//                 } else {
//                     max1 = max(a[i],b[i]);
//                     diff1+=z2;
//                 }
//             } 
//             else {
//                 continue;
//             }
//         }
//         ans=min(ans,diff1);
//         //----------------------------------------------------------------

//         s.clear();min1=0;max1=0;diff1=0;
//         s.insert(b[0]);s.insert(b[1]);
        
//         auto it4 = s.begin();min1=(*it4);
//         if(s.size()==1) {max1=min1;}
//         else {it4++;max1=(*it4);}
//         diff1=max1-min1;

//         for(int i{2} ; i<n ; i++) {
//             if((a[i]==max1) || (a[i]==min1) || (b[i]==max1) || (b[i]==min1)) {
//                 continue;
//             }
//             if(min(a[i],b[i]) > max1) {
//                 max1 = min(a[i],b[i]);
//                 diff1 = max1-min1;
//             } else if(max(a[i],b[i]) < min1) {
//                 min1 = max(a[i],b[i]);
//                 diff1 = max1-min1;
//             } else if((max(a[i],b[i]) > max1) && (min(a[i],b[i]) < min1)) {
//                 int z2 = max(a[i],b[i]) - max1;
//                 int z1 = min1 - min(a[i],b[i]);
//                 if(z1 < z2) {
//                     min1 = min(a[i],b[i]);
//                     diff1+=z1;
//                 } else {
//                     max1 = max(a[i],b[i]);
//                     diff1+=z2;
//                 }
//             } 
//             else {
//                 continue;
//             }
//         }
//         ans=min(ans,diff1);


//         //-------------------------------------------------------------
//         cout<<ans<<"\n";
//     }
// }