// #include <iostream>
// #include <string>
// #include <vector>
// typedef long long ll;

// void swap(int &a,int &b) {
//     a = a^b;
//     b = b^a;
//     a = a^b;
// }

// using namespace std;

// bool beauty(int arr[2][2]) {
//     if(arr[0][0] > arr[0][1]) {
//         return false;
//     }
//     if(arr[1][0] > arr[1][1]) {
//         return false;
//     }
//     if(arr[0][0] > arr[1][0]) {
//         return false;
//     }
//     if(arr[0][1] > arr[1][1]) {
//         return false;
//     }
//     return true;
// }



// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int arr[2][2];
//         cin>>arr[0][0]>>arr[0][1];
//         cin>>arr[1][0]>>arr[1][1];
//         int n = 4;
//         bool flag = true;
//         while(n--) {
//             if(beauty(arr)) {
//                 flag = false;
//                 break;
//             } else {
//                 swap(arr[0][0],arr[0][1]);
//                 swap(arr[0][1],arr[1][1]);
//                 swap(arr[1][0],arr[1][1]);
//             }
//         }
//         if(flag == false) {
//             cout<<"YES\n";
//         } else {
//             cout<<"NO\n";
//         }
//     }
// }