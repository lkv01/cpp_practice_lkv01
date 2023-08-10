// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,k;
//         cin>>n>>k;
//         map<int,int> m;
//         int a[n] = {};
//         for(int i{} ; i<n ; i++) {
//             cin>>a[i];
//             m[a[i]]++;
//         }
//         int temp{},x{},y{},z{};
//         bool flag = true;
//         int yfinal{},zfinal{};
//         for(auto it = m.begin() ; it != m.end() ; it++) {
//             if(it == m.begin()) {
//                 if((it->second) >= k) {
//                     x++;
//                     y = (it->first);
//                     z = (it->first);
//                     flag = false;
//                 } else {
//                     x=0;
//                 }
//             }
//             if(it != m.begin()) {
//                 auto it1 = it;
//                 it1--;
//                 temp = (it1->first);
//                 if(((it->first) == (temp+1)) && ((it->second) >= k)) {
//                     x++;
//                     if(x==1) {
//                         y = (it->first);
//                         z = (it->first);
//                     } else if(x>1) {
//                         z = (it->first);
//                     }
//                     flag = false;
//                 } else {
//                     x=0;
//                     if((z-y)>=(zfinal-yfinal)) {
//                         zfinal = z;
//                         yfinal = y;
//                     }
//                     if((it->second) >= k) {
//                         x++;
//                         y = (it->first);
//                         z = (it->first);
//                         flag = false;
//                     }
//                 }
//             }
//         }
//         if(flag) {
//             cout<<"-1\n";
//         } else {
//             if((z-y)>=(zfinal-yfinal)) {
//                 zfinal = z;
//                 yfinal = y;
//             }
//             cout<<yfinal<<" "<<zfinal<<"\n";
//         }
//     }
// }