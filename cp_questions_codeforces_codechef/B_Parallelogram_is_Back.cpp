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

// #define Sort(v) sort(v.begin(),v.end())
// const ll mod = 1e9 + 7;

// void yesno(bool b) {if(b) cout << "Yes\n";else cout << "No\n";}
// void YESNO(bool b) {if(b) cout << "YES\n";else cout << "NO\n";}

// void fastio() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
// }

// int main() {
//     fastio();
//     float x1{},x2{},x3{},y1{},y2{},y3{},a,b,c,d,e,f;
//     cin>>a>>b>>c>>d>>e>>f;
//     float u1{(a+e)/2},v1{(b+f)/2};
//     float u2{(a+c)/2},v2{(b+d)/2};
//     float u3{(c+e)/2},v3{(d+f)/2};
//     x1 = 2*u1 - c;
//     x2 = 2*u2 - e;
//     x3 = 2*u3 - a;
//     y1 = 2*v1-d;
//     y2 = 2*v2-f;
//     y3 = 2*v3-b;
//     cout<<"3\n";
//     cout<<x1<<" "<<y1<<"\n";
//     cout<<x2<<" "<<y2<<"\n";
//     cout<<x3<<" "<<y3<<"\n";
// }