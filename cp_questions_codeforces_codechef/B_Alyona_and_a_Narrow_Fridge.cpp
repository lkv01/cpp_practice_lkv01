// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n,h;
//     cin>>n>>h;
//     vector<int> vec;
//     for(int i{} ; i<n ; i++) {
//         int x;
//         cin>>x;
//         vec.push_back(x);
//     }
//     int ans{};
//     for(int i{1} ; i<=n ; i++) {
//         vector<int> vec3 = vec;
//         sort(vec3.begin(),vec3.begin()+i,greater<int>());
//         long long int sum{};
//         for(int j{} ; j<i ; j+=2) {
//             sum+=vec3[j];
//         }
//         if(sum <= h) ans = i;
//         else break;
//     }
//     cout<<ans<<"\n";
// }