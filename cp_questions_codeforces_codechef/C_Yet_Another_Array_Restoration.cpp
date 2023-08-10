// #include <iostream>
// #include <deque>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,x,y;
//         cin>>n>>x>>y;
//         if(n==2) {
//             cout<<x<<" "<<y<<"\n";
//             continue;
//         }
//         int m = n-2;

//         if((y-x)%(m+1) == 0) {
//             int k = (y-x)/(m+1);
//             deque<int> d;
//             d.push_back(x);
//             for(int i{1} ; i<=m ; i++) {
//                 d.push_back(d.back()+(k));
//             }
//             d.push_back(y);
//             for(auto elem:d) {
//                 cout<<elem<<" ";
//             }
//             cout<<"\n";
//             continue;
//         }
        
//         while((y-x)%(m+1) != 0) {
//             m--;
//         }
//         deque<int> d1;
//         int k1 = (y-x)/(m+1);
//         d1.push_back(x);
//         for(int i{1} ; i<=m ; i++) {
//             d1.push_back(d1.back()+(k1));
//         }
//         d1.push_back(y);
//         int z = n-m-2;
//         while((d1.front() > k1) && (z>0)) {
//             d1.push_front(d1.front()-k1);
//             z--;
//         }
//         while(z>0) {
//             d1.push_back(d1.back()+k1);
//             z--;
//         }
//         for(auto elem:d1) {
//             cout<<elem<<" ";
//         }
//         cout<<"\n";
//     }
// }