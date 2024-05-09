// Q1
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
        System.out.print("Type Crossroads on the console: ");
        String word = sc.nextLine();
        sc.close();
        
        printMessage(word, 8);
    }
    
    public static void printMessage(String word, int count) {
        if (count == 1) {
            return;
        }
        else {
            System.out.println(word);
            printMessage(word, count - 1);
        }
    }
}
