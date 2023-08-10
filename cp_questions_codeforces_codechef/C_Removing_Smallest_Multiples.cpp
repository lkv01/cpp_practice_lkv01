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
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;

// #define Sort(v) sort(v.begin(),v.end())
// const ll mod = 1e9 + 7;

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }
// const int N = 1e6+10;
// vector<int> temp(N);

// int main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         string s;cin>>s;
//         vector<int> v;
//         map<int,int> m;
//         for(int i{} ; i<n ; i++) {
//             if(s[i]=='0') {v.push_back(i+1);m[i+1]++;}
//         }
//         ll ans{};
//         for(int i{} ; i<N ; i++) {temp[i]=0;}


//         for(int i{} ; i<(int)v.size() ; i++) {
//             for(int j{v[i]} ; j<=v.back() ; j+=v[i]) {
//                 if(m[j]>0) {
//                     if(temp[j]==0) {ans+=v[i];temp[j]++;}
//                 }
//                 else break;
//             }
//         }
//         cout<<ans<<"\n";
        
//     }
// }