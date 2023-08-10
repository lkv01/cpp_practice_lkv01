// #include <iostream>
// #include <map>
// #include <algorithm>
// using namespace std;
// #define ll long long
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         map<int,int> m;
//         while(n--) {
//             int x;
//             cin>>x;
//             m[x]++;
//         }
//         ll ans{};
//         auto it1 = m.begin();
//         auto it2 = m.end();
//         it2--;
//         int a = it1->first;
//         int b = it2->first;

//         if(m.size() == 1) cout<<"0\n";
//         else if(m.size() == 2) {
//             ans+=(b-a);
//             cout<<(2*ans)<<"\n";
//         }
//         else {
//             ll temp1{},temp2{};
//             temp1+=(b-a);
//             temp2+=(b-a);
//             it2--;
//             int c = it2->first;
//             temp1+=(c-a);
//             temp2+=(b-c);
//             if(temp1 < temp2) cout<<temp2<<"\n";
//             else cout<<temp1<<"\n";
//         }
//     }
// }