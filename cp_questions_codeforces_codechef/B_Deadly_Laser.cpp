// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,m,l1,l2,d;
//         cin>>n>>m>>l1>>l2>>d;

//         bool right,left,top,bottom;

//         if((l1+d)<n) {
//             right = true;
//         } else {
//             right = false;
//         }

//         if((l2-d)>1) {
//             bottom = true;
//         } else {
//             bottom = false;
//         }

//         if((l1-d)>1) {
//             left = true;
//         } else {
//             left = false;
//         }

//         if((l2+d)<m) {
//             top = true;
//         } else {
//             top = false;
//         }

//         if((bottom && right) || (left && top)) {
//             cout<<(n+m-2)<<"\n";
//         } else {
//             cout<<"-1\n";
//         }
//     }
// }