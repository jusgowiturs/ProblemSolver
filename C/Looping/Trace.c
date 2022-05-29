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
    printf("Enter Elements of Matrix one by one\n");
    for(i=0;i<Maxrow;i++)           // i based for loop gets incremented only when inner loops completed
    {
        for(j=0;j<Maxcol;j++)       // j based for loop gets increses upon execution of its block of statements
        {
            scanf("%d",&MatA[i][j]);    // based on i & j Mat[i th row][j th col] of Only one elements are inputed 
        }
        
    }
    
    // To Display the inputed elements of Matrix , following code will execute
    printf("\nMatrix A as follows\n");
    for(i=0;i<Maxrow;i++)
    {
        for(j=0;j<Maxcol;j++)
        {
           printf("%d",MatA[i][j]);
           // printf("%d\t",MatA[i][j]);         //Note 1: First Comment above line and Uncomment this Line and see How you displayed Matrix concent 
            
        }
        //printf("\n");                         // After execute Note 1: inference, now get another inference by uncomment this line, and see how matrix displays
       // Can you able to get insights why above printf("\n") statement is put outside inner for loop
    }
   // exit(0);                          // Upto now you got skill of Loading values/ elements of Matrix and Displaying elements of Matrix one by one.
    // Are you clear , shall we go further comment above statement exit(0) and proceed further
    //Here code of looping for finding Trace of Matrix
    /*
    Suppose Matrix looks like follows
    1   2   3
    10  20  30
    -1  -10 -10
    Trace of Matrix if sum of diagonal elements of Matrix
    For elementwise 2D array handling we have to use 2 level of nested looping, 3D means 3 level of nested looping and so on...
    */
    // Following code is elementwise handling of 2D array(Matrix)
    for(i=0;i<Maxrow;i++)
    {
        for(j=0;j<Maxcol;j++)
        {
            printf("Row No. %d,Column No. %d of Matrix element is %d\n",i,j,MatA[i][j]);// Here it gives elements of matrix as rowwise
            // Comment above line and uncomment following line for column wise accessing and Displaying
            //printf("Row No. %d,Column No. %d of Matrix element is %d\n",i,j,MatA[j][i]);;// Here it gives elements of matrix as column wise
        }
    }
    //exit(0);
    // Are you clear , shall we go further comment above statement exit(0) and proceed further
    //Now you know how to access elementwise by nexted looping
    // Lets start coding for finding trace of matrix, in which sum of elements whose indexes of row and column to be same
    int sum = 0;        // Resultant holder of data type "int32" with initial value as 0
    for(i=0;i<Maxrow;i++)
    {
        for(j=0;j<Maxcol;j++)
        {
            if(i==j)
            {
                sum = sum + MatA[i][j];
            }
            else
            {
                printf("Addition is not processed as it is not diagonal elements\n");
            }
        
        }
    }
    printf("Trace of Matrix :\t %d\n",sum);
    printf("\n Another Approach \n\n");
    // Lets start coding for finding trace of matrix in simple approach as diagonal elements indexes should be same so lets use same value holder for both row & column accessing as follows
    int sum = 0;        // Resultant holder of data type "int32" with initial value as 0
    for(i=0;i<Maxrow;i++)
    {
        sum = sum + MatA[i][i];   // same i value will be given to point corresponding elements in matrix, as MatA[0][0],MatA[1][1] and so on...
    }
    printf("Trace of Matrix :\t %d\n",sum);
    
    return 0;
}

