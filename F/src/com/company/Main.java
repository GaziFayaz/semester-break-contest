package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int dayNum = sc.nextInt();
        if(dayNum==0){
            return;
        }
        int[] meatPerDay = new int[dayNum];
        int[] pricePerDay = new int[dayNum];
        int minPrice = pricePerDay[0];
        int minMoney = 0;

        for(int i = 0; i<dayNum; i++){
            meatPerDay[i] = sc.nextInt();
            if(meatPerDay[i] ==0){
                return;
            }
            pricePerDay[i] = sc.nextInt();
            if ((pricePerDay[i] == 0) || (pricePerDay[i] > 100)) {
                return;
            }
            if(i ==0){
                minPrice = pricePerDay[i];
            }
            else{
                if(pricePerDay[i]<minPrice){
                    minPrice = pricePerDay[i];
                }
            }
        }

        for(int i = 0; i<dayNum; i++){
            if(pricePerDay[i] == minPrice){
                for(int j = i; j<dayNum; j++){
                    minMoney += (meatPerDay[j]*minPrice);
                }
                break;
            }
            else{
                minMoney += meatPerDay[i]*pricePerDay[i];
            }
        }

        System.out.println(minMoney);
    }
}
