// Q21
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
        
        System.out.print("Enter the array limit: ");
        int limit = sc.nextInt();
        
        // Arrays for storing the input and result.
        int[] arrayOne = new int[limit];
        int[] arrayTwo = new int[limit - 1];
        
        System.out.print("Enter the values of array: ");
        for (int i = 0; i < limit; i++) {
            arrayOne[i] = sc.nextInt();
        }
        
        sc.close();
        
        for (int i = 0; i < limit - 1; i++) {
            int product = arrayOne[i] * arrayOne[i + 1];
            arrayTwo[i] = product;
        }
        
        // Printing the result array.
        System.out.println("Output");
        for (int i = 0; i < limit - 1; i++) {
            System.out.print(arrayTwo[i] + " ");
        }
    }
}