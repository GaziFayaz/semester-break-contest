package com.company;
import java.util.Scanner;
import java.lang.Math;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int input, binaryRep=0,parityCount=0;
        while(true){
            input = sc.nextInt();
            //System.out.println("inside while");
            if(input == 0){
                break;
            }
            int count=0, rem=0;
            for(int i=input; i>0; i/=2){
                //System.out.println("inside for loop");
                rem = i%2;
                //System.out.println("rem is " + rem + " count is " + count);
                //System.out.println("binary rep is " + binaryRep);
                binaryRep += rem*Math.pow(10, count);
                //System.out.println("binary rep is " + binaryRep);
                if(rem==1){
                    parityCount++;
                }
                count++;

            }
            //System.out.println(binaryRep);
            System.out.println("The parity of " + binaryRep + " is " + parityCount + " (mod 2).");
            binaryRep=0;
            parityCount= 0;
        }
    }

}
