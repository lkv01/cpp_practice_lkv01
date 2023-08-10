// #include <iostream>
// #include <string>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int x{},y{};
//     string s,m;
//     cin>>s>>m;
//     string s1,m1;
//     s1 = s;
//     m1 = m;
//     sort(s1.begin(),s1.end());
//     sort(m1.begin(),m1.end());
    
//     char c = s1.front();
//     auto its = s1.begin();
//     auto itm = upper_bound(m1.begin(),m1.end(),c);
//     while(itm != m1.end()) {
//         if((*its)<(*itm)) {
//             y++;
//             its++;
//             itm++;
//         } else {
//             itm++;
//         }
//     }
    
//     int i1{},i2{};
//     string ss1{},mm1{};
//     while((i1!=n) && (i2!=n)) {
//         if(s1[i1] == m1[i2]) {
//             i1++;
//             i2++;
//         } else if(s1[i1] < m1[i2]) {
//             ss1.push_back(s1[i1]);
//             i1++;
//         } else {
//             mm1.push_back(m1[i2]);
//             i2++;
//         }
//     }
    
//     for(int i{i1} ; i<n ; i++) {
//         ss1.push_back(s1[i]);
//     }
//     for(int i{i2} ; i<n ; i++) {
//         mm1.push_back(m1[i]);
//     }

//     char c1 = ss1.front();
//     auto itss = ss1.begin();
//     auto itmm = upper_bound(mm1.begin(),mm1.end(),c1);
//     while(itmm != mm1.end()) {
//         if((*itss)<(*itmm)) {
//             x++;
//             itss++;
//             itmm++;
//         } else {
//             itmm++;
//         }
//     }
//     x = (ss1.length()-x);
//     cout<<x<<"\n"<<y<<"\n";
// }