// Q18
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
        
        System.out.println("Enter the mark scored by the student");
        
        System.out.print("Written Test: ");
        int writtenMark = sc.nextInt();
        
        System.out.print("Lab Exams: ");
        int labMark = sc.nextInt();
        
        System.out.print("Assignment: ");
        int assignmentMark = sc.nextInt();
        
        sc.close();
        
        float overallGrade = ((writtenMark * 70) + (labMark * 20) + (assignmentMark * 10)) / 100.0f;
        
        System.out.println("Grade of the student is " + overallGrade);
    }
}