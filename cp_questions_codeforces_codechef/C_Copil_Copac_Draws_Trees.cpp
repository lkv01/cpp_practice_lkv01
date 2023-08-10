/*
        L               K      K     V           V
        L               K    K        V         V
        L               K  K           V       V
        L               KK              V     V
        L               K  K             V   V
        L               K    K            V V
        L L L L L L     K      K           V    
*/

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#define int int64_t
typedef long long ll;
#define vi vector<int>
#define mi map<int,int>
#define pii pair<int,int>
using namespace std;

/* ->priority_queue is by default a Max Heap
   ->to implement as a min heap use this:-

    priority_queue <int, vector<int>, greater<int> > pq;
*/


#define LowerBound(v,z) lower_bound(v.begin(),v.end(),z)
#define UpperBound(v,z) upper_bound(v.begin(),v.end(),z)
#define Sort(v) sort(v.begin(),v.end())
#define Reverse(v) reverse(v.begin(),v.end())
const int mod = 1e9 + 7;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    cout.tie(NULL); 
}

void print(vector<int> v) {
    for(auto elem:v) {
        cout<<elem<<" ";
    }
    cout<<"\n";
}

/*following will help in sorting vector<pii> wrt second element(ascending order)*/
bool sorta(const pii &a, const pii &b) { return (a.second < b.second); }

/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(int x, int y, int p) {
    int res = 1;              // Initialize result
    x = x % p;                // Update x if it is more than or equal to p
    if (x == 0) return 0;     // In case x is divisible by p;
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

/* Function to find modulo inverse of A in O(log M)).
  ->This approach uses Fermat's Little Theorem.
  ->used only when M is prime */
int modInverse(int A,int M) {
    return power(A,M-2,M);
}

/*    typecasting 
    65---char--->'A'              97---char--->'a'
    65<--int-----'A'              97<--int-----'a'
    48---char--->'0'
    48<--int-----'0'
*/

void swap(int &a,int &b) {
    a=a^b;
    b=b^a;
    a=a^b;
}

// //....algorithm....................
// vector<bool> is_prime(N+1,1);
// vector<int> hp(N+1,1);
// vector<int> lp(N+1,1);
// void lp_hp_sieve(int n) {
//     is_prime[1] = false;
//     for(int i{2} ; i<n ; i++) {
//         if(is_prime[i] == true) {
//             hp[i] = i;
//             lp[i] = i;
//             for(int j{2*i} ; j<n ; j+=i) {
//                 is_prime[j] = false;
//                 hp[j] = i;
//                 if(lp[j] == true) {
//                     lp[j] = i;
//                 }
//             }
//         }
//     }
// }
// //.................................

//check ques "modulo lena hai ya nhi" :)

// vector<int> weight(N);
vector<int> par,rnk,visited;
set<int> nodes;

void make_set(int n) {
	par.resize(n+1);
	rnk.resize(n+1);
    visited.resize(n+1);
	for(int i{1} ; i<=n ; i++) {
		par[i] = i;
		rnk[i] = 1;
        visited[i]=0;
	}
}
 
int find_set(int v) {
	if(par[v] == v) {return v;}
	return par[v] = find_set(par[v]);
}
 
// void union_set(int u, int v) {
// 	u = find_set(u);
// 	v = find_set(v);
// 	if(u != v) {
// 		if(rnk[u] < rnk[v]) {
// 			swap(u,v);
// 		}
// 		// t -= f(rnk[u]);
// 		// t -= f(rnk[v]);
// 		par[v] = u;
// 		rnk[u]+=rnk[v];
//         visited[u]=1;visited[v] = 1;
// 		// t += f(rnk[u]);
// 		// cout<<
// 	}
// }


int32_t main() {
    fastio();
    // lp_hp_sieve(int n);
    int t;
    cin>>t;
    while(t--) {

        nodes.clear();
        int n;cin>>n;
        make_set(n);
        // set<pii> s;
        // vector<pii> vec;

        set<pair<int,pair<int,int>>> vec;

        int m{n-1};
        int z{1};
        while(m--) {
            int u,v;cin>>u>>v;
            // s.insert({u,v});
            // vec.push_back({u,v});
            vec.insert({z,{u,v}});
            if(u==1 || v==1) {
                // s.erase({u,v});
                // nodes.insert(u);nodes.insert(v);
                // union_set(u,v);
                visited[u]=1;visited[v] = 1;
                // vec.pop_back();
                vec.erase({z,{u,v}});
            } else {
                if(visited[u] || visited[v]) {
                    // s.erase({u,v});
                    // nodes.insert(u);nodes.insert(v);
                    // union_set(u,v);
                    visited[u]=1;visited[v] = 1;
                    // vec.pop_back();
                    vec.erase({z,{u,v}});
                }
            }
            z++;
        }

        // s.insert({});
        int ans{1};

        // cout<<nodes.size()<<"\n";

        while(!vec.empty()) {
            // set<pair<int,pair<int,int>>> temp;

            for(auto p = vec.begin() ; p != vec.end() ; ) {
                int no = p->first;
                int u = p->second.first;int v = p->second.second;
                if((visited[u] || visited[v])) {
                    // union_set(u,v);
                    visited[u] = 1;visited[v]= 1;
                    // nodes.insert(u);nodes.insert(v);
                    // s.erase({u,v});
                    auto it = p;
                    p++;
                    vec.erase(it);
                    // vec.erase({no,{u,v}});
                    // temp.insert({no,{u,v}});
                    continue;
                }
                p++;
            }

            // for(auto p:vec) {
            //     int no = p.first;
            //     int u = p.second.first;int v = p.second.second;
            //     if((visited[u] || visited[v])) {
            //         union_set(u,v);
            //         nodes.insert(u);nodes.insert(v);
            //         // s.erase({u,v});
            //         // vec.erase({no,{u,v}});
            //         temp.insert({no,{u,v}});
            //     }
            // }
            // for(auto elem:temp) {
            //     vec.erase(elem);
            // }
            ans++;
        }

        cout<<ans<<"\n";
    }
}