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
//     int n;cin>>n;
//     int nn{n};
//     vector<vector<int>> t;
//     set<int> s;
//     while(nn--) {
//         int k;cin>>k;
//         vector<int> v(k);
//         for(int i{} ; i<k ; i++) {cin>>v[i];s.insert(v[i]);}
//         t.push_back(v);
//     }
//     int split{};
//     for(int i{} ; i<n ; i++) {
//         vector<int> vec = t[i];
//         int m = vec.size();
//         for(int j{m-1} ; j>0 ; j--) {
//             if(vec[j-1]>vec[j]) {
//                 split++;
//             } else {
//                 auto it = s.find(vec[j]);
//                 auto it1=it;it1--;
//                 if((*it1) > vec[j-1]) {split++;}
//             }
//         }
//     }
//     cout<<(split)<<" "<<(n+split-1)<<"\n";
// }