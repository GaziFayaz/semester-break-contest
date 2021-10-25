#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    int minValue= 1000000000, minIndex;//determine last minimum value index
    for(int i = 0; i<n; i++){
        cin>>arr[i];

        if(arr[i] <= minValue){
            minValue = arr[i];
            minIndex = i;
        }
    }
    if(n <= 0){
        cout<<0;
        return 0;
    }

    int len = n;
    int ans = len*minValue;
    int count=0;
    if(minIndex+1 == n){
        for(int i = 0; i<n; i++){
            if(arr[i] == minValue){
                break;
            }
            count++;
        }
    }
    else{
        for(int i = minIndex+1; i<n; i++){
            if(arr[i] == minValue){
                break;
            }
            count++;
            if(i+1 == n){
                i =-1;
            }
        }
    }
    ans = ans + count;

    /*
    //count number squares that can be painted
    int count=0;
    if(minIndex+1 == n){
        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                break;
            }
            arr[i]--;
            count++;
            //cout<< "arr["<<i<<"] = "<<arr[i]<<endl;
            if(i+1 == n){
                i=-1;
            }
        }
    }
    else{
        for(int i = minIndex+1; i<n; i++){
            if(arr[i] == 0){
                break;
            }
            arr[i]--;
            count++;
            //cout<< "arr["<<i<<"] = "<<arr[i]<<endl;
            if(i+1 == n){
                i=-1;
            }
        }
    }*/
    cout<<ans;
    return 0;
}
