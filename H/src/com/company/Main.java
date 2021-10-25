package com.company;

import java.util.Scanner;
import java.lang.String;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        String input= "";
        input = sc.next();
        char[] strArray = input.toCharArray();
        for(int i = 0 ; i<input.length(); i++){
            System.out.println("Value of i is "+ i);
            System.out.println("Value at " + i + " is " + input.charAt(i));
            if((strArray[i] ==0) && (strArray[i+1] == 1)){
                System.out.println("In if block");
                StringBuilder string = new StringBuilder(strArray.toString());
                int j;
                for(j = i; j<n-2; j++){
                    string.setCharAt(j, input.charAt(j+2));
                }
                string.deleteCharAt((string.length())-1);
                string.deleteCharAt((string.length())-1);
                string.getChars(0, string.length()-1, strArray, 0);
                i=0;
                System.out.println("The string is " + input);
            }
            else if((input.) && (input.charAt(i+1) == 0)){
                System.out.println("In else if block");
                StringBuilder string = new StringBuilder(input);
                int j;
                for(j = i; j<n-2; j++){
                    string.setCharAt(j, input.charAt(j+2));
                }
                string.deleteCharAt((string.length())-1);
                string.deleteCharAt((string.length())-1);
                input = string.toString();
                i=0;
                System.out.println("The string is " + input);
            }
        }
        System.out.println(input.length());
    }
}
