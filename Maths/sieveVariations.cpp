// #include <iostream>
// #include <vector>
// using namespace std;
// const int N = 1e7+10;
// vector<bool> isPrime(N,1);
// vector<int> lp(N,0),hp(N,0);

// int main() {
//     isPrime[1] = false;
//     for(int i{2} ; i<N ; i++) {
//         if(isPrime[i] == true) {
//             lp[i] = hp[i] = i;
//             for(int j{2*i} ; j<N ; j+=i) {
//                 isPrime[j] = false;
//                 hp[j] = i;
//                 if(lp[j] == 0) {
//                     lp[j] = i;
//                 }
//             }
//         }
//     }
//     for(int i{1} ; i<=100 ; i++) {
//         cout<<i<<" | "<<lp[i]<<" "<<hp[i]<<"\n";
//     }

//     cout<<"\n=====================\n";

//     vector<int> vec;
//     int num;
//     cin>>num;
//     for(int i{2} ; i<=num ; i++) {
//         if(num == 1) {
//             break;
//         }
//         while(num%i == 0) {
//             num/=i;
//             vec.push_back(i);
//         }
//     }
//     for(auto elem:vec) {
//         cout<<elem<<" ";
//     }
//     cout<<"\n";
//     return 0;
// }