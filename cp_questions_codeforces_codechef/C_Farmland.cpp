// #include <iostream>
// #include <vector>
// using namespace std;
// #define ll long long
// const ll int N = 1e18;
// int main() {
//     ll n;
//     int k;
//     cin>>n>>k;
//     vector<long long int> vec(n);
//     ll temp{N},a{},b{};
//     for(int i{} ; i<k ; i++) {
//         cin>>vec[i];
//         ll t = n%vec[i];
//         if(temp>t) {
//             temp=t;
//             a=i+1;
//             b = n/vec[i];
//         }
//     }
//     cout<<a<<" "<<b<<"\n";
// }