// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// vector<int> v;

// void loop() {
//     for(size_t i{} ; i<v.size() ; i++) {
//         for(size_t j{i+1} ; j<v.size() ; j++) {            
//             for(size_t k{j+1} ; k<v.size() ; k++) {
//                 if(((v[i]+v[j]+v[k]) % 10) == 3) {
//                     cout<<"YES\n";
//                     return;
//                 }
//             }
//         }        
//     }
//     cout<<"NO\n";
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
        
//         map<int,int> m;
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;
//             int z = x%10;
//             if(m[z]<3) {
//                 v.push_back(z);
//                 m[z]++;
//             }
//         }
//         loop();
//         v.clear();
//     }
// }