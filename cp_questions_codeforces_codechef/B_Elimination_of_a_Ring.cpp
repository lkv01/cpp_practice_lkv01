// #include <iostream>
// #include <list>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         list<int> arr;
//         for(int i{} ; i<n ; i++) {
//             int x;
//             cin>>x;
//             arr.push_back(x);
//         }
//         int x{};
//         while(arr.size()!=0) {
//             if(arr.size()>=3) {
//                 auto it1 = arr.begin();
//                 it1++;
//                 auto it2 = arr.end();
//                 it2--;
//                 if(arr.front()==(*it2)) {
//                     arr.erase(it2);
//                     x++;
//                 } else if((*it1)==arr.back()) {
//                     arr.erase(it1);
//                     x++;
//                 } else if(arr.front()==arr.back()) {
//                     arr.pop_back();
//                 } else {
//                     arr.pop_back();
//                     x++;
//                 }
//             } else if(arr.size()==2) {
//                 if(arr.front()==arr.back()) {
//                     arr.pop_back();
//                 } else {
//                     arr.pop_back();
//                     x++;
//                 }
//             } else {
//                 arr.pop_back();
//                 x++;
//             }
//         }
//         cout<<x<<"\n";
//     }
// }