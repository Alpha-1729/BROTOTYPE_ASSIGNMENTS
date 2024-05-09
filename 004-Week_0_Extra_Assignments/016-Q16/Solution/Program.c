// Q16
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
void main()
{
    int totalStudents, totalHandshake;
    setbuf(stdout, NULL);
    
    printf("Enter the number of students: ");
    scanf("%d", &totalStudents);
    
    totalHandshake = (totalStudents * (totalStudents - 1)) / 2;
    
    printf("Total number of handshake: %d", totalHandshake);
}