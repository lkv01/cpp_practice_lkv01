// #include <iostream>
// using namespace std;
// const int N = 1e5+10;
// int hsh[N];

// int main() {
//     for(int i{} ; i<N ; i++) {
//         hsh[i] = 1;
//     }
//     hsh[1] = 0;
//     for(int i{2} ; i<N ; i++) {
//         if(hsh[i] == 1) {
//             for(int j{2*i} ; j<N ; j+=i) {
//                 hsh[j] = 0;
//             }
//         }
//     }
//     for(int i{1} ; i<=100 ; i++) {
//         if(hsh[i] == 1) {
//             cout<<i<<"\n";
//         }
//     }
//     return 0;
// }