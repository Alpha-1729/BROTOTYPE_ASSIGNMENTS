// Q26
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
        
        int limit = 5;
        int starCount = 2;
        
        for (int i = 0; i < limit; i++) {
        
            if (starCount % 2 == 0) {
                for (int j = 0; j < starCount; j++) {
                    System.out.print("*");
                }
                
                System.out.println();
            }
            else {
                for (int j = 0; j < starCount; j++) {
                    System.out.println("*");
                }
            }
            
            starCount ++;
        }
    }
}