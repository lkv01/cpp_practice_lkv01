// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// const int N = 2e5+1;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int arr1[N] = {};
//         int n;
//         cin>>n;
//         vector<int> arr(n);
//         for(int i{} ; i<n ; i++) {
//             cin>>arr[i];
//         }
//         vector<int> v;
//         for(int i{n-1} ; i>=0 ; i--) {
//             if(arr1[arr[i]] == 0) {
//                 v.push_back(arr[i]);
//                 arr1[arr[i]]++;
//             } else {
//                 break;
//             }
//         }
//         cout<<(n-v.size())<<"\n";
//     }
// }