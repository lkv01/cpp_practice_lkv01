// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// const int N = 10007;
// int main() {
//     int n;
//     cin>>n;
//     vector<int> vec(n);
//     for(int i{} ; i<n ; i++) {
//         cin>>vec[i];
//     }
//     sort(vec.begin(),vec.end());
//     vector<int> rev_vec = vec;
//     sort(rev_vec.rbegin(),rev_vec.rend());
//     long long int ans{};
//     for(int i{} ; i<n ; i++) {
//         ans=(ans%N + ((vec[i]%N)*(rev_vec[i]%N))%N)%N;
//     }
//     cout<<ans<<"\n";
// }