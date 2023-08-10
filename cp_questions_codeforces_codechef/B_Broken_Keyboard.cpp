// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int k{1};
//         bool flag = true;
//         for(int i{} ; i<n ; ) {
//             int x{1};
//             for(int j{i} ; j<n-1 ; j++) {
//                 if(s[j]==s[j+1]) {
//                     x++;
//                 } else {
//                     break;
//                 }
//             }
//             if(!((((x%2) == 0)&&((k%2) == 0)) || (((x%2) != 0)&&((k%2) != 0)))) {
//                 cout<<"NO\n";
//                 flag = false;
//                 break;
//             }
//             k++;
//             i+=x;
//         }
//         if(flag == true) {
//             cout<<"YES\n";
//         }
//     }
// }