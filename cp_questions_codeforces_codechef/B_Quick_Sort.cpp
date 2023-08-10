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

// int main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,k;cin>>n>>k;
//         vector<int> p;
//         map<int,int> m;
//         for(int i{1} ; i<=n ; i++) {int x;cin>>x;p.push_back(x);m[x]+=(i);}
//         bool flag = true;
//         int i{2};
//         for( ; i<=n ; i++) {
//             if(m[i]>m[i-1]) {continue;}
//             flag = false;
//             break;
//         }
//         if(flag==true) {cout<<"0\n";continue;}
//         int z = (n-i+1);
//         if(z%k == 0) {cout<<(z/k)<<"\n";}
//         else {cout<<((z/k)+1)<<"\n";}
//     }
// }