// Q19
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

import java.util.Scanner;

public class Program {

    public static void main(String args[]) {
    
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter your annual income: ");
        int annualIncome = sc.nextInt();
        sc.close();
        
        float taxAmount = 0.0f;
        
        if (annualIncome > 1000000) {
            taxAmount = (30 * annualIncome) / 100.0f;
        }
        else if (annualIncome > 500000) {
            taxAmount = (20 * annualIncome) / 100.0f;
        }
        else if (annualIncome > 250000) {
            taxAmount = (5 * annualIncome) / 100.0f;
        }
        
        System.out.print("Income tax amount: " + taxAmount);
    }
}