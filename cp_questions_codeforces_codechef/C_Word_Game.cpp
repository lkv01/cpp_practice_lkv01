// #include <iostream>
// #include <string>
// #include <vector>
// #include <cmath>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         vector<int> f[3];
//         for(int j{} ; j<3 ; j++) {
//             for(int i{1} ; i<=n ; i++) {
//                 string s;
//                 cin>>s;
//                 int x{};
//                 for(int i{0} ; i<3 ; i++) {
//                     x+=((s[i]-'a'+1)*(pow(29,i)));
//                 }
//                 f[j].push_back(x);
//             }
//         }
//         //for f0
//         bool f1 = true;
//         bool f2 = true;
//         int x1{};
//         for(int i{} ; i<n ; i++) {
//             auto it = find(f[1].begin(),f[1].end(),f[0].at(i));
//             if(it != f[1].end()) {
//                 f1 = true;
//             } else {
//                 f1 = false;
//             }
//             auto it1 = find(f[2].begin(),f[2].end(),f[0].at(i));
//             if(it1 != f[2].end()) {
//                 f2 = true;
//             } else {
//                 f2 = false;
//             }
//             if(f1 && f2) {
//                 x1+=0;
//             } else if(f1 || f2) {
//                 x1+=1;
//             } else {
//                 x1+=3;
//             }
//         }

//         //for f1
//         f1 = true;
//         f2 = true;
//         int x2{};
//         for(int i{} ; i<n ; i++) {
//             auto it = find(f[0].begin(),f[0].end(),f[1].at(i));
//             if(it != f[0].end()) {
//                 f1 = true;
//             } else {
//                 f1 = false;
//             }
//             auto it1 = find(f[2].begin(),f[2].end(),f[1].at(i));
//             if(it1 != f[2].end()) {
//                 f2 = true;
//             } else {
//                 f2 = false;
//             }
//             if(f1 && f2) {
//                 x2+=0;
//             } else if(f1 || f2) {
//                 x2+=1;
//             } else {
//                 x2+=3;
//             }
//         }

//         //for f2
//         f1 = true;
//         f2 = true;
//         int x3{};
//         for(int i{} ; i<n ; i++) {
//             auto it = find(f[1].begin(),f[1].end(),f[2].at(i));
//             if(it != f[1].end()) {
//                 f1 = true;
//             } else {
//                 f1 = false;
//             }
//             auto it1 = find(f[0].begin(),f[0].end(),f[2].at(i));
//             if(it1 != f[0].end()) {
//                 f2 = true;
//             } else {
//                 f2 = false;
//             }
//             if(f1 && f2) {
//                 x3+=0;
//             } else if(f1 || f2) {
//                 x3+=1;
//             } else {
//                 x3+=3;
//             }
//         }

//         cout<<x1<<" "<<x2<<" "<<x3<<"\n";
//     }
// }