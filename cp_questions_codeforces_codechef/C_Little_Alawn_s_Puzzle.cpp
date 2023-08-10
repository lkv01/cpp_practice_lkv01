// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// const int M = 1e9+7;

// /* Iterative Function to calculate (x^y)%p in O(log y) */
// int power(long long x, unsigned int y, int p)
// {
//     int res = 1;     // Initialize result
 
//     x = x % p; // Update x if it is more than or
//                 // equal to p
  
//     if (x == 0) return 0; // In case x is divisible by p;
 
//     while (y > 0)
//     {
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res*x) % p;
 
//         // y must be even now
//         y = y>>1; // y = y/2
//         x = (x*x) % p;
//     }
//     return res;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         int a[n+1] = {};
//         int b[n+1] = {};
//         map<int,int> m;

//         for(int i{1} ; i<=n ; i++) {
//             cin>>a[i];
//         }
//         for(int i{1} ; i<=n ; i++) {
//             cin>>b[i];
//             m[b[i]]=i;
//         }

//         map<int,int> m2;

//         int cnt{};
//         for(int i{1} ; i<=n ; i++) {
//             int x = a[i];
//             int xx= x;
//             m2[b[i]]++;
//             if(m2[x]==0) {
//                 while(m2[xx]==0) {
//                     i = m[x];
//                     m2[x]++;
//                     x = a[i];
//                 }
//                 cnt++;
//             }
//         }
//         cout<<power(2,cnt,M)<<"\n";
//     }
// }