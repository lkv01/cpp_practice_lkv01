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
//     int n,m;cin>>n>>m;
//     int lo{};int hi{};
//     int x{};
//     int mm{m};
//     vector<int> v;
//     if(m%2 == 0) {
//         lo = (m+1)/2;hi = lo+1;
//         while(mm--) {
//             if(x%2 == 0) {
//                 v.push_back(lo);lo--;x++;
//             } else {
//                 v.push_back(hi);hi++;x++;
//             }
//         }
//     } else {
//         lo = (m+1)/2;hi = lo-1;
//         while(mm--) {
//             if(x%2 == 0) {
//                 v.push_back(lo);lo++;x++;
//             } else {
//                 v.push_back(hi);hi--;x++;
//             }
//         }
//     }
    
//     int z = n/m;
//     for(int i{} ; i<z ; i++) {
//         for(int j{} ; j<m ; j++) {
//             cout<<v[j]<<"\n";
//         }
//     }
//     int z1 = n%m;
//     for(int i{} ; i<z1 ; i++) {
//         cout<<v[i]<<"\n";
//     }
// }