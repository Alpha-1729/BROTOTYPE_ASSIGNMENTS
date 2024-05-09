// Q2
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

public class Program {

    public static void main(String args[]) {
    
        int rows = 6;
        
        for (int i = 1; i <= rows; i++) {
            for (int j = 0; j < rows - i; j ++) {
                System.out.print(" ");
            }
            
            for (int k  = 1; k < i; k++) {
                System.out.print(k + " ");
            }
            System.out.println(1);
        }
    }
}