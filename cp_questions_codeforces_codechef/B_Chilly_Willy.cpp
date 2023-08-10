// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     if(n==1 || n==2) {
//         cout<<"-1\n";
//     } else if(n==3) {
//         cout<<"210\n";
//     } else {
//         int z{1};
//         for(int i{} ; i<n-1 ; i++) {
//             z=((z%210) * (10))%210;
//         }
//         int app = 210-z;

//         int w = app;
//         int cnt{};
//         while(w>0) {
//             w/=10;
//             cnt++;
//         }

//         string s{"1"};
//         for(int i{} ; i<(n-cnt-1) ; i++) {
//             s.push_back('0');
//         }
//         string s1 = to_string(app);
//         cout<<(s+s1)<<"\n";
//     }
// }