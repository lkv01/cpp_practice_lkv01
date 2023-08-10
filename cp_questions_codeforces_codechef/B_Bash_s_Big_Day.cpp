// #include <iostream>
// #include <vector>
// #include <set>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// const int N = 1e5+10;

// vector<int> lp(N,0);
// void sieve() {
//     vector<bool>is_Prime(N,1);
//     is_Prime[0] = is_Prime[1] = 0;
//     for(int i{2} ; i<N ; i++) {
//         if(is_Prime[i] == true) {
//             lp[i] = i;
//             for(int j{2*i} ; j<N ; j+=i) {
//                 is_Prime[j] = false;
//                 if(lp[j]==0) {
//                     lp[j] = i;
//                 }
//             }
//         }
//     }
// }

// int main() {
//     sieve();
//     int n;
//     cin>>n;
//     map<int,int> m;
//     for(int i{} ; i<n ; i++) {
//         int x;
//         cin>>x;
//         set<int> s;
//         while(x>1) {
//             s.insert(lp[x]);
//             x/=lp[x];
//         }
//         for(auto elem : s) {
//             m[elem]++;
//         }
//     }
//     int max1{1};
//     for(auto it = m.begin() ; it != m.end() ; it++) {
//         if(max1 < (it->second)) {
//             max1 = (it->second);
//         }
//     }
//     cout<<max1<<"\n";
// }