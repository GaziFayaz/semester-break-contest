#include <bits/stdc++.h>
using namespace std;

int main(){
    int parenthesesCount=0, squareBracesCount=0;
    int numberOfInputs;
    cin>>numberOfInputs;
    string inputs[numberOfInputs];

    for(int i = 0; i<numberOfInputs; i++){
        cin>>inputs[i];
    }

    for(int i = 0 ; i<numberOfInputs;i++){
        parenthesesCount=0, squareBracesCount=0;
        for(int j = 0; j<inputs[i].length(); j++){
            if((inputs[i][j] == '(') || (inputs[i][j] == '[')){
                if(j+1 == inputs[i].length()){
                    cout<<"No"<<endl;
                    break;
                }
                if(inputs[i][j] == '('){
                    parenthesesCount++;
                    //cout<<"( found! adding to parentheses count. count is "<< parenthesesCount<< endl;
                }
                else{
                    squareBracesCount++;
                    //cout<<"[ found! adding to squareBraces count. count is "<< squareBracesCount<< endl;
                }
            }
            if((inputs[i][j] == ')') || (inputs[i][j] == ']')){

                if(inputs[i][j] == ')'){
                    if(parenthesesCount==0){
                        cout<<"No"<<endl;
                        break;
                    }
                    parenthesesCount--;
                    //cout<<") found! deleting from parentheses count. count is "<< parenthesesCount<< endl;
                }
                else{
                    if(squareBracesCount==0){
                        cout<<"No"<<endl;
                        break;
                    }
                    squareBracesCount--;
                    //cout<<"] found! removing from squareBraces count. count is "<< squareBracesCount<< endl;
                }
                if((j+1 == inputs[i].length()) &&(parenthesesCount==0 && squareBracesCount == 0)){
                    cout<<"Yes"<<endl;
                }
                else if((j+1 == inputs[i].length()) && (parenthesesCount!=0 && squareBracesCount != 0)){
                    cout<<"No"<<endl;
                }
            }
        }

    }
    return 0;
}
