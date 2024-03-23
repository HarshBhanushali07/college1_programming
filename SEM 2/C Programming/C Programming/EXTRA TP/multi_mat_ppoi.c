#include <stdio.h>
void main() 
{
    int row, col;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    int matrix1[row][col], matrix2[row][col], result[row][col];
    int i,j,k;
    
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


    int (*mat1)[col] = matrix1;
    int (*mat2)[col] = matrix2;
    int (*multi)[col] = result;

    for (i=0;i<row; i++) 
	{
        for (j=0;j<col;j++)
		{
			*(*(multi+i)+j)=0;
            for (k=0;k<col;k++) 
			{
                *(*(multi+i)+j) += (*(*(mat1+i)+k)) * (*(*(mat2+k)+j));
            }
         
		}
    }

    printf("Resultant Matrix:\n");
    for(i = 0; i < row; i++) 
	{
        for(j = 0; j < col; j++) 
		{
            printf("%d ",*(*(multi+i)+j));
        }
        printf("\n");
    }
}

