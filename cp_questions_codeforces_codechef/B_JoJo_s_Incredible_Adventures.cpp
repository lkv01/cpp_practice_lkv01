// // Problem: B. JoJo's Incredible Adventures
// // Contest: Codeforces - Codeforces Round 866 (Div. 2)
// // URL: https://codeforces.com/contest/1820/problem/B
// // Memory Limit: 256 MB
// // Time Limit: 1000 ms
// // 
// // Powered by CP Editor (https://cpeditor.org)

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
// #include <queue>
// #include <algorithm>
// #include <cmath>
// #define int int64_t
// typedef long long ll;
// #define vi vector<int>
// #define mi map<int,int>
// #define pii pair<int,int>
// using namespace std;

// /* ->priority_queue is by default a Max Heap
//    ->to implement as a min heap use this:-

//     priority_queue <int, vector<int>, greater<int> > pq;
// */


// #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// #define Sort(v) sort(v.begin(),v.end())
// #define Reverse(v) reverse(v.begin(),v.end())
// const int mod = 1e9 + 7;

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

// /*following will help in sorting vector<pii> wrt second element(ascending order)*/
// bool sorta(const pii &a, const pii &b) { return (a.second < b.second); }

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

// //check ques "modulo lena hai ya nhi" :)

// int32_t main() {
//     fastio();
//     // lp_hp_sieve(int n);
//     int t;
//     cin>>t;
//     while(t--) {
//         // string s;
//         // cin>>s;
//         // int n = s.length();
//         // int cnt{};                    //0 or -1 !!
//         // if((s[0] == '1') && (s[n-1] == '1')) {
//         //     int z{};
//         //     int i{};
//         //     for( ; i<n ; i++) {
//         //         if(s[i]=='1') {z++;}
//         //         else {break;}
//         //     }
//         //     if(i==n) {
//         //         cout<<(n*n)<<"\n";continue;
//         //     }
//         //     for(int j{n-1} ; j>=0 ; j--) {
//         //         if(s[j]=='1') {z++;}
//         //         else {break;}
//         //     }
//         //     cnt = max(cnt,z);
//         //     if(i<n) {
//         //         for(int k{i} ; k<n ; k++) {
//         //         	if(s[k]=='0') {continue;}
//         //             if(s[k]=='1') {
//         //                 int z{};
//         //                 for(int j{k} ; j<n ; j++) {
//         //                     if(s[j]=='1') {z++;}
//         //                     else {k = j+1;break;}
//         //                 }
//         //                 cnt = max(cnt,z);
//         //             }
//         //         }
//         //     }
//         //     if(cnt == 1) {cout<<"0\n";continue;}
//         //     cnt--;
//         //     int x = cnt;int y = 2;
//         //     int z1 = (x+y)/2;
//         //     if((2*z1) == (x+y)) {
//         //         cout<<(z1*z1)<<"\n";
//         //     } else {
//         //         cout<<z1*(z1+1)<<"\n";
//         //     }
//         //     continue;
//         // }
//         // for(int i{} ; i<n ; i++) {
//         // 	if(s[i]=='0') {continue;}
//         //     if(s[i]=='1') {
//         //         int z{};
//         //         for(int j{i} ; j<n ; j++) {
//         //             if(s[j]=='1') {z++;}
//         //             else {i = j+1;break;}
//         //         }
//         //         cnt = max(cnt,z);
//         //     }
//         // }
//         // if(cnt == 1) {cout<<"1\n";continue;}
//         // cnt--;
//         // // cout<<cnt<<"----\n";
//         // int x = cnt;int y = 2;
//         // int z = (x+y)/2;
//         // if((2*z) == (x+y)) {
//         //     cout<<(z*z)<<"\n";
//         // } else {
//         //     cout<<z*(z+1)<<"\n";
//         // }

//         string s;
//         cin>>s;

//         ll n=s.size();
//         ll cnt=0;
//         for(int i=0;i<n;i++){
//            if(s[i]=='1') {cnt++;}
//         }

//         if(cnt==s.size())cout<<(n*n)<<"\n";

//         else {
//             ll cmt=0,p=0,i=0;cnt=0;
//             while(true){
//                 if(s[i%n]=='1')cnt++;
//                 else {
//                 cmt=max(cmt,cnt);
//                 cnt=0;
//                 }
//                 cmt=max(cmt,cnt);
//                 i++;p++;
//                 if(p>=n&&s[i%n]=='0')break;
//             }
//             cmt=max(cmt,cnt);
//             cout<<((cmt+1)*(cmt+1))/4<<"\n";
//             }


//         }
    
// }