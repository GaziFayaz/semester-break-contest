#include <bits/stdc++.h>
using namespace std;

int main() {
    int input, binaryRep=0,parityCount=0;
    while(cin>>input){
        cout<<"inside while"<<endl;
        if(input == 0){
            return 0;
        }
        int count=0, rem=0;
        for(int i=input; i>0; i/=2){
            cout<<"inside for loop"<<endl;
            rem = i%2;
            cout << "rem is " << rem << " count is " << count << endl;
            cout<<"binary rep is "<<binaryRep<<endl;
            binaryRep += rem*pow(10, count);
            cout<<"binary rep is "<<binaryRep<<endl;
            if(rem==1){
                parityCount++;
            }
            count++;

        }
        cout<<binaryRep<<endl;
        binaryRep=0;
        parityCount= 0;
    }
    return 0;
}
