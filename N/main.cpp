#include <bits/stdc++.h>
using namespace std;

int main() {
    int cubes, maxHeight=0;
    cin>>cubes;
    if(cubes <1){
        return 0;
    }

    int cubesReq =1 ;
    while(cubes>=cubesReq){
        maxHeight++;
        cubes-=cubesReq;
        cubesReq+= (maxHeight+1);
    }
    cout<<maxHeight<<endl;
    return 0;
}
