#include <bits/stdc++.h>
using namespace std;

long long getPow(int n, int power){
    long long res = 1;
    for(int i = 1; i<=power; i++){
        res = res * n;
    }
    return res;
}

int main() {
    int n, m, bx, by;
    cin>>n>>bx;

    int bxDigits[n];
    long long bxInDec = 0;
    int j = n-1;
    for(int i = 0; i<n; i++){
        cin>>bxDigits[i];

        //cout<< "bxInDec is"<<bxInDec<< " bxDigits["<< i<< "] is"<<bxDigits[i]<<" j is"<< j <<" bx is"<<bx<<endl;
        bxInDec += bxDigits[i]* getPow(bx,j);
        j--;
    }
    cin>>m>>by;

    int byDigits[m];
    long long byInDec = 0;
    j = m-1;
    for(int i = 0; i<m; i++ ){
        cin>>byDigits[i];

        byInDec += byDigits[i]* getPow(by,j);
        j--;
    }
    //cout<<bxInDec<< " "<< byInDec<<endl;

    if(bxInDec<byInDec){
        cout<<"<"<<endl;
    }
    else if(bxInDec==byInDec){
        cout<<"="<<endl;
    }
    else cout<<">"<<endl;
    return 0;
}

