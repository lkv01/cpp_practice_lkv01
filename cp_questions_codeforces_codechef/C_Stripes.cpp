// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         char arr[8][8] = {};
//         for(int i{} ; i<8 ; i++) {
//             for(int j{} ; j<8 ; j++) {
//                 cin>>arr[i][j];
//             }
//         }
//         int r = 8*pow(('R'-'A'+1),2);
//         int b = 8*pow(('B'-'A'+1),2);
        
//         for(int i{} ; i<8 ; i++) {
//             int x{};
//             for(int j{} ; j<8 ; j++) {
//                 if((arr[i][j] == 'R') || (arr[i][j] == 'B')) {
//                     x += pow((arr[i][j]-'A'+1),2);
//                 }
//             }
//             if(x == r) {
//                 cout<<"R\n";
//                 break;
//             } else if(x == b) {
//                 cout<<"B\n";
//                 break;
//             }
//         }
        
//         for(int j{} ; j<8 ; j++) {
//             int x{};
//             for(int i{} ; i<8 ; i++) {
//                 if((arr[i][j] == 'R') || (arr[i][j] == 'B')) {
//                     x += pow((arr[i][j]-'A'+1),2);
//                 }
//             }
//             if(x == r) {
//                 cout<<"R\n";
//                 break;
//             } else if(x == b) {
//                 cout<<"B\n";
//                 break;
//             }
//         }
//     }
// }