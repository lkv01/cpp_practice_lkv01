// #include <iostream>
// #include <cmath>
// #include <algorithm>
// typedef long long ll;
// using namespace std;

// int countBits(ll n) {
//     return (int)log2(n)+1;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         unsigned long long n,x;cin>>n>>x;

//         if(n==x) {
//             cout<<n<<"\n";continue;
//         }

//         if(x==0) {
//             int i{60};
//             for( ; i>=0 ; i--) {
//                 if(((n>>i)&1LL)==1) break;
//             }
//             cout<<(1LL<<(i+1))<<"\n";
//             continue;
//         }
//         // int bits{countBits(n)};
        
//         bool flag = true;
//         int temp{};
//         for(int i{} ; i<60 ; i++) {
//             if((((n>>i)&1LL)==0) && (((x>>i)&1LL)==1)) {flag=false;break;}
//             else if((((n>>i)&1LL)==1) && (((x>>i)&1LL)==1)) {temp++;}
//             else if((((n>>i)&1LL)==1)&&(((x>>i)&1LL)==0)&&((x>>(i+1))&1LL)==1) {flag=false;break;}
//             else if((((n>>i)&1LL)==1) && (((x>>i)&1LL)==0) && (temp)) {flag=false;break;}
//         }
//         if(flag == false) {cout<<"-1\n";continue;}

//         int z{};
//         for(int i{} ; i<60 ; i++) {
//             if((((n>>i)&1LL)==1) && (((x>>i)&1LL)==0)) {n-=(1LL<<i);z=i;}
//             else if((((n>>i)&1LL)==1) && (((x>>i)&1LL)==1)) break;
//         }
//         n+=(1LL<<(z+1));
//         cout<<n<<"\n";
//     }
// }