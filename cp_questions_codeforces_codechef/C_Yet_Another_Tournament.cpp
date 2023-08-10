// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// typedef long long ll;
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n,m;cin>>n>>m;
//         vector<int> v;
//         map<int,int> mp;
//         for(int i{} ; i<n ; i++) {
//             int x;cin>>x;
//             v.push_back(x);
//             mp[x]++;
//         }
//         sort(v.begin(),v.end());
//         int temp{},z{};
//         for(int i{} ; i<n ; i++) {
//             if((temp+v[i])<=m) {
//                 temp+=v[i];
//                 z++;
//             }
//             else break;
//         }
        
//         vector<pair<int,int>> vec(n);
//         vec[0].first = v[0];
//         vec[0].second = 0;
//         for(int i{1} ; i<n ; i++) {
//             vec[i].first = v[i];
//             if(v[i]==v[i-1]) vec[i].second = vec[i-1].second;
//             else vec[i].second = i;
//         }

//         int temp1{(int)1e9};
        
//         auto itv = find(v.begin(),v.end(),m);

//         if((itv != v.end()) && (m!=0)) {
//             vector<pair<int,int>> vec1(n);
//             vec1[0].first = v[0];
//             vec1[0].second = 0;
//             for(int i{1} ; i<n ; i++) {
//                 vec1[i].first = v[i];
//                 if(v[i]==v[i-1]) vec1[i].second = vec1[i-1].second;
//                 else vec1[i].second = i;
//             }

//             for(int i{} ; i<n ; i++) {
//                 if(vec1[i].first != m) vec1[i].second++;
//             }

//             //mapping (no of win->no of players)
//             map<int,int,greater<int>> mp3;
//             for(int i{} ; i<n ; i++) {
//                 mp3[vec1[i].second]++;
//             }
//             mp3[1]++;

//             int ans{};
//             auto it1 = mp3.find(z);
//             for(auto it = mp3.begin() ; it != it1 ; it++) {
//                 ans+=(it->second);
//             }
//             ans++;
//             temp1 = min(temp1,ans);            

//         }

//         for(int i{z} ; i<n ; i++) {
//             vec[i].second++;
//         }

//         //mapping (no of win->no of players)
//         map<int,int,greater<int>> mp2;
//         for(int i{} ; i<n ; i++) {
//             mp2[vec[i].second]++;
//         }
//         mp2[z]++;


//         int ans{};
//         auto it1 = mp2.find(z);
//         for(auto it = mp2.begin() ; it != it1 ; it++) {
//             ans+=(it->second);
//         }
//         ans++;
//         temp1 = min(temp1,ans);
//         cout<<temp1<<"\n";
//     }
// }