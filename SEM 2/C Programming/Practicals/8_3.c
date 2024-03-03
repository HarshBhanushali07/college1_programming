//8_3
//Add two matrix using pointers.

#include <stdio.h>
void main() 
{
    int row, col;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    int matrix1[row][col], matrix2[row][col], sum[row][col];
    int i,j;
    
    printf("Enter elements of matrix1:\n");
    for(i=0;i<row;i++) 
	{
        for(j=0;j<col;j++) 
		{
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("Enter elements of matrix2:\n");
    for(i=0;i<row;i++) 
	{
        for(j=0;j<col;j++) 
		{
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    for(i=0;i<row;i++) 
	{
        for(j=0;j<col;j++) 
		{
            *(*(sum+i)+j) = *(*(matrix1+i)+j)+*(*(matrix2+i)+j);
        }
    }
    
    printf("Sum of matrices:\n");
    for(i=0;i<row;i++) 
	{
        for(j=0;j<col;j++) 
		{
            printf("%d ",*(*(sum + i)+j));
        }
        printf("\n");
    }
}
