// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// using namespace std;

// void fastIO() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }

// int main() {
//     fastIO();
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         vector<int> v(n);
//         vector<int> pos,neg,zero;
//         map<int,int> m;
//         for(int i{} ; i<n ; i++) {
//             cin>>v[i];
//             m[v[i]]++;
//             if(v[i]<0) {
//                 neg.push_back(v[i]);
//             } else if(v[i]>0) {
//                 pos.push_back(v[i]);
//             } else {
//                 zero.push_back(v[i]);
//             }
//         }
//         if((neg.size()>=3) || (pos.size()>=3)) {
//             cout<<"NO\n";
//             continue;
//         }
//         if(((pos.size()==2) && (neg.size()==0)) || ((neg.size()==2) && (pos.size()==0))) {
//             cout<<"NO\n";
//             continue;
//         }
//         if(((pos.size()==2) && (zero.size()>0)) || ((neg.size()==2) && (zero.size()>0))) {
//             cout<<"NO\n";
//             continue;
//         }
//         if((pos.size()==1) && (neg.size()==1)) {
//             if(pos[0]== ((-1)*neg[0])) {
//                 cout<<"YES\n";
//                 continue;
//             } else {
//                 cout<<"NO\n";
//                 continue;
//             }
//         }
//         sort(v.begin(),v.end());
//         bool ok1 = true;
//         for(int i{} ; i<n ; i++) {
//             bool ok2 = true;
//             for(int j{i+1} ; j<n ; j++) {
//                 bool ok3 = true;
//                 for(int k{j+1} ; k<n ; k++) {
//                     if(m[v[i]+v[j]+v[k]]==0) {
//                         ok3 = false;
//                         break;
//                     }
//                 }
//                 if(!ok3) {
//                     ok2 = false;
//                     break;
//                 }
//             }
//             if(!ok2) {
//                 ok1 = false;
//                 break;
//             }
//         }
//         if(!ok1) {
//             cout<<"NO\n";
//         } else {
//             cout<<"YES\n";
//         }
//     }
// }