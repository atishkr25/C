#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,j,k;
    printf("enter the num. of rows: ");
    scanf("%d",&n);
   
   for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
        printf(" ");
        }
            for( k=1;k<=2*i-1; k++)
            {
                printf("*");
            } 
       
            printf("\n"); 
    }    
}