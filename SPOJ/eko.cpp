// #include <iostream>
// #include <vector>
// const int N = 1e9;
// using namespace std;
// int main() {
//     int n;
//     long long int k;
//     cin>>n>>k;
//     vector<int> trees(n);
//     int max{};
//     for(int i{} ; i<n ; i++) {
//         cin>>trees[i];
//         if(max<trees[i]) max = trees[i];
//     }
//     int ans{},lo{},hi{max},mid;
//     bool flag = true;
//     while(lo<=hi) {
//         mid = lo+(hi-lo)/2;
//         long long int x{};
//         for(int i{} ; i<n ; i++) {
//             if(trees[i]>mid) {
//                 x+=(trees[i]-mid);
//             }
//         }
//         if(x>k) {
//             lo=mid+1;
//             ans = mid;
//         } else if(x<k) {
//             hi = mid-1;
//         } else {
//             cout<<mid<<"\n";
//             flag = false;
//             break;
//         }
//     }
//     if(flag) {
//         cout<<ans<<"\n";
//     }
// }