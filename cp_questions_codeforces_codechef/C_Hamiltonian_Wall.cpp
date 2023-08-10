// #include <iostream>
// #include <string>
// using namespace std;
// const int M = 2e5;
// int arr[2][M];
// char arr1[2][M];
// void recursive(int m,int i,int j) {
//     if(arr1[i][j] == 'B') {
//         if(arr[i][j] == 0) {
//             arr[i][j]++;
//             if(i==0) {
//                 if(j<(m-1)) {
//                     recursive(m,i,j+1);
//                     recursive(m,i+1,j);
//                 }
//                 else  recursive(m,i+1,j);
//             }
//             else if(i==1) {
//                 if(j<(m-1)) {
//                     recursive(m,i-1,j);
//                     recursive(m,i,j+1);
//                 }
//                 else recursive(m,i-1,j);
//             }
//         }
//     }
//     if(i==0) {
//         if(j<(m-1)) {
//             recursive(m,i,j+1);
//             recursive(m,i+1,j);
//         }
//         else  recursive(m,i+1,j);
//     }
//     else if(i==1) {
//         if(j<(m-1)) {
//             recursive(m,i-1,j);
//             recursive(m,i,j+1);
//         }
//         else recursive(m,i-1,j);
//     }
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int m;
//         cin>>m;
//         string s0,s1;
//         cin>>s0>>s1;

//         for(int j{} ; j<m ; j++) {
//             arr1[0][j] = s0[j];
//         }
//         for(int j{} ; j<m ; j++) {
//             arr1[1][j] = s1[j];
//         }

//         bool flag = true;
//         for(int j{} ; j<m ; j++) {
//             if((arr1[0][j] == 'B') && (arr[0][j] == 0)) {
//                 flag = false;
//                 break;
//             }
//         }
//         for(int j{} ; j<m ; j++) {
//             if((arr1[1][j] == 'B') && (arr[1][j] == 0)) {
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag) {
//             cout<<"YES\n";
//         } else {
//             cout<<"NO\n";
//         }
//     }
// }