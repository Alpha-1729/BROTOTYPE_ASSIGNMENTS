// Q20
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
    
        int rows = 4;
        int counter = 1;
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(counter + " ");
                counter++;
            }
            System.out.println();
        }
        
    }
}