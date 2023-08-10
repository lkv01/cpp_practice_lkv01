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
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         char c;cin>>c;
//         string s;cin>>s;
//         set<int> st;
//         bool ok = true;
//         for(int i{} ; i<n ; i++) {
//             if(s[i]!=c) {ok=false;st.insert(i+1);}
//         }
//         if(ok) {
//             cout<<"0\n";continue;
//         }

//         bool flag=true;
//         int z = n/2;
//         int i{z+1};
//         for( ; i<=n ; i++) {
//             auto it = st.find(i);
//             if(it==st.end()) {flag=false;break;}
//         }
//         if(!flag) {
//             cout<<"1\n";cout<<i<<"\n";
//         }
//         else {
//             cout<<"2\n";
//             cout<<n<<" "<<(n-1)<<"\n";
//         }
//     }
// }