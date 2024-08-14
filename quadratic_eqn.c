#include<stdio.h>
#include<math.h>
// roots of quadratinc equation
int main() 
{
    int a, b, c, D,r1,r2;
    printf("enter the values of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    D = b*b-4*a*c;
    r1 = (-b+sqrt(D))/2*a;
    r2 = (-b-sqrt(D))/2*a;
    
    if(D>0)
    {
        printf("roots are real\n");
        printf("%d\t%d\t", r1,r2);
    }
    else if(D<0)
    {
        printf("root are imaginary\n");
    }
  else
  {
    printf(" both roots are equall %d %d",r1,r2);
  }
  return 0;
}