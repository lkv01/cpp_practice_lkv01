// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         int arr[n] = {};
//         int first0{};
//         int last1{};
//         bool flag = true;
//         for(int i{} ; i<n ; i++) {
//             cin>>arr[i];
//             if(arr[i]==1) {
//                 last1=i;
//             }
//             if((flag == true) && (arr[i]==0)) {
//                 first0=i;
//                 flag = false;
//             }
//         }

//         //initial inversions-------------
//         long long int initial_inversions{},x{};
//         for(int i{n-1} ; i>=0 ; i--) {
//             if(arr[i]==0) {
//                 x++;
//             } else {
//                 initial_inversions+=x;
//             }
//         }
//         //-------------------------------

//         int x1{},y1{},z1{};
//         for(int i{} ; i<first0 ; i++) {
//             if(arr[i]==1) x1++;
//         }
//         for(int i{first0 + 1} ; i<n ; i++) {
//             if(arr[i]==0) y1++;
//         }
//         z1=y1-x1;

//         int x2{},y2{},z2{};
//         for(int i{} ; i<last1 ; i++) {
//             if(arr[i]==1) x2++;
//         }
//         for(int i{last1 + 1} ; i<n ; i++) {
//             if(arr[i]==0) y2++;
//         }
//         z2=x2-y2;

//         if((z1>0)&&(z2>0)) {
//             (z1>z2)?(cout<< (initial_inversions+z1) <<"\n"):(cout<< (initial_inversions+z2) <<"\n");
//         } else if(z1>0) {
//             cout<< (initial_inversions+z1) <<"\n";
//         } else if(z2>0) {
//             cout<< (initial_inversions+z2) <<"\n";
//         } else {
//             cout<< initial_inversions <<"\n";
//         }
//     }
// }