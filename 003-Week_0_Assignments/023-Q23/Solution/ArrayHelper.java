import java.util.Scanner;

public class ArrayHelper {

    
    public int[][] getArray(int limit) {
        int[][] array = new int[limit][limit];
        
        Scanner sc = new Scanner(System.in);
        
        for (int i= 0; i < limit; i++) {
            for (int j = 0; j < limit; j++) {
                array[i][j] = sc.nextInt();
            }
        }
        return array;
    }
    
    public int[][] addArray(int[][] arrayOne, int[][] arrayTwo, int limit) {
        int[][] result = new int[limit][limit];
        
        for (int i = 0; i < limit; i++) {
            for (int j = 0; j < limit; j++) {
                result[i][j] = arrayOne[i][j] + arrayTwo[i][j];
            }
        }
        
        return result;
    }
    
    public void displayArray(int[][] array, int limit) {
        for(int i = 0; i < limit; i++) {
            for (int j = 0; j < limit; j++) {
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }
}
