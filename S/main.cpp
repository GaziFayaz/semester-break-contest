#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long heroes[n], minAttackHero = heroes[0];
    for(int i = 0; i<n; i++){
        cin>>heroes[i];
        if(heroes[i]<minAttackHero){
            minAttackHero = heroes[i];
        }
    }
    long long m;
    cin>>m;
    long long dragons[m][2];
    for(int i = 0; i<m; i++){
        cin>>dragons[i][0]>>dragons[i][1];
    }
    long long coinsNeeded, heroDefense, heroToAttack, attackHeroIndex = -1;

    for(int i = 0 ; i<m; i++){
        coinsNeeded =0;
        heroDefense = 0;
        heroToAttack = 0;
        //cout<<"coins Needed before checking " << coinsNeeded<< " and Dragon's defense is " <<dragons[i][0]<<endl;
        for(int j = 0 ; j< n; j++){
            if((heroes[j] <= dragons[i][0]) && (heroes[j] > heroToAttack)){
                heroDefense += heroToAttack;
                heroToAttack = heroes[j];
                attackHeroIndex = j;

            }
            else{
                heroDefense+=heroes[j];
            }
            if(heroToAttack==0){
                heroToAttack = minAttackHero;
                heroDefense -= minAttackHero;
            }

        }
        //cout<<" HeroToAttack is "<< heroToAttack<< " and HeroDefense is "<< heroDefense<<endl;
        if(heroToAttack<dragons[i][0]){
            coinsNeeded  += dragons[i][0] - heroToAttack;
        }
        if(heroDefense< dragons[i][1]){
            coinsNeeded+= dragons[i][1] - heroDefense;
        }
        cout<<coinsNeeded<<endl;
    }
    return 0;
}
