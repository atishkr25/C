// check prime between given number
#include <stdio.h>
int main()
{
    int l,u ,i,j,count =0;
    printf("enter two numbers range: ");
    scanf("%d%d",&l,&u);

  for (i=l+1; i<=u-1; i++)
  {
    for (j=2; j<=u-1; j++){

    if(i%j==0)
        break;
    }
    if (j==i)
    {
        printf("%d ",i);
    }
  }  
}