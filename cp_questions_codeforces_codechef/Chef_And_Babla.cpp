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

// int main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         vector<int> pos,neg;
//         int zero{};
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;
//             if(x==0) {zero++;}
//             else if(x>0) {pos.push_back(x);}
//             else if(x<0) {neg.push_back(x);}
//         }

//         if(zero) {
//             cout<<"-1\n";continue;
//         }
        
        
//         if(neg.size()==0) {
//             Sort(pos);
//             cout<<pos.front()-1<<"\n";continue;
//         }
//         if(pos.size()==0) {
//             Sort(neg);
//             cout<<((neg.back())*(-1))-1<<"\n";continue;
//         }
//         Sort(pos);
//         Sort(neg);
//         int zn = (neg.back())*(-1);
//         int zp = pos.front();
//         zp--;zn--;
//         cout<<min(zp,zn)<<"\n";

//     }
// }