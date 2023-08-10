// #include <iostream>
// #include <vector>
// typedef long long ll;
// using namespace std;
// const int N = 1e5+10;

// vector<int> colour(N);

// void sieve() {
//     vector<int> isPrime(N,1);
//     isPrime[0] = isPrime[1] = 0;
//     for(int i{2} ; i<N ; i++) {
//         if(isPrime[i]==1) {
//             colour[i]=1;
//             for(int j{2*i} ; j<N ; j+=i) {
//                 isPrime[j]=0;
//                 colour[j]=2;
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     sieve();
//     if(n>2) {
//         cout<<"2\n";
//     } else {
//         cout<<"1\n";
//     }
//     for(int i{2} ; i<=(n+1) ; i++) {
//         cout<<colour[i]<<" ";
//     }
//     cout<<"\n";
// }