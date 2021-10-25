#include <bits/stdc++.h>
using namespace std;

int main() {
    int input, sumOppositeSides, count=0;
    cin>>input;
    if(input%2!=0){
        cout<<0;
        return 0;
    }
    sumOppositeSides = input/2;
    int largeSide = sumOppositeSides-1;

    while(largeSide>sumOppositeSides/2){
        count++;
        largeSide--;
    }
    cout<<count;
    return 0;
}
