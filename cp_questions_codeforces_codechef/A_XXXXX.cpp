// // // #include <iostream>
// // // #include <deque>
// // // #include <algorithm>
// // // typedef long long ll;
// // // using namespace std;
// // // int main() {
// // //     int t;
// // //     cin>>t;
// // //     while(t--) {
// // //         int n,x;
// // //         cin>>n>>x;
// // //         deque<int> d;
// // //         int sum{};
// // //         bool ok1 = true;
// // //         for(int i{} ; i<n ; i++) {
// // //             int z;cin>>z;
// // //             if((z%x) != 0) ok1 = false;
// // //             d.push_back(z);
// // //             sum+=z;
// // //         }
// // //         if(ok1 == true) {
// // //             cout<<"-1\n";
// // //         } else {
// // //             while((sum%x) == 0) {
// // //                 if((d.front()%x) != 0) {
// // //                     sum-=d.front();
// // //                     d.pop_front();
// // //                 } else if(d.back() != 0) {
// // //                     sum-=d.back();
// // //                     d.pop_back();
// // //                 } else {
// // //                     d.pop_back();
// // //                     d.pop_front();
// // //                     sum-=d.front();
// // //                     sum-=d.back();
// // //                 }
// // //             }
// // //             cout<<d.size()<<"\n";
// // //         }
// // //     }
// // // }

// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // typedef long long ll;
// // using namespace std;
// // int main() {
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int n,x;
// //         cin>>n>>x;
// //         vector<int> d;
// //         int sum{};
// //         bool ok1 = true;
// //         for(int i{} ; i<n ; i++) {
// //             int z;cin>>z;
// //             if((z%x) != 0) ok1 = false;
// //             d.push_back(z);
// //             sum+=z;
// //         }
// //         if(ok1 == true) {
// //             cout<<"-1\n";
// //         } else {
// //             int lo{0},hi{n-1};
// //             if((sum%x) != 0) {
// //                 cout<<n<<"\n";
// //                 continue;
// //             }
// //             while(lo<=hi) {
// //                 if((d[lo]%x) != 0) {
// //                     lo++;
// //                     cout<<(hi-lo+1)<<"\n";
// //                     break;
// //                 } else if((d[hi]%x) != 0) {
// //                     hi--;
// //                     cout<<(hi-lo+1)<<"\n";
// //                     break;
// //                 } else {
// //                     hi--;
// //                     lo++;
// //                 }
// //             }
// //             // while((sum%x) == 0) {
// //             //     if((d.front()%x) != 0) {
// //             //         sum-=d.front();
// //             //         d.pop_front();
// //             //     } else if(d.back() != 0) {
// //             //         sum-=d.back();
// //             //         d.pop_back();
// //             //     } else {
// //             //         d.pop_back();
// //             //         d.pop_front();
// //             //         sum-=d.front();
// //             //         sum-=d.back();
// //             //     }
// //             // }
// //             // cout<<d.size()<<"\n";
// //         }
// //     }
// // }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,x;
//         cin>>n>>x;
//         vector<int> d,nd;
//         int sum{};
//         bool ok1 = true;
//         for(int i{} ; i<n ; i++) {
//             int z;cin>>z;
//             if((z%x) != 0) {
//                 ok1 = false;
//                 nd.push_back(i);
//             }
//             d.push_back(z);
//             sum+=z;
//         }
//         if(ok1 == true) {
//             cout<<"-1\n";
//         } else {
//             if((sum%x) != 0) {
//                 cout<<n<<"\n";
//                 continue;
//             }
//             int w = min(1+nd.front(),n-nd.back());
//             cout<<n-w<<"\n";
//         }
//     }
// }

