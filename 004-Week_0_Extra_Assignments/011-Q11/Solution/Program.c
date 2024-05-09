// Q11
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
#include <stdbool.h>
void main()
{
    int limit;
    int array[100];
    bool isVisited[100];
    setbuf(stdout, NULL);
    
    printf("Enter the size of the array: ");
    scanf("%d", &limit);
    
    printf("Enter the values of the array: ");
    for (int i = 0; i < limit; i++) {
        isVisited[i] = false;
        scanf("%d", &array[i]);
    }
    
    // Find the repeating element.
    // Also mark the entry after printing the repeated value.
    for (int i = 0; i < limit; i++)
    {
        if (isVisited[i] == true){
            continue;
        }
        
        for (int j = i + 1; j < limit; j++)
        {
            if (array[i] == array[j])
            {
                if(isVisited[i] == false){
                    printf("%d ", array[i]);
                }
                
                isVisited[i] = true;
                isVisited[j] = true;
            }
        }
    }
    
    
}