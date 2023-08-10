// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <unordered_set>
// typedef long long ll;
// const int N = 1e6+10;
// using namespace std;

// unordered_set<ll> vec;

// void sieve() {
//     vector<bool> isPrime(N,1);
//     isPrime[0] = isPrime[1] = false;
//     for(int i{2} ; i<N ; i++) {
//         if(isPrime[i] == true) {
//             vec.insert(i*1LL*i);
//             for(int j{2*i} ; j<N ; j+=i) {
//                 isPrime[j] = false;
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     sieve();
    
//     while(n--) {
//         ll x;
//         cin>>x;
//         auto it = vec.find(x);
//         if(it != vec.end()) {
//             cout<<"YES\n";
//         } else {
//             cout<<"NO\n";
//         }
//     }
// }