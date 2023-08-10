// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int m,s;
//         cin>>m>>s;
//         int msum{};
//         while(m--) {
//             int x;
//             cin>>x;
//             msum+=x;
//         }
//         int y = (msum+s);
//         y*=2;
//         bool flag = true;
//         for(int i{1} ; (i*i)<=y ; i++) {
//             if((i*(i+1)) == y) {
//                 cout<<"yes\n";
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag == true) {
//             cout<<"no\n";
//         }
//     }
// }