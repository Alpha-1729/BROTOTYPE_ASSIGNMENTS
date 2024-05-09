// Q17
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
    
    public static void main (String args[]) {
        
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter two number: ");
        float num1 = sc.nextFloat();
        float num2 = sc.nextFloat();
        
        System.out.println(" 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n");
        System.out.println("Choose operation\n");
        int operation = sc.nextInt();
        sc.close();
        
        Calculation calc = new Calculation(num1, num2);
        switch (operation) {
            case 1:
                System.out.println("Result is: " + calc.add());
                break;
            case 2:
                System.out.println("Result is: " + calc.subtract());
                break;
            case 3:
                System.out.println("Result is: " + calc.multiply());
                break;
            case 4:
                System.out.println("Result is: " + calc.divide());
                break;
            default:
                System.out.println("Invalid Input");
        
        }
        
    }
}