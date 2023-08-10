// #include <iostream>
// #include <vector>
// #include <stack>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,s;
//         cin>>n>>s;
//         vector<int> vind;
//         vind.push_back(0);
//         int sum1{};
//         for(int i{1} ; i<=n ; i++) {
//             int x;cin>>x;
//             sum1+=(x);
//             if(x==1) vind.push_back(i);
//         }
        
//         if(sum1 < s) {
//             cout<<"-1\n";
//             continue;
//         }
//         if(sum1 == s) {
//             cout<<"0\n";
//             continue;
//         }

//         int mind = vind.size();

//         int max2{};
//         for(int i{1} ; i<=(mind-s) ; i++) {
//             int y{};
//             if(i==(mind-s)) {
//                 y = (vind[i+s-1])-(vind[i-1]+1)+1+(n-vind.back());
//             } else {
//                 y = (vind[i+s]-1)-(vind[i-1]+1)+1;
//             }            
//             if(max2 < y) max2 = y;
//         }
        
//         cout<<n-max2<<"\n";

//     }
// }