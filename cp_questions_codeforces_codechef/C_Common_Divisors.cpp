// #include <iostream>
// #include <set>
// #include <algorithm>
// #define int int64_t
// typedef long long ll;
// using namespace std;

// int32_t main() {
//     int n;cin>>n;
//     int gcd{};
//     while(n--) {
//         int x;cin>>x;
//         gcd=__gcd(gcd,x);
//     }
//     set<int> s;
//     for(int i{1} ; i*i<=gcd ; i++) {
//         if(gcd%i == 0) {
//             if((gcd/i) == i) s.insert(i);
//             else {s.insert(i);s.insert(gcd/i);}
//         }
//     }
//     cout<<s.size()<<"\n";
// }