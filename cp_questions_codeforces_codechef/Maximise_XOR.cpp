// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         string s1,s2;
//         cin>>s1>>s2;
//         int arr1[2] = {};
//         int arr2[2] = {};
//         for(size_t i{} ; i<s1.length() ; i++) {
//             if(s1[i]=='1') arr1[1]++;
//             else arr1[0]++;
//         }
//         for(size_t i{} ; i<s1.length() ; i++) {
//             if(s2[i]=='1') arr2[1]++;
//             else arr2[0]++;
//         }
//         size_t n = s1.length();
//         int a = min(arr1[1],arr2[0]);
//         int b = min(arr1[0],arr2[1]);
//         int c = (a+b);
//         int x = (int)n-c;
//         while(c--) {
//             cout<<"1";
//         }
//         while(x--) {
//             cout<<"0";
//         }
//         cout<<"\n";
//     }
// }