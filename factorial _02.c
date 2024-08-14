// factorial of a number 
#include <stdio.h>
int main()
{
    int n,i,factorial=1;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n==0 || n==1){
    printf("1");
    }
    for(i=1;i<=n; i++){
    factorial*=i;}
    printf("factorial = %d", factorial);
    return 0;
}