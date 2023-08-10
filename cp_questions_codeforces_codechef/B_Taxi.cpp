// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int hsh[5] = {};

//     for(int i{1} ; i<=n ; i++) {
//         int x;
//         cin>>x;
//         hsh[x]++;
//     }
//     int taxi{};
//     taxi+=hsh[4];
//     while((hsh[3]>0) && (hsh[1]>0)) {
//         hsh[3]--;
//         hsh[1]--;
//         taxi++;
//     }

//     if(hsh[3]>0) taxi+=(hsh[3]);
    
//     taxi+=(hsh[2]/2);
//     hsh[2]%=2; 

//     taxi+=(hsh[1]/4);
//     hsh[1]%=4;

//     if(hsh[1]>2) taxi++;
//     // if(hsh[2]==1) taxi++;
//     if((hsh[2]==1)&&((hsh[1]>=0)&&(hsh[1]<=2))) taxi++;
//     if((hsh[2]==0)&&((hsh[1]>0)&&(hsh[1]<=2))) taxi++;

//     cout<<taxi<<"\n";
// }