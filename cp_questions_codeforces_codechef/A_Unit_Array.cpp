#include<bits/stdc++.h>
#define mod (int)(1e9+7)
#define int int64_t
using namespace std;
int32_t main() {
	
	int yoyo;cin>>yoyo;
	while(yoyo--) {
		int n;cin>>n;
        int x{},y{};
        for(int i{} ; i<n ; i++) {
            int z;cin>>z;
            if(z>0) {x++;}
            else {y++;}
        }
        if(x>=y) {
            // int ans
            if((y)%2 == 0) {
                cout<<"0\n";continue;
            }
            cout<<"1\n";continue;
        } else {
            int ans1{};
            int z = y-x;
            if(z%2 == 0) {ans1+=z/2;}
            else {ans1+=z/2+1;}
            y-=ans1;
            x+=ans1;
            if(y%2 == 0) {cout<<ans1<<"\n";continue;}
            else {cout<<ans1+1<<"\n";}
            // if((y+(z/2)) %2 == 0) {}
        }
	}
}