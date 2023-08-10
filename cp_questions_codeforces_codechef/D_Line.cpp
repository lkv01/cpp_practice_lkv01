// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         long long int initial_value{},left{},right{};
//         for(int i{} ; i<n ; i++) {
//             if(s[i]=='R') {
//                 right = n-i-1;
//                 initial_value+=(right);
//             } else {
//                 left = i;
//                 initial_value+=left;
//             }
//         }
//         for(int k{1} ; k<=n ; k++) {
//             long long int w{1},temp{},y{k};
//             long long int i{},j{n-1};
//             while(i!=j) {
//                 if(w%2 != 0) {
//                     if(s[i]=='L') {
//                         temp+= ((n-(i+1LL)) - i );
//                         i++;
//                         w++;
//                         y--;
//                         if(y==0) break;
//                     }
//                 } else {
//                     if(s[j]=='R') {
//                         temp+=(j - (n-(j+1LL)));
//                         j--;
//                         w++;
//                         y--;
//                         if(y==0) break;
//                     }
//                 }
//             }
//             cout<<(initial_value+temp)<<" ";
//         }
//         cout<<"\n";
//     }
// }