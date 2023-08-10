// //SIEVE=========================================================>
/*The classical Sieve of Eratosthenes algorithm takes O(N log (log N)) 
time to find all prime numbers less than N.*/

// #include <iostream>
// #include <vector>
// using namespace std;
// const int N =  1e5+10;

// //....algorithm..............
// vector<bool> is_prime(N+1,1);
// void sieve(int n) {
//     is_prime[1] = false;
//     for(int i{2} ; i<n ; i++) {
//         if(is_prime[i] == true) {
//             for(int j{2*i} ; j<n ; j+=i) {
//                 is_prime[j] = false;
//             }
//         }
//     }
// }
// //..........................

// int main() {
//     sieve(N);
//     for(int i{1} ; i<=100 ; i++) {
//         if(is_prime[i] == 1) {
//             cout<<i<<"\n";
//         }
//     }
//     return 0;
// }

//LP_HP_SIEVE======================================================>
// #include <iostream>
// #include <vector>
// using namespace std;
// const int N = 1e5+10;

// //....algorithm....................
// vector<bool> is_prime(N+1,1);
// vector<int> hp(N+1,1);
// vector<int> lp(N+1,1);
// void lp_hp_sieve(int n) {
//     is_prime[1] = false;
//     for(int i{2} ; i<n ; i++) {
//         if(is_prime[i] == true) {
//             hp[i] = i;
//             lp[i] = i;
//             for(int j{2*i} ; j<n ; j+=i) {
//                 is_prime[j] = false;
//                 hp[j] = i;
//                 if(lp[j] == true) {
//                     lp[j] = i;
//                 }
//             }
//         }
//     }
// }
// //.................................

// int main() {
//     lp_hp_sieve(N);
//     for(int i{10} ; i<=100 ; i++) {
//         cout<<i<<" "<<lp[i]<<" "<<hp[i]<<"\n";
//     }
//     cout<<"\n";
//     int num1;
//     cin>>num1;
//     vector<int> prime_factors;
//     while(num1 > 1) {
//         prime_factors.push_back(lp[num1]);
//         num1/=lp[num1];
//     }
//     for(auto elem:prime_factors) {
//         cout<<elem<<" ";
//     }
//     cout<<"\n";
//     return 0;
// }

//BINARY EXPONENTIATION==============================================
// TIME COMPLEXITY --> O(log N)
// #include <iostream>
// using namespace std;
// const int N = 1e9+7;

// //....algorithm....................
// long long int binExp(long long int a,int b) {
//     long long int ans{1};
//     while(b>0) {
//         if(b&1) {
//             ans *= a;
//         }
//         b>>=1;
//         a *= a;
//     }
//     return ans;
// }
// //.................................

// int main() {
//     int a,b;
//     cin>>a>>b;
//     cout<<binExp(a,b)<<"\n";
//     // cout<<(1ll<<31)<<"\n";
//     // long long int ans = 1ll * a*b;
//     // cout<<ans<<"\n";
//     return 0;
// }