// Q25
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
        System.out.print("Enter the size of the array: ");
        int limit = sc.nextInt();
        
        int[] array = new int[limit];
        
        System.out.print("Enter the values of array: ");
        for (int i = 0; i < limit; i++) {
            array[i] = sc.nextInt();
        }
        
        sc.close();
        
        System.out.print("Array after skipping two elements after an odd number: ");
        for (int i = 0; i < limit; i++) {
            if (array[i] % 2 == 1) {
                i += 2;
                continue;
            }
            
            System.out.print(array[i] + " ");
        }
    }
}