// #include <iostream>
// #include <vector>
// #include <list>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     int n;
//     cin>>n;
//     int arr[n] = {};
//     for(int i{} ; i<n ; i++) {
//         cin>>arr[i];
//     }
//     int j{};
//     for(int i{n-1} ; i>=0 ; i--) {
//         if(arr[i] == 0) {
//             j = i;
//             break;
//         }
//     }
//     vector<int> v;
//     for(int i{j-1} ; i>=0 ; i--) {
//         if(arr[i] == 1) {
//             v.push_back(i);
//         }
//     }
//     int o{};
//     list<int> l;
//     for(int i{} ; i<n ; i++) {
//         l.push_back(arr[i]);
//     }
//     if(v.size() == 0) {
//         cout<<"0\n";
//     }
//     else {
//         // for(int i{j} ; i>=0 ; i--) {
//         //     if(arr[i] == 0) {
//         //         if(v.size() != 0) {
//         //             arr[i] = 1;
//         //             v.pop_back();
//         //             o++;
//         //         }
//         //     }
//         // }

//         for(auto it = l.end())
//     }
// }