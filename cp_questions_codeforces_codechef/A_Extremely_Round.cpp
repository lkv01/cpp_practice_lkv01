// #include <iostream>
// using namespace std;

// int cd(int n1) {
//     int n = n1;
//     int count{};
//     while(n>0) {
//         n/=10;
//         count++;
//     }
//     return count;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         if(n<10) {
//             cout<<n<<"\n";
//         } else {
//             int z1 = cd(n);
//             int n1=n;
//             int z=z1;
//             z--;
//             while(z--) {
//                 n1/=10;
//             }
//             cout<<(n1+(z1-1)*9)<<"\n";
//         }
//     }
// }