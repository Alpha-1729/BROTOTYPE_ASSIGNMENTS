// Q23
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
        
        ArrayHelper arrayHelper = new ArrayHelper();
        
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the size of array: ");
        int limit = sc.nextInt();        
        
        System.out.print("Enter the values of array 1: ");
        int[][] arrayOne = arrayHelper.getArray(limit);
        
        System.out.print("Enter the values of array 2: ");
        int[][] arrayTwo = arrayHelper.getArray(limit);
        
        int[][] result = arrayHelper.addArray(arrayOne, arrayTwo, limit);
        
        System.out.println("Sum of array 1 and array 2: ");
        arrayHelper.displayArray(result, limit);
        sc.close();
    }
}