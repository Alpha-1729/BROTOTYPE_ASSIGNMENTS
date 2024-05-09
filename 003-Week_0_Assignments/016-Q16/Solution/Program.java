// Q16
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

import java.util.Scanner;
import java.lang.Math;

class Program {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a number: ");
        int number = sc.nextInt();
        sc.close();
        
        if (number < 2) {
            System.out.println("Entered number is not a prime number");
            return;
        }
        
        double upperLimit = Math.floor(Math.sqrt(number));
        
        for (int i = 2; i <= upperLimit; i++) {
           if (number % i == 0) {
                System.out.println("Entered number is not a prime number");
                return;
          }
       }
       
       System.out.println("Entered number is a prime number");
    }
}