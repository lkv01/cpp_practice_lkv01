// #include <iostream>
// #include <vector>
// using namespace std;
// const int N = 1e7+10;

// vector<bool> isPrime(N,1);

// int main() {
//     // int q;
//     // cin>>q;
//     // while(q--) {
//     //     int n;
//     //     cin>>n;
//     // }
//     isPrime[1] = false;
//     for(int i = 2 ; i<N ; i++) {
//         if(isPrime[i] == true) {
//             for(int j{2*i} ; j<N ; j+=i) {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for(int i{1} ; i<=100 ; i++) {
//         cout<<i<<" "<<isPrime[i]<<"\n";
//     }
//     return 0;
// }