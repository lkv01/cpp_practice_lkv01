// #include <iostream>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n,s;
//     cin>>n>>s;
//     map<int,int> B,S;
//     for(int i{} ; i<n ; i++) {
//         char c;
//         int x,y;
//         cin>>c>>x>>y;
//         if(c=='B') {
//             B[x]+=y;
//         } else {
//             S[x]+=y;
//         }
//     }


//     if(S.size()>=s) {
//         int temp{};
//         auto it = S.begin();
//         for(int i{} ; i<s ; i++) {it++;}
//         for(it; it != S.begin() ; it--) {
//             auto it1 = it;it1--;
//             cout<<"S "<<(it1->first)<<" "<<(it1->second)<<"\n";
//             temp++;
//             if(temp==s) break;
//         }
//     } else {
//         for(auto it = S.end() ; it != S.begin() ; it--) {
//             auto it1 = it;it1--;
//             cout<<"S "<<(it1->first)<<" "<<(it1->second)<<"\n";
//         }
//     }


//     if(B.size()>=s) {
//         int temp{};
//         for(auto it = B.end() ; it != B.begin() ; it--) {
//             auto it1 = it;it1--;
//             cout<<"B "<<(it1->first)<<" "<<(it1->second)<<"\n";
//             temp++;
//             if(temp==s) break;
//         }
//     } else {
//         for(auto it = B.end() ; it != B.begin() ; it--) {
//             auto it1 = it;it1--;
//             cout<<"B "<<(it1->first)<<" "<<(it1->second)<<"\n";
//         }
//     }
// }