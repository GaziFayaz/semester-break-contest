package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(true){
            //System.out.println("in first while loop");
            int emptyBottles = sc.nextInt();
            if (emptyBottles == 0) {
                return;
            }
            int fullBottles = 0;
            System.out.println(getCoke(emptyBottles, fullBottles));
        }
    }

    public static int getCoke(int emptyBottles, int fullBottles) {
        if (emptyBottles == 0 || emptyBottles == 1) {
            return fullBottles;
        }
        else {
            if (emptyBottles % 3 != 0) {
                if (emptyBottles % 3 == 2) {
                    emptyBottles++;
                    getCoke(emptyBottles, fullBottles);
                }
                fullBottles += emptyBottles / 3;
                emptyBottles = (emptyBottles - ((emptyBottles / 3) * 3)) + (emptyBottles / 3);
            }
            else{
                fullBottles += emptyBottles / 3;
                emptyBottles = (emptyBottles / 3);
            }
            return getCoke(emptyBottles, fullBottles);
        }
    }
}
