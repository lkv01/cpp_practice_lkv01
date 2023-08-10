// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // using namespace std;

// // // bool si(vector<int> v) {
// // //     for(size_t i{1} ; i<v.size() ; i++) {
// // //         if(v[i]<=v[i-1]) {
// // //             return true;
// // //         }
// // //     }
// // //     return false;
// // // }

// // int main() {
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int k,n;
// //         cin>>k>>n;
// //         vector<int> v;
// //         v.push_back(1);
// //         int diff{1};
// //         for(int i{1} ; i<k ; i++) {
// //             if(diff<=(n-v.back())) {
// //                 int z = v.back()+diff;
// //                 v.push_back(z);
// //                 diff++;
// //             } else {
// //                 if(v.back()==n) {
// //                     v.back()-=1;
// //                     v.push_back(v.back()+1);
// //                 } else {
// //                     v.push_back(v.back()+1);
// //                 }
// //             }
// //         }

// //         // while(si(v)) {
// //         //     int diff1{1};
// //         //     for(int i{1} ; i<(k-1) ; i++) {
// //         //         diff1 = (v[i]-v[i-1]);
// //         //         if(v[i]==v[i+1]) {
// //         //             v[i]-=(diff1-1);
// //         //         }
// //         //     }
// //         // }

// //         // int diff1{1};
// //         // for(int i{1} ; i<(k-1) ; i++) {
// //         //     diff1 = (v[i]-v[i-1]);
// //         //     if(v[i]==v[i+1]) {
// //         //         v[i]-=(diff1-1);
// //         //     }
// //         // }

// //         int x1{1}
// //         for(int i{} ; i<n ; i++) {
// //             if(v[i]==v[i+1]) {
// //                 v[i]-=x;
// //                 x++;
// //             }
// //         }

// //         for(auto elem:v) {
// //             cout<<elem<<" ";
// //         }
// //         cout<<"\n";
// //     }
// // }


// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int k,n;
//         cin>>k>>n;
//         vector<int> v;
//         int j{};
//         map<int,int> m;
//         for(int i{1} ; i<=n ; ) {
//             v.push_back(i);
//             m[i]++;
//             j++;
//             i+=j;
//         }
//         if((int)v.size()>=k) {
//             for(int i{} ; i<k ; i++) {
//                 cout<<v[i]<<" ";
//             }
//             cout<<"\n";
//         } else {
//             int x = k-v.size();
//             for(int i{n} ; i>0 ; i--) {
//                 if((x>0)&&(m[i]==0)) {
//                     x--;
//                     v.push_back(i);
//                     m[i]++;
//                 }
//             }
//             sort(v.begin(),v.end());
//             for(auto elem:v) {
//                 cout<<elem<<" ";
//             }
//             cout<<"\n";
//         }
//     }
// }