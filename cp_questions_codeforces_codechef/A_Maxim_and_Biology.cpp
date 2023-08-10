// /*
//         L               K      K     V           V
//         L               K    K        V         V
//         L               K  K           V       V
//         L               KK              V     V
//         L               K  K             V   V
//         L               K    K            V V
//         L L L L L L     K      K           V    
// */

// #include <iostream>
// #include <string>
// #include <vector>
// #include <deque>
// #include <list>
// #include <set>
// #include <map>
// #include <stack>
// #include <algorithm>
// typedef long long ll;
// using namespace std;

// #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// #define Sort(v) sort(v.begin(),v.end())
// #define Reverse(v) reverse(v.begin(),v.end())
// const ll mod = 1e9 + 7;

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// int main() {
//     fastio();
//     int n;cin>>n;
//     string s;cin>>s;
//     int min1{(int)1e9};
//     for(int j{} ; j<=(n-4) ; j++) {
//         int cnt{};
//         cnt+=min(abs(s[j]-'A'),min(abs(s[j]-'A'+1+'Z'-'A'),('Z'-s[j]+1)));
//         cnt+=min(abs(s[j+1]-'C'),min(abs(s[j]-'A'+1+'Z'-'C'),('Z'-s[j+1]+3)));
//         cnt+=min(abs(s[j+2]-'T'),min(abs(s[j]-'A'+1+'Z'-'t'),('Z'-s[j+2]+20)));
//         cnt+=min(abs(s[j+3]-'G'),min(abs(s[j]-'A'+1+'Z'-'G'),('Z'-s[j+3]+7)));
//         min1 = min(min1,cnt);
//     }
//     cout<<min1<<"\n";
// }