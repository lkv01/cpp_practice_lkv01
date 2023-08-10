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
// #include <cmath>
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
//         vector<int> a;
//         int cnt{};
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;a.push_back(x);
//             int xx{x};
//             while(xx%2 == 0) {xx/=2;cnt++;}
//         }
//         if(cnt>=n) {cout<<"0\n";continue;}
//         cnt=(n-cnt);
//         int x = (int)log2(n);
//         bool ok2 = true;
//         int op{};
//         for(int i{1<<x} ; i>1 ; i/=2) {
//             bool ok1 = true;
//             for(int j{i} ; j<=n ; j+=(2*i)) {
//                 cnt-=((int)log2(i));op++;
//                 if(cnt<=0) {ok1 = false;break;}
//             }
//             if(!ok1) {ok2=false;break;}
//         }

//         if(ok2) {cout<<"-1\n";}
//         else cout<<op<<"\n";
//     }
// }