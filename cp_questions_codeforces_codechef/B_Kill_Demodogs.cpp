// #include <iostream>
// #include <algorithm>
// typedef long long ll;
// const int N = 1e9+7;
// using namespace std;

// // int modularExponentiation(int x,int n,int M)
// // {
// //     int result=1;
// //     while(n>0)
// //     {
// //         if(power % 2 ==1)
// //             result=(result * x)%M;
// //         x=(x*x)%M;
// //         n=n/2;
// //     }
// //     return result;
// // }

// int modularExponentiation(int x,int n,int M)
// {
//     if(n==0)
//         return 1;
//     else if(n%2 == 0)        //n is even
//         return modularExponentiation((x*x)%M,n/2,M);
//     else                             //n is odd
//         return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

// }

// int modInverse(int A,int M)
// {
//     return modularExponentiation(A,M-2,M);
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         ll n;
//         cin>>n;
//         ll a = ((((n)%N * (n+1)%N)%N *((2*n)+1)%N)%N * 166666668%N)%N;
//         ll b = ((((n-1)%N *(n)%N)%N *((2*n)-1)%N)%N * 166666668%N)%N;
//         ll c = (((n-1)%N * (n)%N)%N * 500000004%N)%N;
//         ll d = ((a+b)%N+c)%N;
//         ll e = (d*2022)%N;
//         cout<<e<<"\n";
//     }
// }