// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int binarySearch(vector<int> vec,int lo,int hi,int x) {
//     int ans{-1};
//     while(lo<=hi) {
//         int mid = lo+(hi-lo)/2;
//         if(x <= vec[mid]) {
//             ans = mid;
//             hi = mid-1;
//         }
//         else {
//             lo = mid+1;
//         }
//     }
//     if(ans==-1) return vec.size();
//     return ans;
// }

// int main() {
//     int n,k;
//     cin>>n>>k;
//     vector<int> vec(n);
//     for(int i{} ; i<n ; i++) {
//         cin>>vec[i];
//     }
//     while(k--) {
//         int x;
//         cin>>x;
//         int index = binarySearch(vec,0,n-1,x) + 1;
//         cout<<index<<"\n";
//     }
// }