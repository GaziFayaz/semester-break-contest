package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        String input = sc.next();
        char[] strArray = input.toCharArray();
        for(int i=0; i<strArray.length; i++){
            System.out.println(strArray[i]);
        }
        for(int i = 0; i<strArray.length; i++){
            System.out.println("In first for loop");
            if(i+1 == strArray.length){
                continue;
            }
            System.out.println("value at index " + i + " = " + strArray[i] +
                    " And value at index " + (i+1) + " = " + strArray[i+1]);
            if( (strArray[i] == 0)  && (strArray[i+1] == 1) || (strArray[i] == 1)  && (strArray[i+1] == 0) ){
                System.out.println("In first if block");
                char[] tempArray = new char[(strArray.length)-2];
                int k=0;
                for(int j = 0; j<strArray.length; j++){
                    if( (j == i) || (j == i+1) ){
                        continue;
                    }
                    tempArray[k] = strArray[j];
                    k++;
                }
                strArray = tempArray;
                i=-1;
            }
        }
        System.out.println(strArray.length);

    }
}
