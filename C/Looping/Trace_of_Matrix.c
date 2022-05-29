/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int MatA[10][20]; //Declare Matrix A elements with size of 10 rows and 20 Columns at the maximum limit
    int i,j; // Two variable container i & j separately for my convenience on accessing row and column index of Particular element from Matrix and
    int Maxrow, Maxcol;  // Setting Max row and column of matrix we are going to use within the above specified limit says 10 rows and 20 Columns
    printf("Enter Matrix Row and column size");    // Provinding message to user as Enter Matrix Row and column size
    scanf("%d%d",&Maxrow, &Maxcol);                 // Collect value for row first and then col next
    // Next few lines of code upto next comment is for loading data into MatA variable
    for(i=0;i<Maxrow;i++)           // i based for loop gets incremented only when inner loops completed
    {
        for(j=0;j<Maxcol;j++)       // j based for loop gets increses upon execution of its block of statements
        {
            scanf("%d",&MatA[i][j]);    // based on i & j Mat[i th row][j th col] of Only one elements are inputed 
        }
        
    }
    
    // To Display the inputed elements of Matrix , following code will execute
    for(i=0;i<Maxrow;i++)
    {
        for(j=0;j<Maxcol;j++)
        {
            printf("%d",MatA[i][j]);
            //printf("%d\t",MatA[i][j]);         //Note 1: First Comment above line and Uncomment this Line and see How you displayed Matrix concent 
            
        }
       // printf("\n");                         // After execute Note 1: inference, now get another inference by uncomment this line, and see how matrix displays
       // Can you able to get insights why above printf("\n") statement is put outside inner for loop
    }
    exit(0);                          // Upto now you got skill of Loading values/ elements of Matrix and Displaying elements of Matrix one by one.
    // Are you clear , shall we go further comment above statement exit(0) and proceed further
    //Here code of looping for finding Trace of Matrix
    return 0;
}
