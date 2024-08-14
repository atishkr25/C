#include<stdio.h>
int main()
{
int p,q,m,i,j;

    printf("enter the row and column of the matrix: ");
    scanf("%d%d", &p,&q);
    int matrix[p][q],transpose[q][p];
   printf("enter the elements into the matrix: ");
   for(i=0;i<p;i++)
   {
    for(j=0;j<q;j++){
        scanf("%d",&matrix[i][j]);
    }
   }
   printf("entered matrix is\n");
   for(i=0;i<p;i++)
   { 
    for(j=0;j<q;j++)
       {
        printf("%d\t", matrix[i][j]);
       }
    printf("\n");
   }

for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        transpose[i][j] = matrix[j][i];
    }
}
 printf("transpose matrix is\n");
for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        printf("%d\t", transpose[i][j]);
    }
    printf("\n");
}

}
