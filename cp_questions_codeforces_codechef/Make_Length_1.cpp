// #include <iostream>
// #include <string>
// #include <list>
// #include <algorithm>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
// 	    cin>>n;
// 	    int w = n-1;
// 	    string s;
//         cin>>s;
//         list<int> l;
//         for(int i{} ; i<n ; i++) {
//             l.push_back(s[i]);
//         }
//         while(w--) {
//             bool flag = true;
//             for(auto it = l.begin() ; it != l.end() ; it++) {
//                 auto it2 = it;
//                 it2++;
//                 if(it2 != l.end()) {
//                     if((*it)==(*it2)) {
//                         (*it)=0;
//                         l.erase(it2);
//                         flag = false;
//                         break;
//                     }
//                 }
            
//             }
//             if(flag==true) {
//                 break;
//             }
//         }
//         if((w==0)&&(l.size()==1)) {
//             cout<<"yes\n";
//         }
//         else {
//             cout<<"no\n";
//         }
//     }
//     return 0;
// }