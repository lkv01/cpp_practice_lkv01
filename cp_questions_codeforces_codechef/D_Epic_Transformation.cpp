// // #include <iostream>
// // #include <vector>
// // #include <map>
// // #include <algorithm>
// // typedef long long ll;
// // using namespace std;
// // int main() {
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int n;
// //         cin>>n;
// //         map<int,int> m;
// //         for(int i{} ; i<n ; i++) {
// //             int x;cin>>x;
// //             m[x]++;
// //         }
// //         vector<int> v;
// //         map<int,int> m2;
// //         for(auto it = m.begin() ; it != m.end() ; it++) {
// //             v.push_back(it->second);
// //             m2[(it->second)]++;
// //         }
// //         sort(v.begin(),v.end());
// //         while(v.size()>=2) {
// //             int x1 = v.back();
// //             v.pop_back();
// //             int x2 = v.back();
// //             v.pop_back();
// //             m2[x1]--;
// //             m2[x2]--;
// //             if((x1-x2) != 0) {
// //                 v.push_back(x1-x2);
// //                 m2[x1-x2]++;
// //             } else {
// //                 if(x1%2 == 0) {
// //                     while(m2[x2]>0) {
// //                         v.pop_back();
// //                         m2[x2]--;
// //                     }
// //                 }
// //             }
// //             if(v.size()==0) {
// //                 break;
// //             } else {
// //                 sort(v.begin(),v.end());
// //             }
// //         }
// //         if(v.size()==0) {
// //             cout<<"0\n";
// //         } else {
// //             cout<<v.back()<<"\n";
// //         }
// //     }
// // }


// // #include <iostream>
// // #include <vector>
// // #include <map>
// // #include <algorithm>
// // typedef long long ll;
// // using namespace std;
// // int main() {
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int n;
// //         cin>>n;
// //         map<int,int> m;
// //         for(int i{} ; i<n ; i++) {
// //             int x;cin>>x;
// //             m[x]++;
// //         }
// //         vector<int> v;
// //         map<int,int> m2;
// //         for(auto it = m.begin() ; it != m.end() ; it++) {
// //             m2[(it->second)]++;
// //         }

// //         for(auto it = m2.begin() ; it != m2.end() ; it++) {
// //             if(((it->first)%2 == 0) && (m2[(it->first)] > 1)) {
// //                 continue;
// //             }
// //             int temp = (it->second);
// //             while(temp--) {
// //                 v.push_back(it->first);
// //             }
// //         }
// //         sort(v.begin(),v.end());
// //         while(v.size()>=2) {
// //             int x1 = v.back();
// //             v.pop_back();
// //             int x2 = v.back();
// //             v.pop_back();
// //             if((x1-x2) != 0) {
// //                 v.push_back(x1-x2);
// //             }
// //             if(v.size()==0) {
// //                 break;
// //             } else {
// //                 sort(v.begin(),v.end());
// //             }
// //         }
// //         if(v.size()==0) {
// //             cout<<"0\n";
// //         } else {
// //             cout<<v.back()<<"\n";
// //         }
// //     }
// // }


// /*
//         L               K      K     V           V
//         L               K    K        V         V
//         L               K  K           V       V
//         L               KK              V     V
//         L               K  K             V   V
//         L               K    K            V V
//         L L L L L L     K      K           V    
// */

// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <list>
// #include <set>
// #include <map>
// #include <stack>
// #include <algorithm>
// #include <cmath>
// // #define int int64_t
// typedef long long ll;
// #define vi vector<int>
// #define mi map<int,int>
// using namespace std;

// #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// #define Sort(v) sort(v.begin(),v.end())
// #define Reverse(v) reverse(v.begin(),v.end())
// const ll mod = 1e9 + 7;

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// void print(vector<int> v) {
//     for(auto elem:v) {
//         cout<<elem<<" ";
//     }
//     cout<<"\n";
// }

// /* Iterative Function to calculate (x^y)%p in O(log y) */
// int power(int x, int y, int p) {
//     int res = 1;              // Initialize result
//     x = x % p;                // Update x if it is more than or equal to p
//     if (x == 0) return 0;     // In case x is divisible by p;
//     while (y > 0) {
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res*x) % p;
 
//         // y must be even now
//         y = y>>1; // y = y/2
//         x = (x*x) % p;
//     }
//     return res;
// }

// /* Function to find modulo inverse of A in O(log M)).
//   ->This approach uses Fermat's Little Theorem.
//   ->used only when M is prime */
// int modInverse(int A,int M) {
//     return power(A,M-2,M);
// }

// /*    typecasting 
//     65---char--->'A'              97---char--->'a'
//     65<--int-----'A'              97<--int-----'a'
//     48---char--->'0'
//     48<--int-----'0'
// */

// void swap(int &a,int &b) {
//     a=a^b;
//     b=b^a;
//     a=a^b;
// }

// // //....algorithm....................
// // vector<bool> is_prime(N+1,1);
// // vector<int> hp(N+1,1);
// // vector<int> lp(N+1,1);
// // void lp_hp_sieve(int n) {
// //     is_prime[1] = false;
// //     for(int i{2} ; i<n ; i++) {
// //         if(is_prime[i] == true) {
// //             hp[i] = i;
// //             lp[i] = i;
// //             for(int j{2*i} ; j<n ; j+=i) {
// //                 is_prime[j] = false;
// //                 hp[j] = i;
// //                 if(lp[j] == true) {
// //                     lp[j] = i;
// //                 }
// //             }
// //         }
// //     }
// // }
// // //.................................

// int32_t main() {
//     fastio();
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         vi v(n);
//         mi m;
//         for(int i{} ; i<n ; i++) {cin>>v[i];m[v[i]]++;}

//         int cnt{};
//         deque<int> vec;
//         for(auto it:m) {vec.push_back(it.second);}
//         sort(vec.begin(),vec.end());
//         // for(auto elem:vec) {
//         //     cout<<elem<<" ";
//         // }
//         // cout<<"\n";

//         while(vec.size() > 1) {
//             while((vec.front() == 1) && (vec.size() > 0)) {vec.pop_front();cnt++;}
//             if(vec.size() > 1) {
//                 int z = vec.front();
//                 if(z%2 != 0) {z--;}
//                 for(int i{} ; i<(int)vec.size() ; i++) {vec[i]-=z;}
//                 while((vec.front() == 0) && (vec.size() > 0)) {vec.pop_front();}
//             }
//         }
//         // cout<<"lkv\n";
//         if(!vec.empty()) {
//             int z = vec.front();
//             if(cnt>=z) {
//                 cnt-=z;
//                 if(cnt%2 != 0) {cout<<"1\n";}
//                 else {cout<<"0\n";}
//             } else {
//                 z-=cnt;
//                 cout<<z<<"\n";
//             }
//         }
//         else {
//             if(cnt%2 != 0) {cout<<"1\n";}
//             else {cout<<"0\n";}
//         }
//     }
// }