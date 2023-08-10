// // /*
// //         L               K      K     V           V
// //         L               K    K        V         V
// //         L               K  K           V       V
// //         L               KK              V     V
// //         L               K  K             V   V
// //         L               K    K            V V
// //         L L L L L L     K      K           V    
// // */

// // #include <iostream>
// // #include <string>
// // #include <vector>
// // #include <deque>
// // #include <list>
// // #include <set>
// // #include <map>
// // #include <stack>
// // #include <queue>
// // #include <algorithm>
// // #include <cmath>
// // #define int int64_t
// // typedef long long ll;
// // #define vi vector<int>
// // #define mi map<int,int>
// // #define pii pair<int,int>
// // using namespace std;

// // /* ->priority_queue is by default a Max Heap
// //    ->to implement as a min heap use this:-

// //     priority_queue <int, vector<int>, greater<int> > pq;
// // */


// // #define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
// // #define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
// // #define Sort(v) sort(v.begin(),v.end())
// // #define Reverse(v) reverse(v.begin(),v.end())
// // const int mod = 1e9 + 7;

// // void fastio() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);  
// //     cout.tie(NULL); 
// // }

// // void print(vector<int> v) {
// //     for(auto elem:v) {
// //         cout<<elem<<" ";
// //     }
// //     cout<<"\n";
// // }

// // /*following will help in sorting vector<pii> wrt second element(ascending order)*/
// // bool sorta(const pii &a, const pii &b) { return (a.second < b.second); }

// // /* Iterative Function to calculate (x^y)%p in O(log y) */
// // int power(int x, int y, int p) {
// //     int res = 1;              // Initialize result
// //     x = x % p;                // Update x if it is more than or equal to p
// //     if (x == 0) return 0;     // In case x is divisible by p;
// //     while (y > 0) {
// //         // If y is odd, multiply x with result
// //         if (y & 1)
// //             res = (res*x) % p;
 
// //         // y must be even now
// //         y = y>>1; // y = y/2
// //         x = (x*x) % p;
// //     }
// //     return res;
// // }

// // /* Function to find modulo inverse of A in O(log M)).
// //   ->This approach uses Fermat's Little Theorem.
// //   ->used only when M is prime */
// // int modInverse(int A,int M) {
// //     return power(A,M-2,M);
// // }

// // /*    typecasting 
// //     65---char--->'A'              97---char--->'a'
// //     65<--int-----'A'              97<--int-----'a'
// //     48---char--->'0'
// //     48<--int-----'0'
// // */

// // void swap(int &a,int &b) {
// //     a=a^b;
// //     b=b^a;
// //     a=a^b;
// // }

// // // //....algorithm....................
// // // vector<bool> is_prime(N+1,1);
// // // vector<int> hp(N+1,1);
// // // vector<int> lp(N+1,1);
// // // void lp_hp_sieve(int n) {
// // //     is_prime[1] = false;
// // //     for(int i{2} ; i<n ; i++) {
// // //         if(is_prime[i] == true) {
// // //             hp[i] = i;
// // //             lp[i] = i;
// // //             for(int j{2*i} ; j<n ; j+=i) {
// // //                 is_prime[j] = false;
// // //                 hp[j] = i;
// // //                 if(lp[j] == true) {
// // //                     lp[j] = i;
// // //                 }
// // //             }
// // //         }
// // //     }
// // // }
// // // //.................................

// // //check ques "modulo lena hai ya nhi" :)

// // int32_t main() {
// //     fastio();
// //     // lp_hp_sieve(int n);
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //         int n,k;
// //         cin>>n>>k;
// //         int x{},w{};

// //         bool ok = false;
// //         for( ; (x*x)<=(2*k + n) ; x++) {
// //             int z = ((2*k + n)-(x*x));
// //             int y = (int)sqrt(z);
// //             if(y*y == z) {ok = true;w = y;break;}
// //         }
// //         if(!ok) {
// //             cout<<"NO\n";
// //         } else {
// //             cout<<"YES\n";
// //             for(int i{1} ; i<=x ; i++) {
// //                 cout<<"1 ";
// //             }
// //             for(int i{1} ; i<=w ; i++) {
// //                 cout<<"-1 ";
// //             }
// //             cout<<"\n";
// //         }
// //     }
// // }

// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace std;
// #define int long long
// #define ld long double
// #define pb push_back
// #define vi vector <int> 
// #define vpi vector <pair<int,int>>
// #define vvi vector<vector<int>>
// #define mii map <int,int> 
// #define all(x) x.begin(),x.end()
// #define mem(a,x) memset(a,x,sizeof(a))
// #define endl '\n' 
// #define max3(a,b,c) max(a,max(b,c))
// #define min3(a,b,c) min(a,min(b,c))
// #define setbits(x) __builtin_popcountll(x)
// #define rep(i, a, b) for (int i = a; i < b; ++i)
// #define repb(i,a,b) for(int i=a-1;i>=b;--i)
// #define repn(i,a,b,n) for(int i=a;i<b;i+=n)
// #define take(a,n) for(int i=0;i<n;++i) cin>>a[i];
// #define printv(v) for(auto x:v) cout<<x<<" ";
// #define printa(a,n) for(int i=0;i<n;++i) cout<<a[i]<<" ";
// #define w(t) int t; cin>>t; while(t--)
// #define fastio                        \
// ios_base::sync_with_stdio(false);     \
// cin.tie(NULL);                        \
// cout.tie(NULL);
// // const int Mod=998244353; 
// const int Mod=1e9+7;

// int binaryexp(int a,int b){
// 	int ans=0;
// 	if(b<0)return 0;
// 	if(b==0)return 1;
// 	else if(b==1)return a;
// 	else if(b%2){
// 		ans=(a*(binaryexp((a*a)%Mod,b/2)%Mod))%Mod;
// 	}
// 	else ans=binaryexp((a*a)%Mod,b/2)%Mod;
// 	return ans%Mod;
// }

// int nCr(int n,int r)
// {
// 	if(n<r) return 0;
// 	if(r>n-r) r=n-r;
// 	int ans=1;
// 	rep(i,1,r+1)
// 	{
// 	   ans*=n-r+i;
// 	   ans/=i;
// 	}
// 	return ans;
// }

// int gcd(int a, int b)
// {
// return b == 0 ? a : gcd(b, a % b);
// }
//    // Read the question carefully,you might be missing something
//    // Always check if Modulo is required
//    //Try to write clear and small codes
// int32_t main()
// { 
//   fastio; 
//   w(t)
//   {
//   	int n,k;
//   	cin>>n>>k;
//   	bool flag=false;
//   	int ans;
//   	rep(i,0,n+1)
//   	{
//   		if(n*n-n-(2*i*(n-i))==2*k)
//   		{
//   			flag=true;
//   			ans=i;
//   			break;
//   		}
//   	}
//   	if(flag)
//   	{
//   		cout<<"YES"<<endl;
//   		rep(i,0,ans) cout<<1<<" ";
//   		rep(i,0,n-ans) cout<<-1<<" ";
//   		cout<<endl;
//   	}
//   	else cout<<"NO"<<endl;
//   }  
// }