// Q22
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
    
    public static Scanner sc = new Scanner(System.in);
    public static void main(String args[]) {
        System.out.print("Enter the size of array: ");
        int limit = sc.nextInt();
        
        int[][] arrayOne = new int[limit][limit];
        int[][] arrayTwo = new int[limit][limit];
        int[][] result = new int[limit][limit];
        
        System.out.print("Enter the values of array 1: ");
        getArray(arrayOne, limit);
        
        System.out.print("Enter the values of array 2: ");
        getArray(arrayTwo, limit);
        
        addArray(arrayOne, arrayTwo, result, limit);
        
        System.out.println("Sum of array 1 and array 2: ");
        displayArray(result, limit);
        
        sc.close();
    }
    
    public static void getArray(int[][] array, int limit) {
        for (int i = 0; i < limit; i++) {
            for (int j = 0; j < limit; j++) {
                array[i][j] = sc.nextInt();
            }
        }
    }
    
    public static void addArray(int[][] arrayOne, int[][] arrayTwo, int[][] result, int limit) {
        for (int i = 0; i < limit; i++) {
            for (int j = 0; j < limit; j++) {
                result[i][j] = arrayOne[i][j] + arrayTwo[i][j];
            }
        }
    }
    
    public static void displayArray(int[][] result, int limit) {
        for (int i = 0; i < limit; i++) {
            for (int j = 0 ; j < limit; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
    }
} 