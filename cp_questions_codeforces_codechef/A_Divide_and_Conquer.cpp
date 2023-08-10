// #include <iostream>
// #include <vector>
// #include <algorithm>
// const int N = 1e9+7;
// typedef long long ll;
// using namespace std;

// ll operations1(ll i) {
//     ll z = i;
//     ll result{};
//     while((z%2) != 0) {
//         z/=2;
//         result++;
//     }
//     return result;
// }

// ll operations2(ll i) {
//     ll z = i;
//     ll result{};
//     while((z%2) == 0) {
//         z/=2;
//         result++;
//     }
//     return result;
// }

// ll min(ll a,ll b) {
//     if(a<b) return a;
//     else return b;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         ll n;
//         cin>>n;

//         vector<ll> odd,even;
//         for(ll i{} ; i<n ; i++) {
//             ll x;
//             cin>>x;
//             if((x%2)==0) {
//                 even.push_back(x);
//             } else {
//                 odd.push_back(x);
//             }
//         }

//         sort(even.begin(),even.end());
//         ll min2{N};
//         for(size_t i{} ; i<even.size() ; i++) {
//             ll x = operations2(even[i]);
//             if(min2>x) {
//                 min2 = x;
//             }
//         }

//         if((odd.size()%2) == 0) {
//             cout<<"0\n";
//             continue;
//         } else {
//             ll min1{N};
//             for(size_t i{} ; i<odd.size() ; i++) {
//                 ll x = operations1(odd[i]);
//                 if(min1>x) {
//                     min1 = x;
//                 }
//             }
//             ll min3 = min(min1,min2);
//             cout<<min3<<"\n";
//         }
//     }
// }