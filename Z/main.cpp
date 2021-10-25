#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int bidderArr[n];

    if(n<2 || n>1000){
        return 0;
    }

    int maxBid=0, secMaxBid=0, maxBidIndex = 0;
    for(int i=1; i<=n; i++){
        cin>>bidderArr[i];
        if(bidderArr[i] <1 ||bidderArr[i]>10000)return 0;
        if(bidderArr[i]>maxBid){
            //cout<<"checking maxBid if block with value " << bidderArr[i] << " at "<< i<<endl;
            secMaxBid = maxBid;
            maxBid = bidderArr[i];
            maxBidIndex = i;
        }
        if(bidderArr[i]<maxBid && bidderArr[i] >secMaxBid){
            secMaxBid = bidderArr[i];
        }
    }
    cout<<maxBidIndex<< " "<< secMaxBid<<endl;

    return 0;
}
