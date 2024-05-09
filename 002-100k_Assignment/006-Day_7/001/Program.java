// Day 7
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

    System.out.print("Enter a number: ");
    int number = sc.nextInt();
    sc.close();
	
	if(number < 2){
		System.out.println("Entered number is not a prime number.");
		return;
	}

    double limit = Math.floor(Math.sqrt(number));
    for (int i = 2; i <= limit; i++) {
      if (number % i == 0) {
        System.out.println("Entered number is not a prime number");
        return;
      }
    }
    System.out.println("Entered number is a prime number");
  }
}
