// Q20
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
#include <stdlib.h>

void matrixAddition();
void matrixMultiplication();
void matrixSubtraction();
void matrixTranspose();
void exitProgram();

void main()
{
    int userInput;
    setbuf(stdout, NULL);
    
    do
    {
        printf("\n\nChoose one option: \n");
        printf("1. Matrix Addition \n");
        printf("2. Matrix Multiplication \n");
        printf("3. Matrix Subtraction \n");
        printf("4. Matrix Transpose \n");
        printf("5. Exit \n");
        scanf("%d", &userInput);
        
        switch (userInput)
        {
            case 1:
                matrixAddition();
                break;
            case 2:
                matrixMultiplication();
                break;
            case 3:
                matrixSubtraction();
                break;
            case 4:
                matrixTranspose();
                break;
            case 5:
                exitProgram();
                break;
            default:
                printf("Invalid Input \n");
        }
        
    } while(1 == 1);
}

void exitProgram()
{
    exit(0);
}

void matrixTranspose()
{
    int rows, columns;
    int matrixOne[10][10];
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    getchar();
    
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    getchar();
    
    printf("Enter the values of the matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrixOne[i][j]);
            getchar();
        }
    }
    
    printf("Transpose of the matrix is: \n");
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", matrixOne[j][i]);
        }
        printf("\n");
    }
}

void matrixMultiplication()
{
    int rows1, rows2, columns1, columns2;
    int matrixOne[10][10], matrixTwo[10][10];
    
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d", &rows1, &columns1);
    getchar();
    
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d", &rows2, &columns2);
    getchar();
    
    if (columns1 != rows2)
    {
        printf("column count of first matrix should be equal to the row count of the second matrix.");
        return;
    }
    
    printf("Enter the values of the first matrix: \n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            scanf("%d", &matrixOne[i][j]);
            getchar();
        }
    }
    
    printf("Enter the values of the second matrix: \n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            scanf("%d", &matrixTwo[i][j]);
            getchar();
        }
    }
    
    // Multiplication.
    printf("\n Result is: \n");
    for(int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)  
        {
            int result = 0;
            for (int k = 0; k < columns1; k++)
            {
                result += matrixOne[i][k] * matrixTwo[k][j];
            }
            printf("%d ", result);
        }
        printf("\n");
    }
    
}


void matrixAddition()
{
    int rows, columns;
    int matrixOne[10][10], matrixTwo[10][10];
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    getchar();
    
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    getchar();
    
    printf("Enter the values of the first matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrixOne[i][j]);
            getchar();
        }
    }
    
    printf("Enter the values of the second matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrixTwo[i][j]);
            getchar();
        }
    }
    
    printf("Sum of the matrix is: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrixOne[i][j] + matrixTwo[i][j]);
        }
        printf("\n");
    }
}

void matrixSubtraction()
{
    int rows, columns;
    int matrixOne[10][10], matrixTwo[10][10];
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    getchar();
    
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    getchar();
    
    printf("Enter the values of the first matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrixOne[i][j]);
            getchar();
        }
    }
    
    printf("Enter the values of the second matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrixTwo[i][j]);
            getchar();
        }
    }
    
    printf("Difference of the matrix is: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrixOne[i][j] - matrixTwo[i][j]);
        }
        printf("\n");
    }
}