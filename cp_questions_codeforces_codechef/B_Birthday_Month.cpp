// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     vector<string> vec{"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
//     string s;
//     cin>>s;
//     int k;
//     cin>>k;
//     auto it = find(vec.begin(),vec.end(),s);
//     while(k--) {
//         if(it != vec.end()) {
//             it++;
//             if(it == vec.end()) it = vec.begin();
//         }
//     }
//     cout<<(*it)<<"\n";
//     // int index = it-vec.begin()+1;
//     // cout<<index<<"\n";
// }