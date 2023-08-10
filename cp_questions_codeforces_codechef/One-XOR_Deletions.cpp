// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// using namespace std;
// const int N = 3e5+10;
// int min(int a,int b) {
//     if(a<b) return a;
//     else return b;
// }
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
// 	    int n;
// 	    cin>>n;
//         int w = n;
// 	    map<int,int> m;
// 	    while(n--) {
// 	        int x;
// 	        cin>>x;
// 	        m[x]++;
// 	    }
//         if(m.size()==1) {
//             cout<<"0\n";
//         }
//         else if(m.size()==2) {
//             auto it1 = m.begin();
//             auto it2 = it1;
//             it2++;
//             if(((it1->first)^(it2->first))==1) cout<<"0\n";
//             else {
//                 cout<<min((it1->second),(it2->second))<<"\n";
//             }
//         }
//         else {
//             vector<int> vec;
//             for(auto it = m.begin() ; it != m.end() ; it++) {
//                 auto it2 = it;
//                 it2++;
//                 if(it2 == m.end()) {
//                     vec.push_back(it->second);
//                     break;
//                 }
//                 if(((it->first)^(it2->first))==1) {
//                     vec.push_back((it->second)+(it2->second));
//                     it++;
//                 }
//                 else {
//                     vec.push_back(it->second);
//                 }
//             }
//             sort(vec.begin(),vec.end());
//             int x = vec[vec.size()-1];
//             cout<<(w-x)<<"\n";
//         }
//     }
//     return 0;
// }