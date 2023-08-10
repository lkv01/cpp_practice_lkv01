// #include<bits/stdc++.h>
// using namespace std;

// const int maxn = 3005;
// bool vis[maxn];
// int to[maxn];

// void dfs(int x){
// 	vis[x] = true;
// 	if(!vis[to[x]])
// 		dfs(to[x]);
// }

// int main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	int n;
// 	cin >> n;
// 	for(int i=1;i<=n;i++)
// 		cin >> to[i];
// 	int m, cyc = 0;
// 	cin >> m;
// 	m = n - m;
// 	for(int i=1;i<=n;i++)
// 		if(!vis[i]) {
// 			dfs(i);
// 			cyc++;
// 		}
// 	cout << abs(cyc - m) << endl;
// 	if(cyc > m) {

// 		memset(vis,0,sizeof vis);
// 		dfs(1);
// 		for(int i=1,j=0;j<cyc-m;i++)
// 			if(!vis[i]){
// 				cout << 1 << ' ' << i << ' ';
// 				dfs(i);
// 				j++;
// 			}
// 		cout << endl;
// 	}
// 	else if(cyc < m) {
// 		int k = m - cyc;
// 		while(k--){
// 			for(int i=1;i<=n;i++)
// 				if(i != to[i]){
// 					int j = maxn, x = i;
// 					while(to[x] != i){
// 						x = to[x];
// 						j = min(x, j);
// 					}
// 					cout << i << ' ' << j << ' ';
// 					swap(to[i], to[j]);
// 					break;
// 				}
// 		}
// 	}
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e3+6;
const int mod = 1e9+7;
int b[N],n,m,ans;
int vis[N],sz[N],tot;

void rebuild(){
    memset(vis,0,sizeof vis);
    tot = 0;
    for(int i = 1;i <= n;i++){
         if(!vis[i]) vis[i] = i;
         else continue;
         ++tot;
         int u = b[i];sz[i] = 1;
         while(u != i){
             sz[i]++;
             vis[u] = i;
             u = b[u];
         }
    }
}

int main(){
    scanf("%d",&n);
    for(int i= 1;i <= n;i++) scanf("%d",b+i);
    for(int i{1} ; i<=n ; i++) {cout<<b[i]<<" ";}cout<<"\n";
    scanf("%d",&m);
    rebuild();
    printf("%d\n",abs(m - n + tot));
    if(n - tot > m){    //要增大环的数量tot，即破坏现有环
        while(n - tot > m){
            for(int i = 1;i <= n;i++){
                if(sz[vis[i]] <= 1) continue;
                for(int j = i + 1;j <= n;j++){
                    if(vis[j] == vis[i]){
                        swap(b[i],b[j]);
                        printf("%d %d ",i,j);
                        break;
                    }
                }
                break;
            }
            rebuild();
        }
    }else{
        while(n - tot < m){
            for(int j = 2;j <= n;j++){
                if(vis[j] != vis[1]){
                    swap(b[1],b[j]);
                    printf("%d %d ",1,j);
                    break;
                }
            }
            rebuild();
        }
    }
    return 0;
}
