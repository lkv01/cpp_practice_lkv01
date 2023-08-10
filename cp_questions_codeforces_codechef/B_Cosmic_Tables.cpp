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
// #include <cstring>
// #include <cmath>
// #include <algorithm>
// typedef long long ll;
// using namespace std;

// #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// #define Sort(v) sort(v.begin(),v.end())
// #define Reverse(v) reverse(v.begin(),v.end())
// const ll mod = 1e9 + 7;

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// int main() {
//     fastio();
//     int n,m,k;cin>>n>>m>>k;
//     vector<vector<int>> v(n+1,vector<int> (m+1,0));
//     for(int i{1} ; i<=n ; i++) {
//         for(int j{1} ; j<=m ; j++) {
//             cin>>v[i][j];
//         }
//     }
//     //----------------------------------------------
//     map<int,int> m1,m2;
//     for(int i{1} ; i<=n ; i++) {m1[i]=i;}
//     for(int i{1} ; i<=m ; i++) {m2[i]=i;}
//     //----------------------------------------------
    
//     while(k--) {
//         char ch;int x,y;
//         cin>>ch>>x>>y;
//         if(ch=='g') {cout<<v[m1[x]][m2[y]]<<"\n";continue;}
//         if(ch=='r') {int z=m1[x];m1[x]=m1[y];m1[y]=z;}        
//         if(ch=='c') {int z=m2[x];m2[x]=m2[y];m2[y]=z;}
//     }
// }