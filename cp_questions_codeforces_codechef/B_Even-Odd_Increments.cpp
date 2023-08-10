// #include <iostream>
// using namespace std;
// const int N = 1e5+10;
// int arr[N];
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,q;
//         long long int sum{};

//         cin>>n>>q;
//         int odd{},even{};
//         for(int i{} ; i<n ; i++) {
//             cin>>arr[i];
//             sum+=arr[i];
//             if((arr[i]&1) != 0) {
//                 odd++;
//             }
//         }
//         even = n-odd;

//         while(q--) {
//             int a,b;
//             cin>>a>>b;
//             if(a==0) {
//                 sum+=(even*b);
//                 if((b&1)!=0) {
//                     odd=n;
//                     even=0;
//                 }
//             } else {
//                 sum+=(odd*b);
//                 if((b&1)!=0) {
//                     odd=0;
//                     even=n;
//                 }
//             }
//             cout<<sum<<"\n";
//         }
//     }
// }